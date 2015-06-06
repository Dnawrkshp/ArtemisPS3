#include "types.h"
#include "common.h"
#include "printf.h"
#include "misc.h"

#include <sdk_version.h>
#include <cellstatus.h>
#include <cell/cell_fs.h>
#include <cell/rtc.h>
#include <cell/pad.h>

#include <sysutil/sysutil_common.h>

#include <sys/prx.h>
#include <sys/return_code.h>
#include <sys/ppu_thread.h>
#include <sys/event.h>
#include <sys/syscall.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/memory.h>
#include <sys/timer.h>

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "ps3mapi_ps3_lib.h"

SYS_MODULE_INFO(ART, 0, 1, 0);
SYS_MODULE_START(art_start);
SYS_MODULE_STOP(art_stop);

#define THREAD_NAME "artt"
#define STOP_THREAD_NAME "arts"
#define uint	unsigned int

#define MIN(a, b)	((a) <= (b) ? (a) : (b))
#define ABS(a)		(((a) < 0) ? -(a) : (a))

static const int second = 1000000;

const char* VERSION = "artemis r2";

static sys_ppu_thread_t thread_id = 1;

static int doForceWrite = 0;
static int isConstantWrite = 0;
static process_id_t attachedPID = 0;

//Config
static int hasChecked = 0;
static int isDEX = 0;
static int isCCAPI = 0;

char * userCodes = NULL;

//Find Replace
#define scanInc 0x1000
const char memBuf[scanInc];

int art_start(uint64_t arg);
int art_stop(void);
static void stop_prx_module(void);

extern double ___atof(const char *str);

void ConvertCodes(unsigned long pid, char * ncCodes);
char * ReadHex(char * read, int start, int len, char * buf, int bufSize);
int ParseLine(unsigned long pid, char * lines, int start, int linesLen, int * skip, int doForceWrite);
char * ReadHexPartial(char * read, int start, int len, char * buf, int bufSize);
int WriteMem(unsigned long pid, uint64_t addr, char * buf, int size);
int CompareMemory(unsigned long pid, uint64_t addr, char * buf, int bufLen);
int CompareMemoryBuffered(char * source, int sourceOff, char * buf, int bufLen);
int CompareMemoryAnd(unsigned long pid, uint64_t addr, char * buf, int bufLen);
int isCodeLineValid(char * line);
int getFileSize(const char * path);
int readFile(const char * path, char * buffer, int size);
void * getNIDfunc(const char * vsh_module, uint32_t fnid, int32_t offset);
static void show_msg(char* msg);
void SetStatusOff(void);
void SetStatusOn(void);

//From webman-MOD
int (*vshtask_notify)(int, const char *) = NULL;

void * (*vsh_malloc)(unsigned int size) = NULL;
int (*vsh_free)(void * ptr) = NULL;

/*
 * From webman-MOD source
 * Grabs the VSH export function for the given fnid
 * Used to find malloc, free, and show notification
 */
void * getNIDfunc(const char * vsh_module, uint32_t fnid, int32_t offset)
{
	// 0x10000 = ELF
	// 0x10080 = segment 2 start
	// 0x10200 = code start

	uint32_t table = (*(uint32_t*)0x1008C) + 0x984; // vsh table address
//	uint32_t table = (*(uint32_t*)0x1002C) + 0x214 - 0x10000; // vsh table address
//	uint32_t table = 0x63A9D4;


	while(((uint32_t)*(uint32_t*)table) != 0)
	{
		uint32_t* export_stru_ptr = (uint32_t*)*(uint32_t*)table; // ptr to export stub, size 2C, "sys_io" usually... Exports:0000000000635BC0 stru_635BC0:    ExportStub_s <0x1C00, 1, 9, 0x39, 0, 0x2000000, aSys_io, ExportFNIDTable_sys_io, ExportStubTable_sys_io>

		const char* lib_name_ptr =  (const char*)*(uint32_t*)((char*)export_stru_ptr + 0x10);

		if(strncmp(vsh_module, lib_name_ptr, strlen(lib_name_ptr))==0)
		{
			// we got the proper export struct
			uint32_t lib_fnid_ptr = *(uint32_t*)((char*)export_stru_ptr + 0x14);
			uint32_t lib_func_ptr = *(uint32_t*)((char*)export_stru_ptr + 0x18);
			uint16_t count = *(uint16_t*)((char*)export_stru_ptr + 6); // number of exports
			for(int i=0;i<count;i++)
			{
				if(fnid == *(uint32_t*)((char*)lib_fnid_ptr + i*4))
				{
					// take address from OPD
					return (void**)*((uint32_t*)(lib_func_ptr) + i) + offset;
				}
			}
		}
		table=table+4;
	}
	return 0;
}

/*
 * From webman-MOD
 * Displays a notification on the PS3
 */
static void show_msg(char* msg)
{
	if(!vshtask_notify)
		vshtask_notify = (void*)((int)getNIDfunc("vshtask", 0xA02D46E7, 0));

	if(strlen(msg)>200) msg[200]=0;

	if(vshtask_notify)
		vshtask_notify(0, msg);
}

/*
 * VSH Export for malloc
 */
static void * _malloc(unsigned int size)
{
	if (!vsh_malloc)
		vsh_malloc = getNIDfunc("allocator", 0x759E0635, 0);
	
	if (vsh_malloc)
		return vsh_malloc(size);
	else
		printf ("Unable to find malloc\n");
	
	return NULL;
}

/*
 * VSH Export for free
 */
static void _free(void * ptr)
{
	if (!vsh_free)
		vsh_free = (void *)((int)getNIDfunc("allocator", 0x77A602DD, 0));
	
	if (vsh_free)
	{
		vsh_free(ptr);
		//ptr = NULL;
	}
	else
		printf ("Unable to find free\n");
	
	return;
}

/*
 * Code Parsing Functions
 */

/*
 * Function:		ReadHexPartial()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Converts a hex string into an array of bytes
 *					In cases where the len is less than 4, it will shift the value over such that something like "011" will be 0x11
 * Arguments:
 *	read:			buffer containing string
 *	start:			start index of conversion within buffer
 *	len:			length of hex string
 *	buf:			buffer that will store the resulting byte/char array after conversion
 *	bufSize:		allocated size of buf
 * Return:			Returns pointer to buf
 */
char * ReadHexPartial(char * read, int start, int len, char * buf, int bufSize)
{
	memset(buf, 0, bufSize);
	int str = (start + len - 1);
	int cnt = 0;
	for (int x = str; x >= start; x--)
	{
		while ((read[x] == ' ' || read[x] == '\r' || read[x] == '\n') && x >= start)
			x--;
		if (x < start)
			break;
		
		unsigned char c = (unsigned char)(((unsigned char)read[x] < 0x41) ? ((unsigned char)read[x] - 0x30) : ((unsigned char)read[x] - 0x37));
		
		int bufOff = ((bufSize < 4) ? 4 : bufSize) - (cnt/2) - 1;
		
		if ((cnt % 2) == 0)
			buf[bufOff] |= (unsigned char)c;
		else
			buf[bufOff] |= (unsigned char)(c << 4);
			
		//printf ("%c => %x buf[%d - (%d/2) - 1](%d)==%x shift = %d\n", read[x], c, bufSize, cnt, bufOff, buf[bufOff], cnt == 0 ? 0 : 4);
		cnt++;
	}
	
	return buf;
}
 
/*
 * Function:		ReadHex()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Converts a hex string into an array of bytes
 *					In cases where the len is less than 4, it will NOT (unlike ReadHexPartial) shift the value over such that something like "011" will be 0x01100000
 * Arguments:
 *	read:			buffer containing string
 *	start:			start index of conversion within buffer
 *	len:			length of hex string
 *	buf:			buffer that will store the resulting byte/char array after conversion
 *	bufSize:		allocated size of buf
 * Return:			Returns pointer to buf
 */
char * ReadHex(char * read, int start, int len, char * buf, int bufSize)
{
	for (int x = start; x < (len + start); x += 2)
	{
		buf[(x - start)/2] = (unsigned char)((((unsigned char)read[x] < 0x41) ? ((unsigned char)read[x] - 0x30) : ((unsigned char)read[x] - 0x37)) << 4) | (unsigned char)(((unsigned char)read[x+1] < 0x41) ? ((unsigned char)read[x+1] - 0x30) : ((unsigned char)read[x+1] - 0x37));
	}
	
	return buf;
}

/*
 * Function:		WriteMem()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Writes the contents of buf to addr
 * Arguments:
 *	pid:			process id of process to write to
 *	addr:			address to write to
 *	buf:			bytes to write to addr
 *	size:			number of bytes to write from buf
 * Return:			Returns the result of set_process_mem (>= 0 is a success)
 */
int WriteMem(unsigned long pid, uint64_t addr, char * buf, int size)
{
	char bufTemp[4];
	int ret1 = 0;
	
	if (size > 4 && 0) //Can't seem to write too many bytes at once
	{
		for (int z = 0; z < size; z += 4)
		{
			int zl = (size - 4);
			if (zl > 4)
				zl = 4;
				
			strncpy(bufTemp, buf + z, 4);
			if (addr != 0)
			{
				ret1 = set_process_mem(pid, addr + z, bufTemp, zl, isDEX, isCCAPI);
				//if (ret1 != 0)
				//	printf("Writing %d bytes to 0x%08X return %d (== ENOSYS = %d)\n", zl, (uint)(addr + z), ret1, ret1 == ENOSYS);
			}
		}
	}
	else
	{
		if (addr != 0)
		{
			ret1 = set_process_mem(pid, addr, buf, size, isDEX, isCCAPI);
			//if (ret1 != 0)
			//	printf("Writing %d bytes to 0x%08X return %d (== ENOSYS = %d)\n", size, (uint)addr, ret1, ret1 == ENOSYS);
		}
	}
	
	return ret1;
}

/*
 * Function:		CompareMemory()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Compares the bytes at addr to buf (equal to)
 * Arguments:
 *	pid:			process id of process to write to
 *	addr:			address to read from
 *	buf:			bytes to compare with that from addr
 *	bufLen:			number of bytes to compare
 * Return:			Returns 0 if not equal, 1 if equal
 */
int CompareMemory(unsigned long pid, uint64_t addr, char * buf, int bufLen)
{
	char cmp[1];
	
	for (int x = 0; x < bufLen; x++)
	{
		if (get_process_mem(pid, addr + (uint64_t)x, cmp, 1, isDEX, isCCAPI) < 0)
			return 0;
		if (buf[x] != cmp[0])
			return 0;
	}
	
	return 1;
}

/*
 * Function:		CompareMemoryBuffered()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Compares the bytes at source to buf (equal to)
 * Arguments:
 *	source:			buffer to compare with
 *	sourceOff:		offset within source buffer to start comparing with
 *	buf:			bytes to compare with that from source
 *	bufLen:			number of bytes to compare
 * Return:			Returns 0 if not equal, 1 if equal
 */
int CompareMemoryBuffered(char * source, int sourceOff, char * buf, int bufLen)
{
	for (int x = 0; x < bufLen; x++)
	{
		if (buf[x] != source[sourceOff + x])
			return 0;
	}
	
	return 1;
}

/*
 * Function:		CompareMemoryAnd()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Compares the bytes at addr to buf (and equal to)
 * Arguments:
 *	pid:			process id of process to write to
 *	addr:			address to read from
 *	buf:			bytes to compare with that from addr
 *	bufLen:			number of bytes to compare
 * Return:			Returns 0 if not equal, 1 if equal
 */
int CompareMemoryAnd(unsigned long pid, uint64_t addr, char * buf, int bufLen)
{
	char cmp[bufLen];
	if (get_process_mem(pid, addr, cmp, bufLen, isDEX, isCCAPI) < 0)
		return 0;
	
	for (int x = 0; x < bufLen; x++)
	{
		cmp[x] &= buf[x];
		if (cmp[x] != buf[x])
			return 0;
	}
	
	return 1;
}

/*
 * Function:		isCodeLineValid()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Checks if the line is a valid code
 * Arguments:
 *	line:			buffer holding line
 * Return:			Returns 0 if not valid, 1 if valid
 */
int isCodeLineValid(char * line)
{
	int lineLen = strlen(line);
	int spaceCnt = 0;
	for (int x = 0; x < lineLen; x++)
		if (line[x] == ' ')
			spaceCnt++;
	
	int isText = 0, isFloat = 0;
	if (line[0] == '1' && line[1] == ' ')
		isText = 1;
	else if (line[0] == '2' && line[1] == ' ')
		isFloat = 1;
	
	if (!isText && !isFloat)
	{
		//Check number of spaces
		if (spaceCnt != 2)
			return 0;
		
		//Check hex
		for (int z = 0; z < lineLen; z++)
		{
			char c = line[z];
			if (c >= 0x61)
				c -= 0x20;
				
			if (!(c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E' || c == 'F' || c == ' ' || c == '\r' || c == '\n' || c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9'))
			{
				return 0;
			}
		}
	}
	else if (isText && !isFloat)
	{
		//Check number of spaces
		if (spaceCnt < 2)
			return 0;
		
		//Check hex
		int textSpaceCnt = 0;
		for (int z = 0; z < lineLen; z++)
		{
			char c = line[z];
			if (c == ' ')
				textSpaceCnt++;
			if (c >= 0x61)
				c -= 0x20;
			
			if (textSpaceCnt >= 2)
				break;
			
			if (!(c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E' || c == 'F' || c == ' ' || c == '\r' || c == '\n' || c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9'))
			{
				return 0;
			}
		}
	}
	else if (!isText && isFloat)
	{
		//Check number of spaces
		if (spaceCnt != 2)
			return 0;
		
		//Check hex
		for (int z = 0; z < lineLen; z++)
		{
			char c = line[z];
			if (c >= 0x61)
				c -= 0x20;
			
			if (!(c == '.' || c == '-' || c == 'A' || c == 'B' || c == 'C' || c == 'D' || c == 'E' || c == 'F' || c == ' ' || c == '\r' || c == '\n' || c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9'))
			{
				return 0;
			}
		}
	}
	else
		return 0;
	
	return 1;
}

/*
 * Function:		ParseLine()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		The core of the Artemis PS3 Engine
 *					Parses the line at start and performs the code operation on it appropriately
 * Arguments:
 *	pid:			process id of process to write to
 *	lines:			buffer containing entire code list
 *	start:			start position of current line
 *	linesLen:		strlen of lines (pre-calculated for speed)
 *	skip:			pointer to an int that holds the number of lines to skip (used with multiline codes and conditionals)
 *	doForceWrite:	whether the user has pressed the activation combo or the code is constant writing
 * Return:			Returns index of next line (within lines)
 */
uint64_t ptrAddr = 0;
char * typeA_Copy = NULL;
uint typeA_Size = 0;
int ParseLine(unsigned long pid, char * lines, int start, int linesLen, int * skip, int doForceWrite)
{
	if (pid == NULL || pid == 0)
		return start;
	
	char cType = lines[start];
	int lineLen = 0, arg2Len = 0, arg1Off = 0, totalLenRead = 0, arg0 = 0;
	int arg0_2 = 0;
	
	for (lineLen = start; lineLen < linesLen; lineLen++)
	{
		if (lines[lineLen] == '\n' || lines[lineLen] == '\r')
			break;
	}
	lineLen -= start;
	int arg3Off = start + lineLen, arg4Off = arg3Off + 1, arg4Len = arg4Off;
	
	totalLenRead = lineLen;
	if (skip[0] <= 0)
	{
		skip[0] = 0;
		
		//Parse first line
		while (lines[(start + lineLen) - arg2Len] != ' ')
			arg2Len++;
		while (lines[start + arg1Off] != ' ')
			arg1Off++;
		
		char addrBuf[4];
		memset(addrBuf, 0, 4);
		
		ReadHexPartial(lines, start + 1, (arg1Off - 1), addrBuf, (arg1Off - 1)/2);
		arg0 = (int)(((unsigned char)addrBuf[0] << 24) | ((unsigned char)addrBuf[1] << 16) | ((unsigned char)addrBuf[2] << 8) | ((unsigned char)addrBuf[3]));
		
		ReadHex(lines, start + arg1Off + 1, 8, addrBuf, 4);
		uint64_t addr = (uint64_t)(((unsigned char)addrBuf[0] << 24) | ((unsigned char)addrBuf[1] << 16) | ((unsigned char)addrBuf[2] << 8) | ((unsigned char)addrBuf[3]));
		if (ptrAddr != 0)
		{
			addr = ptrAddr;
			ptrAddr = 0;
		}
		
		char buf0[arg2Len/2];
		char arg2Temp[arg2Len - 1];
		
		if (arg0 < 0)
			arg0 = 0;
		char buf1[arg0];
		
		//Check if theres a second line
		if ((start + lineLen + 1) < linesLen)
		{
			//Parse second line vars (for codes that need the second line
			//Get next code arguments
			while (lines[arg3Off] != ' ')
				arg3Off++;
			arg4Off = arg3Off + 1;
			while (lines[arg4Off] != ' ')
				arg4Off++;
			arg4Len = arg4Off + 1;
			while (lines[arg4Len] != '\r' && lines[arg4Len] != '\n')
				arg4Len++;
			arg4Len -= arg4Off;
		}
		else
			arg4Len = 0;
		
		char buf0_2[arg4Len/2];
		char buf1_2[(arg4Off - arg3Off)/2];
		
		if (arg4Len == 0)
			goto skipSecondLine;
		
		//Get args for second line
		ReadHexPartial(lines, start + lineLen + 2, (arg3Off) - (start + lineLen + 2), addrBuf, ((arg3Off) - (start + lineLen + 2))/2);
		arg0_2 = (uint)(((unsigned char)addrBuf[0] << 24) | ((unsigned char)addrBuf[1] << 16) | ((unsigned char)addrBuf[2] << 8) | ((unsigned char)addrBuf[3]));
		
		//Get address for second line
		ReadHexPartial(lines, arg3Off + 1, arg4Off - arg3Off - 1, buf0_2, (arg4Off - arg3Off - 1)/2);
		
		//Get value for second line
		ReadHexPartial(lines, arg4Off + 1, arg4Len - 1, buf1_2, (arg4Len - 1)/2);
		
		skipSecondLine: ;
		
		switch (cType)
		{
			case '0': ; //Write bytes (1=OR,2=AND,3=XOR,rest=write)
				switch (arg0)
				{
					case 1: //OR
						ReadHex(lines, (start + lineLen) - arg2Len + 1, arg2Len - 1, buf0, 4);
						//Get source bytes
						get_process_mem(pid, addr, buf1, (arg2Len/2), isDEX, isCCAPI);
						
						//Or each byte
						for (uint cnt0 = 0; cnt0 < (uint)(arg2Len/2); cnt0++)
							buf1[cnt0] |= buf0[cnt0];
						
						//Write bytes to dest
						WriteMem(pid, addr, buf1, (arg2Len/2));
						break;
					case 2: //AND
						ReadHex(lines, (start + lineLen) - arg2Len + 1, arg2Len - 1, buf0, 4);
						//Get source bytes
						get_process_mem(pid, addr, buf1, (arg2Len/2), isDEX, isCCAPI);
						
						//And each byte
						for (uint cnt0 = 0; cnt0 < (uint)(arg2Len/2); cnt0++)
							buf1[cnt0] &= buf0[cnt0];
						
						//Write bytes to dest
						WriteMem(pid, addr, buf1, (arg2Len/2));
						break;
					case 3: //XOR
						ReadHex(lines, (start + lineLen) - arg2Len + 1, arg2Len - 1, buf0, 4);
						//Get source bytes
						get_process_mem(pid, addr, buf1, (arg2Len/2), isDEX, isCCAPI);
						
						//Xor each byte
						for (uint cnt0 = 0; cnt0 < (uint)(arg2Len/2); cnt0++)
							buf1[cnt0] ^= buf0[cnt0];
						
						//Write bytes to dest
						WriteMem(pid, addr, buf1, (arg2Len/2));
						break;
					default:
						ReadHex(lines, (start + lineLen) - arg2Len + 1, arg2Len - 1, buf0, 4);
						WriteMem(pid, addr, buf0, (arg2Len/2));
						
					break;
				}
				break;
			case '1': //Write text
				//Get total text write size
				arg1Off++;
				while (lines[start + arg1Off] != ' ')
					arg1Off++;
				
				arg2Len = lineLen - arg1Off;
				strncpy(buf0, lines + (start + lineLen) - arg2Len + 1, arg2Len - 1);
				buf0[arg2Len-1] = '\0';
				WriteMem(pid, addr, buf0, arg2Len - 1);
				break;
			case '2': //Write float
				strncpy(buf0, lines + (start + lineLen) - arg2Len + 1, arg2Len - 1);
				float buf2Flt = (float)___atof(buf0); //atof(buf2);
				WriteMem(pid, addr, (char*)&buf2Flt, arg2Len - 1);
				totalLenRead = lineLen;
				break;
			case '4': ; //Write condensed
				//Get count
				uint count = (uint)(((unsigned char)buf1_2[0] << 24) | ((unsigned char)buf1_2[1] << 16) | ((unsigned char)buf1_2[2] << 8) | ((unsigned char)buf1_2[3]));
				
				//Get increment
				uint64_t inc = (uint64_t)(((unsigned char)buf0_2[0] << 24) | ((unsigned char)buf0_2[1] << 16) | ((unsigned char)buf0_2[2] << 8) | ((unsigned char)buf0_2[3]));
				
				//Get write
				ReadHex(lines, (start + lineLen) - arg2Len + 1, arg2Len - 1, buf0, arg2Len / 2);
				
				for (uint cnt4 = 0; cnt4 < count; cnt4++)
				{
					WriteMem(pid, addr + (uint64_t)(cnt4 * inc), buf0, (arg2Len/2));
					if (arg0_2 != 0)
						*(uint*)buf0 += (arg0_2 << (((arg2Len/2) % 4) * 8));
				}
				
				skip[0]++;
				break;
			case '6': //Write pointer
				
				//Get offset
				ReadHexPartial(lines, (start + lineLen) - arg2Len + 1, arg2Len - 1, buf0, (arg2Len - 1)/2);
				uint64_t offset = (uint64_t)(((unsigned char)buf0[0] << 24) | ((unsigned char)buf0[1] << 16) | ((unsigned char)buf0[2] << 8) | ((unsigned char)buf0[3]));
				
				//Get address at pointer
				get_process_mem(pid, addr, buf0, 4, isDEX, isCCAPI);
				ptrAddr = (uint64_t)(((unsigned char)buf0[0] << 24) | ((unsigned char)buf0[1] << 16) | ((unsigned char)buf0[2] << 8) | ((unsigned char)buf0[3]));
				
				ptrAddr += offset;
				
				break;
			case 'A': //Copy paste
				
				switch (arg0)
				{
					case 1:
						if (typeA_Copy)
							_free(typeA_Copy);
						
						//Get count
						ReadHexPartial(lines, (start + lineLen) - arg2Len + 1, arg2Len - 1, buf0, (arg2Len - 1)/2);
						uint count = (uint)(((unsigned char)buf0[0] << 24) | ((unsigned char)buf0[1] << 16) | ((unsigned char)buf0[2] << 8) | ((unsigned char)buf0[3]));
						
						typeA_Size = count;
						typeA_Copy = (char *)_malloc(count);
						get_process_mem(pid, addr, typeA_Copy, 4, isDEX, isCCAPI);
						
						
						memcpy(arg2Temp, lines + ((start + lineLen) - arg2Len + 1), arg2Len - 1);
						break;
					case 2:
						if (!typeA_Copy || typeA_Size <= 0)
							break;
						
						WriteMem(pid, addr, typeA_Copy, typeA_Size);
						break;
				}
				
				break;
			case 'B': //Find Replace
				//Only work when doForceWrite is true (1) which means everytime the user activates Artemis from the in game XMB
				//Don't want to waste time constantly searching
				
				if (!doForceWrite)
					break;
				
				//Get end addr
				ReadHex(lines, (start + lineLen) - arg2Len + 1, arg2Len - 1, addrBuf, 4);
				uint64_t endAddr = (uint64_t)(((unsigned char)addrBuf[0] << 24) | ((unsigned char)addrBuf[1] << 16) | ((unsigned char)addrBuf[2] << 8) | ((unsigned char)addrBuf[3]));
				
				//new (COP) length
				uint binc = arg4Len/2;
				
				//original (OGP) length
				uint cmpSize = (arg4Off - arg3Off)/2;
				
				//Flip addresses
				uint64_t temp = 0;
				if (endAddr < addr) { temp = addr; addr = endAddr; endAddr = temp; }
				
				for (uint64_t curAddr = addr; curAddr < endAddr; curAddr += (scanInc - cmpSize))
				{
					if (get_process_mem(pid, curAddr, (char *)memBuf, scanInc, isDEX, isCCAPI) >= 0)
					{
						//So we stop it each loop before (scanInc - cmpSize) in the instance that
						//the result is the last 2 bytes, for instance, and the compare is actually 4 bytes (so it won't result even though it should)
						//This fixes that
						for (uint64_t boff = 0; boff < (scanInc - cmpSize); boff++)
						{
							//Break if count reached
							if (arg0 > 0 && temp >= (uint64_t)arg0)
								break;
							if ((curAddr + boff) >= endAddr)
								break;
							
							if (CompareMemoryBuffered((char *)memBuf, boff, buf0_2, cmpSize))
							{
								//printf ("Instance found at 0x%08x, writing 0x%x (%d)\n", curAddr + boff, *(uint*)buf1_2, binc);
								WriteMem(pid, curAddr + boff, buf1_2, binc);
								//Just skip in case the replacement has, within itself, the ogp
								//We subtract one because it gets added back at the top of the loop
								boff += binc - 1;
								temp++;
							}
						}
					}
				}
				
				skip[0]++;
				totalLenRead = lineLen;
				break;
			case 'D': //Write conditional
				ReadHex(lines, (start + lineLen) - arg2Len + 1, arg2Len - 1, buf0, 4);
				int DisCond = CompareMemory(pid, addr, buf0, arg2Len / 2);
				
				if (!DisCond)
				{
					skip[0] += arg0;
				}
				
				break;
			case 'E': //Write conditional (bitwise)
				ReadHex(lines, (start + lineLen) - arg2Len + 1, arg2Len - 1, buf0, 4);
				int EisCond = CompareMemoryAnd(pid, addr, buf0, arg2Len / 2);
				
				if (!EisCond)
				{
					skip[0] += arg0;
				}
				
				break;
			case 'F': //Copy bytes
				
				//Get destination
				ReadHex(lines, (start + lineLen) - arg2Len + 1, arg2Len - 1, buf0, 4);
				uint64_t dest = (uint64_t)(((unsigned char)buf0[0] << 24) | ((unsigned char)buf0[1] << 16) | ((unsigned char)buf0[2] << 8) | ((unsigned char)buf0[3]));
				
				//Get source bytes
				get_process_mem(pid, addr, buf1, arg0, isDEX, isCCAPI);
				//Write bytes to dest
				WriteMem(pid, dest, buf1, arg0);
				
				break;
			
		}
	}
	else
		skip[0]--;
	
	return start + totalLenRead;
}

/*
 * Function:		ConvertCodes()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Loops through each line of the code list and interprets the codes
 *					Calls ParseLine() to use the code
 * Arguments:
 *	pid:			process id of process to write to
 *	ncCodes:		buffer containing entire code list
 * Return:			void
 */
char lineBuf[100];
void ConvertCodes(unsigned long pid, char * ncCodes)
{
	int totalLen = strlen(ncCodes);
	
	int lineNum = 0, codeNum = 0, lineCharInd = 0;
	int skip[1]; skip[0] = 0;
	
	for (int x = 0; x < totalLen; x++)
	{
		if (ncCodes[x] != '#')
		{
			if (ncCodes[x] == '\n')
			{
				lineNum++;
				lineCharInd = -1;
			}
			else
			{
				if (lineCharInd == 0)
				{
					int zz = 0;
					for (zz = x; zz < totalLen; zz++)
					{
						if (ncCodes[zz] == '\n' || ncCodes[zz] == '\r')
							break;
					}
					memcpy(lineBuf, ncCodes + x, zz - x);
					lineBuf[(zz - x)] = 0;
				}
				
				switch (lineNum)
				{
					case 1: //cWrite
						if (strlen(lineBuf) == 0)
						{
							lineNum--;
						}
						else
						{
							if (lineCharInd == 0)
								isConstantWrite = ncCodes[x] == '1' || ncCodes[x] == 'T';
							
							if (!isConstantWrite && !doForceWrite) //skip this code if not constant or force write
							{
								
								
								while (ncCodes[x] != '#' && x < totalLen)
									x++;
								x--;
							}
						}
						break;
					case 0: //Name
						
						break;
					default: //codes
						
						if (lineNum > 1 && isCodeLineValid(lineBuf))
						{
							if (isConstantWrite || doForceWrite)
								x = ParseLine(pid, ncCodes, x, totalLen, skip, doForceWrite);
							else
							{
								skip[0]++;
								x = ParseLine(pid, ncCodes, x, totalLen, skip, doForceWrite);
							}
						}
						break;
				}
			}
			lineCharInd++;
		}
		else
		{
			lineNum = -1;
			isConstantWrite = 0;
			skip[0] = 0;
			codeNum++;
			lineCharInd = 0;
			
			while ((ncCodes[x] == '\n') && x < totalLen)
				x++;
		}
	}
	
}

/*
 * Function:		getFileSize()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Gets the file size of a file
 * Arguments:
 *	path:			path to file
 * Return:			size of file
 */
int getFileSize(const char * path)
{
	int fd = 0, size = 0;
	
	if(cellFsOpen(path, CELL_FS_O_RDONLY, &fd, NULL, 0) == CELL_FS_SUCCEEDED)
	{
		u64 pos;
		cellFsLseek(fd, 0, CELL_FS_SEEK_END, &pos);
		size = (int)pos;
		
		cellFsClose(fd);
	}
	
	return size;
}

/*
 * Function:		SetStatusOff()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:			Sets the Artemis state to "no" or off
 * This is so the GUI knows that even if MAMBA is loaded for some reason, artemis isn't as well
 * Should be called only when the PS3 is shutting down
 * Arguments:
 *	void
 * Return:			void
 */
void SetStatusOff(void)
{
	//Delete tmp artstate file
	char r[] = "no";
	int fd = 0;
	if(cellFsOpen("/dev_hdd0/tmp/artstate", CELL_FS_O_WRONLY, &fd, NULL, 0) == CELL_FS_SUCCEEDED)
	{
		u64 pos, write_e = 0;
		cellFsLseek(fd, 0, CELL_FS_SEEK_SET, &pos);
		
		if (cellFsWrite(fd, (void *)r, 3, &write_e)==CELL_FS_SUCCEEDED)
		{
			
		}
		
		cellFsClose(fd);
	}
}

/*
 * Function:		SetStatusOn()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Sets the Artemis state to "on"
 *					This is so the GUI knows that artemis is loaded and not to load it a second time (allowing a user to change codes without rebooting)
 *					Should be called when Artemis PRX loads
 * Arguments:
 *	void
 * Return:			void
 */
void SetStatusOn(void)
{
	//Delete tmp artstate file
	char r[] = "on";
	int fd = 0;
	if(cellFsOpen("/dev_hdd0/tmp/artstate", CELL_FS_O_WRONLY, &fd, NULL, 0) == CELL_FS_SUCCEEDED)
	{
		u64 pos, write_e = 0;
		cellFsLseek(fd, 0, CELL_FS_SEEK_SET, &pos);
		
		if (cellFsWrite(fd, (void *)r, 3, &write_e)==CELL_FS_SUCCEEDED)
		{
			
		}
		
		cellFsClose(fd);
	}
}

/*
 * Function:		readFile()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Reads a file
 * Arguments:
 *	path:			path to file to read
 *	buffer:			buffer to store the file contents toascii
 *	size:			number of bytes to read from the file
 * Return:			Returns 0 if failed, 1 if succeeded
 */
int readFile(const char * path, char * buffer, int size)
{
	int fd, ret = 0;
	
	if(cellFsOpen(path, CELL_FS_O_RDONLY, &fd, NULL, 0) == CELL_FS_SUCCEEDED)
	{
		u64 read_e = 0, pos; //, write_e
		cellFsLseek(fd, 0, CELL_FS_SEEK_SET, &pos);
		
		if (cellFsRead(fd, (void *)buffer, size, &read_e)==CELL_FS_SUCCEEDED)
		{
			ret = 1;
		}
		
		cellFsClose(fd);
	}
	
	buffer[size] = '\0';
	return ret;
}

/*
 * Function:		art_process()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Processes an entire codelist once
 * Arguments:
 *	forceWrite:		whether the user activated Artemis (1) or a constant write (0)
 * Return:			void
 */
static void art_process(int forceWrite)
{
	int fd = 0;
	
	if (attachedPID)
	{
		doForceWrite = forceWrite;
		
		//If not loaded userlist, load it
		if (forceWrite && userCodes)
		{
			_free(userCodes);
			userCodes = NULL;
		}

		if (!userCodes)
		{
			int fileSize = getFileSize("/dev_hdd0/tmp/art.txt");
			userCodes = (char *)_malloc(fileSize + 1);
			memset(userCodes, 0, fileSize + 1);
			if(cellFsOpen("/dev_hdd0/tmp/art.txt", CELL_FS_O_RDONLY, &fd, NULL, 0) == CELL_FS_SUCCEEDED)
			{
				u64 read_e = 0, pos;
				cellFsLseek(fd, 0, CELL_FS_SEEK_SET, &pos);
				
				cellFsRead(fd, (void *)userCodes, fileSize, &read_e);
				cellFsClose(fd);
			}
		}
			
		if (attachedPID != NULL && attachedPID != 0)
		{
			ConvertCodes(attachedPID, userCodes);
			sys_timer_sleep(0.1);
		}
	}
	
	doForceWrite = 0;
}

/*
 * Function:		GetGameProcess()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Finds the current game process
 * Arguments:
 *	void
 * Return:			Retuns the id of the current game process, 0 if none
 */
static process_id_t GetGameProcess(void)
{
	char pidName[64];
	process_id_t pids[5];
	
	ps3mapi_get_all_processes_pid(pids);
	if (pids != NULL)
	{
		for (int cnt = 0; cnt < 5; cnt++)
		{
			if (pids[cnt] != 0)
			{
				ps3mapi_get_process_name_by_pid(pids[cnt], pidName);
				if (strstr(pidName, "EBOOT") != NULL)
				{
					return pids[cnt];
				}
				else if (strstr(pidName, "vsh") == NULL && (strstr(pidName, "sys") == NULL)) //in case it's a self (HD collections and such)
				{
					return pids[cnt];
				}
			}
		}
	}
	
	return 0;
}

/*
 * Function:		art_thread()
 * File:			main.c
 * Project:			ArtemisPS3-PRX
 * Description:		Artemis PRX Thread start
 *					Interprets user input and calls art_process()
 * Arguments:
 *	arg:			
 * Return:			void
 */
static void art_thread(uint64_t arg)
{
	printf("Artemis PS3 :::: Thread Started!\n");
	
	SetStatusOn();
	
	sys_timer_sleep(10);
	sys_ppu_thread_yield();
	
	CellPadData data;
	int delay = 0, delay2 = 0, hasDisplayed = 0, fd = 0;
	
	while(1)
	{
		//Check if not turning off
		if (delay <= 0)
		{
			
		}
		//Check if attached
		if (attachedPID != 0 && delay <= 0)
		{
			delay = 50;
			attachedPID = GetGameProcess();
			if (attachedPID == 0) //Process exiting/exited
			{
				//Check if shutting down
				if (userCodes)
					_free(userCodes);
				userCodes = NULL;
				
				if (cellFsOpen("/dev_hdd0/tmp/turnoff", CELL_FS_O_RDONLY, &fd, NULL, 0) != CELL_FS_SUCCEEDED)
				{
					//printf ("Artemis PS3 :::: Detected shutdown\n");
					//SetStatusOff();
					//stop_prx_module();
					//sys_ppu_thread_exit(0);
				}
				else
					cellFsClose(fd);
				
				printf ("Artemis PS3 :::: Detatched\n");
				vsh_free = NULL;
				vsh_malloc = NULL;
				hasDisplayed = 0;
				sys_timer_sleep(3);
			}
		}
		else if (attachedPID == 0)
		{
			if (GetGameProcess() != 0 && cellPadGetData(0, &data) != CELL_PAD_OK)
				hasDisplayed = 0;
			sys_timer_sleep(2);
		}
		
		//Check to write/attach
		if(cellPadGetData(0, &data) == CELL_PAD_OK && data.len > 0)
		{
			if (!hasDisplayed && GetGameProcess() != 0)
			{
				show_msg((char *)"Artemis PS3\nStart To Attach");
				hasDisplayed = 1;
			}

			//printf("Okay\n");
			if (data.button[CELL_PAD_BTN_OFFSET_DIGITAL1] & CELL_PAD_CTRL_START)
			{
				//printf("Checking for proc\n");
				int notAttached = attachedPID == 0;
				attachedPID = GetGameProcess();
				if (attachedPID)
				{
					if (delay2 <= 0)
					{
						if (notAttached)
						{
							show_msg((char *)"Artemis PS3\nAttached and Wrote");
							printf("Artemis PS3 :::: Attached to 0x%08X\n", attachedPID);
							
							//if (!hasChecked)
							{
								char check[4];
								isDEX = dex_get_process_mem(attachedPID, 0x10000, check, 4) != ENOSYS;
								if (!(isDEX && check[0] == 0x7F && check[1] == 'E' && check[2] == 'L' && check[3] == 'F'))
								{
									isDEX = 0;
								}
								else if (isDEX)
									printf ("Artemis PS3 :::: Using DEX Syscalls\n");
								if (!isDEX)
								{
									isCCAPI = ccapi_get_process_mem(attachedPID, 0x10000, check, 4) != ENOSYS;
									if (!(isCCAPI && check[0] == 0x7F && check[1] == 'E' && check[2] == 'L' && check[3] == 'F'))
									{
										isCCAPI = 0;
									}
								}
								else if (isCCAPI)
									printf ("Artemis PS3 :::: Using CCAPI Syscalls\n");
								
								if (!isDEX && !isCCAPI)
									printf ("Artemis PS3 :::: Using MAMBA Syscalls\n");
							}
						}
						else
							show_msg((char *)"Artemis PS3\nWrote Codes Once");
					}
					art_process(1);
					delay2 = 1000;
				}
			}
			else if (data.button[CELL_PAD_BTN_OFFSET_DIGITAL1] & CELL_PAD_CTRL_SELECT)
			{
				attachedPID = 0;
				hasDisplayed = 0;
				show_msg((char *)"Artemis PS3\nDetatched");
				if (userCodes)
				{
					_free(userCodes);
					userCodes = NULL;
				}
				vsh_free = NULL;
				vsh_malloc = NULL;
			}
			sys_timer_sleep(1);
		}
		else if (attachedPID != 0) //make sure to only write when in game, not in game XMB
		{
			art_process(0);
		}
		
		if (delay > 0)
			delay--;
		if (delay2 > 0)
			delay2--;
		
		sys_timer_usleep(1668);
		sys_ppu_thread_yield();
	}
	
	sys_ppu_thread_exit(0);
}

/*
 * PRX standard functions
 */

static inline void _sys_ppu_thread_exit(uint64_t val)
{
	system_call_1(41, val);
}

static inline sys_prx_id_t prx_get_module_id_by_address(void *addr)
{
	system_call_1(461, (uint64_t)(uint32_t)addr);
	return (int)p1;
}

int art_start(uint64_t arg)
{
	sys_ppu_thread_create(&thread_id, art_thread, NULL, -0x1d8, 0x8000, SYS_PPU_THREAD_CREATE_JOINABLE, THREAD_NAME);
	_sys_ppu_thread_exit(0);
	return SYS_PRX_RESIDENT;
}

static void stop_prx_module(void)
{
	sys_prx_id_t prx = prx_get_module_id_by_address(stop_prx_module);
	int *result = NULL;

	{system_call_6(482, (u64)(u32)prx, 0, NULL, (u64)(u32)result, 0, NULL);}
}

static void unload_prx_module(void)
{

	sys_prx_id_t prx = prx_get_module_id_by_address(unload_prx_module);

	{system_call_3(483, (u64)prx, 0, NULL);}

}

static void art_stop_thread(uint64_t arg)
{	
	uint64_t exit_code;
	sys_timer_usleep(500000);

	if (thread_id != (sys_ppu_thread_t)-1)
		sys_ppu_thread_join(thread_id, &exit_code);
		
	sys_ppu_thread_exit(0);
}

int art_stop(void)
{
	if (userCodes)
		_free(userCodes);
	
	SetStatusOff();
	sys_ppu_thread_t t;
	uint64_t exit_code;

	sys_ppu_thread_create(&t, art_stop_thread, 0, 0, 0x2000, SYS_PPU_THREAD_CREATE_JOINABLE, STOP_THREAD_NAME);
	sys_ppu_thread_join(t, &exit_code);
	
	sys_timer_usleep(500000);
	
	unload_prx_module();

	_sys_ppu_thread_exit(0);
	return SYS_PRX_STOP_OK;
}

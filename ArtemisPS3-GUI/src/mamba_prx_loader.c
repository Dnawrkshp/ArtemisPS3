/*
    ==============================================================
    
    MAMBA/PRX Autoloader by NzV
    
    Load MAMBA and/or VSH plugins (with MAMBA or PRX Loader).
    
    ==============================================================
*/

#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include <ppu-lv2.h>
#include <sys/systime.h>
#include <sys/file.h>
#include <sys/stat.h>

#include "common.h"
#include "lv2_utils.h"
#include "mamba_prx_loader.h"


int FIRMWARE;

u64 SYSCALL_TABLE;
u64 HV_START_OFFSET;

u64 OFFSET_FIX;
u64 OFFSET_2_FIX;
u64 OFFSET_FIX_3C;
u64 OFFSET_FIX_17;
u64 OFFSET_FIX_2B;
u64 OFFSET_FIX_2B17;
u64 OFFSET_FIX_LIC;

uint32_t PAYLOAD_SIZE;
uint64_t *PAYLOAD; 

//----------------------------------------
//MAMBA/PRX LOADER PAYLOAD
//----------------------------------------

#define MAMBA_PRX_LOADER_INSTALL_OFFSET             0x80000000007F0000ULL
#define MAMBA_PRX_LOADER_SYSCALL_NUM                1022

#define MAMBA_PAYLOAD_PATH_1                        "/dev_usb000/MAMBAPRXL/mamba_%X.bin"
#define MAMBA_PAYLOAD_PATH_2                        "/dev_usb001/MAMBAPRXL/mamba_%X.bin"

#define MPL_PAYLOAD_PATH_1                          "/dev_usb000/MAMBAPRXL/mpl_payload_%X.bin"
#define MPL_PAYLOAD_PATH_2                          "/dev_usb001/MAMBAPRXL/mpl_payload_%X.bin"

#ifdef USING_NEW_CORE
#define MAMBA_PAYLOAD_PATH_3                        "/dev_flash/sys/internal/mamba_%X.bin"
#define MPL_PAYLOAD_PATH_3                          "/dev_flash/sys/internal/mpl_payload_%X.bin"
#else
#define MAMBA_PAYLOAD_PATH_3                        "/dev_hdd0/game/ARTPS3001/USRDIR/payloads/mamba_%X.bin"
#define MPL_PAYLOAD_PATH_3                          "/dev_hdd0/game/ARTPS3001/USRDIR/payloads/mpl_payload_%X.bin"
#endif

#define IS_MAMBA_PRX_LOADER_PAYLOAD                 0x333
#define IS_MAMBA_LOADER_PAYLOAD                     0x222
#define IS_PRX_LOADER_PAYLOAD                       0x111
#define SYSCALL1022_OPCODE_IS_ENABLED               0x7750

int syscall_mpl_payload_is_enabled()
{
    lv2syscall1(MAMBA_PRX_LOADER_SYSCALL_NUM, SYSCALL1022_OPCODE_IS_ENABLED);
    return_to_user_prog(int);
}

void lv1poke( u64 addr, u64 val)
{
    if(addr==0) return;
    lv2syscall2(9, addr, val);
}

void write_htab(void)
{
    uint64_t cont = 0;
    uint64_t reg5, reg6;
    uint32_t val;
    while(cont < 0x80) 
    {
        val = (cont << 7);
        reg5 = lv2peek(0x800000000f000000ULL | ((uint64_t) val));
        reg6 = lv2peek(0x800000000f000008ULL | ((uint64_t) val));
        reg6 = (reg6  & 0xff0000ULL) | 0x190ULL;
        lv2syscall8(10, 0, (cont << 3ULL), reg5, reg6, 0, 0, 0, 1);
        cont++;
    }
}

void fix_error()
{
    if (OFFSET_FIX_3C != 0)
    {
        _poke   (OFFSET_FIX_3C              , 0x386000007C6307B4); // error 3C
        _poke32 (OFFSET_FIX_3C + 0x8        , 0x4E800020        ); // error 3C
    }
    if (OFFSET_FIX != 0)
    {
        _poke   (OFFSET_FIX                 , 0x63FF003D60000000); // error 3D
        _poke   (OFFSET_FIX + 0xC8          , 0x3BE000004BFFFF0C); // error 3E + unk
        _poke32 (OFFSET_FIX + 0x74          , 0x60000000); // unk
        _poke32 (OFFSET_FIX + 0x74 + 0x8    , 0x48000098); // unk
    }
    if (OFFSET_2_FIX != 0)
    {
        _poke32 (OFFSET_2_FIX               , 0x60000000); // error 09
        _poke32 (OFFSET_2_FIX + 0x14        , 0x60000000); // error 19
    }
    if (OFFSET_FIX_LIC != 0) _poke  (OFFSET_FIX_LIC             , 0x386000012F830000ULL ); // ignore LIC.DAT check
    if (OFFSET_FIX_2B17 != 0) _poke (OFFSET_FIX_2B17            , 0x38600000F8690000ULL ); // error 2B and 17
    if (OFFSET_FIX_2B != 0) _poke   (OFFSET_FIX_2B              , 0xF821FE917C0802A6ULL ); // restore original
    if (OFFSET_FIX_17 != 0) _poke   (OFFSET_FIX_17              , 0x419E0038E8610098ULL ); // restore original
}


#ifndef USING_NEW_CORE

uint8_t * read_file(char *path, uint32_t * file_size, uint16_t round)
{
    uint8_t * buf;
    uint16_t rest;
    FILE * f = fopen(path, "rb");
    if(f)
    {
        uint32_t size = fseek(f, 0, SEEK_END);
        size = ftell(f);
        fseek(f, 0, SEEK_SET);

        if(round)
        {
            rest = size % round;
            if(rest)
                size = size - rest + round;
        }
        buf = malloc(size);
        fread(buf, size, 1, f);
        fclose(f);
        *(file_size) = size;
        return buf;
    }
    else
    {
        *(file_size) = 0;
        return NULL;
    }
}

#else

#define READ_BUFFER_SIZE            65536
static uint8_t read_buffer[READ_BUFFER_SIZE];

uint8_t * read_file(char *path, uint32_t * file_size, uint16_t round)
{
    uint8_t * buf;
    uint64_t nread;
    uint16_t rest;
    int fd;
    if (sysLv2FsOpen(path, SYS_O_RDONLY, &fd, 0, NULL, 0) != 0 ) return NULL;
    buf = read_buffer;
    sysLv2FsRead(fd, buf, 4608, &nread);
    sysLv2FsClose(fd);
    if(round)
    {
        rest = nread % round;
        if(rest) nread = nread - rest + round;
    }   
    *(file_size) = (uint32_t)nread;
    return buf;
}

#endif

uint32_t payload_size;
    
int load_mamba_prx_loader_payload()
{           
    char payload_path[256];
    sprintf(payload_path, MPL_PAYLOAD_PATH_1, FIRMWARE);
    if (file_exists(payload_path) != SUCCESS)
    {
        sprintf(payload_path, MPL_PAYLOAD_PATH_2, FIRMWARE);
        if (file_exists(payload_path) != SUCCESS)
        {
            sprintf(payload_path, MPL_PAYLOAD_PATH_3, FIRMWARE);
            if (file_exists(payload_path) != SUCCESS)
            {
                    #ifdef ENABLE_LOG
                    if (verbose) WriteToLog("Error: Unable to find MAMBA payload file");
                    #endif
                    return FAILED; 
            }   
        }
    }
    
    #ifdef ENABLE_LOG
    if (verbose)  WriteToLog(payload_path);
    #endif
    
    uint64_t *payload = (uint64_t *) read_file(payload_path, &payload_size, 8);
    if(!payload)
    {
        #ifdef ENABLE_LOG
        if (verbose) WriteToLog("Error: Unable to read MAMBA/PRX Loader payload file");
        #endif
        return FAILED; 
    }
    
    //Patch lv2 protection (rebug only, ps3ita?)
    if ((dir_exists("/dev_flash/rebug") == SUCCESS) || (dir_exists("/dev_flash/ps3ita") == SUCCESS) )
    {
        if((FIRMWARE > 0x355D) && (FIRMWARE < 0x453C)) //No need if not fw 4.xx or 4.53 +
            {
                lv1poke(HV_START_OFFSET +  0, 0x0000000000000001ULL);
                lv1poke(HV_START_OFFSET +  8, 0xe0d251b556c59f05ULL);
                lv1poke(HV_START_OFFSET + 16, 0xc232fcad552c80d7ULL);
                lv1poke(HV_START_OFFSET + 24, 0x65140cd200000000ULL); 
            }
    }   
    
    write_htab();   
    
    uint64_t payload_opd = MAMBA_PRX_LOADER_INSTALL_OFFSET + payload_size + 0x10;
    int i;  
    for(i=0;i<(payload_size/8);i++) lv2poke(MAMBA_PRX_LOADER_INSTALL_OFFSET+(i*8), payload[i]);
    lv2poke(payload_opd, MAMBA_PRX_LOADER_INSTALL_OFFSET);
    lv2poke(SYSCALL_TABLE + (8*MAMBA_PRX_LOADER_SYSCALL_NUM), payload_opd);
    
    #ifndef USING_NEW_CORE
    free(payload);
    #endif
    
    lv2poke(0x80000000000004E8ULL, 0);                      //Disable the disc-less payload (if it was previously loaded)
    lv2poke(0x8000000000003D90ULL, 0x386000014E800020ULL); //Patch permission 4.xx, usually "fixed" by warez payload
    
    fix_error();
    
    switch(syscall_mpl_payload_is_enabled())
    {
        case IS_MAMBA_LOADER_PAYLOAD:
        case IS_PRX_LOADER_PAYLOAD:
        case IS_MAMBA_PRX_LOADER_PAYLOAD:
            return SUCCESS; //MAMBA + PRX LOADER 
        break;
        default:
            #ifdef ENABLE_LOG
            if (verbose) WriteToLog("Error: MAMBA/PRX Loader payload was not loaded");
            #endif
            return FAILED; 
        break;
    }       
}

int unload_mamba_prx_loader_payload()
{
    //Remove syscall
    u64 sc_null = lv2peek(SYSCALL_TABLE);
    lv2poke(SYSCALL_TABLE + (8*MAMBA_PRX_LOADER_SYSCALL_NUM), sc_null);
    u64 sc_not_impl_pt = lv2peek(sc_null);
    u64 sc_mpl  = lv2peek(SYSCALL_TABLE + (8*MAMBA_PRX_LOADER_SYSCALL_NUM));
    if(sc_mpl !=sc_null) lv2poke(sc_mpl,  sc_not_impl_pt);
    //Clear payload from lv2 mem                
    int i;
    for(i=0;i<((payload_size + 0x10 + 8)/8);i++)
        lv2poke(MAMBA_PRX_LOADER_INSTALL_OFFSET + (i*8), 0ULL);
    return SUCCESS;             
}

//----------------------------------------
//MAMBA LOADER
//----------------------------------------

#define SYSCALL1022_OPCODE_LOAD_MAMBA           0x7755

int syscall_load_mamba(char* payload_path)
{
    lv2syscall2(MAMBA_PRX_LOADER_SYSCALL_NUM, SYSCALL1022_OPCODE_LOAD_MAMBA, (uint64_t)payload_path);
    return_to_user_prog(int);
}

int load_mamba()
{
    char payload_path[256];
    switch(syscall_mpl_payload_is_enabled())
    {
        case IS_MAMBA_LOADER_PAYLOAD:
        case IS_MAMBA_PRX_LOADER_PAYLOAD:
            sprintf(payload_path, MAMBA_PAYLOAD_PATH_1, FIRMWARE);
            if (file_exists(payload_path) != SUCCESS)
            {
                sprintf(payload_path, MAMBA_PAYLOAD_PATH_2, FIRMWARE);
                if (file_exists(payload_path) != SUCCESS)
                {
                    sprintf(payload_path, MAMBA_PAYLOAD_PATH_3, FIRMWARE);
                    if (file_exists(payload_path) != SUCCESS)
                    {
                            #ifdef ENABLE_LOG
                            if (verbose) WriteToLog("Error: Unable to find MAMBA payload file");
                            #endif
                    }   
                }
            }
            #ifdef ENABLE_LOG
            if (verbose)  WriteToLog(payload_path);
            #endif
            if (syscall_load_mamba(payload_path) != 0) return FAILED;
            else return SUCCESS;
        break;
        default:
            #ifdef ENABLE_LOG
            if (verbose) WriteToLog("Error: MAMBA Loader payload not loaded");
            #endif
            return FAILED; 
        break;
    }
}

//----------------------------------------
//VSH PLUGINS LOADER
//----------------------------------------

#define SYSCALL1022_OPCODE_LOAD_VSH_PLUGIN      0x1EE7

#define MAX_VSH_PLUGINS                         7
#define VSH_PLUGINS_FIRST_SLOT                  1
#define VSH_PLUGINS_PATH_MAMBA                  "/dev_hdd0/mamba_plugins.txt"
#define VSH_PLUGINS_PATH_PRX                    "/dev_hdd0/prx_plugins.txt"

int syscall_load_prx_module(uint64_t syscall_num, uint32_t slot, char * path, void * arg, uint32_t arg_size)
{
    lv2syscall5(syscall_num, SYSCALL1022_OPCODE_LOAD_VSH_PLUGIN, (uint64_t) slot, (uint64_t) path, (uint64_t) arg, (uint64_t) arg_size);
    return_to_user_prog(int);
}

static int read_text_line(int fd, char *line, unsigned int size, int *eof)
{
    int i = 0, j;
    int line_started = 0;
    if (size == 0) return -1;
    *eof = 0;
    while (i < (size-1))
    {
        uint8_t ch;
        uint64_t r;
        if (sysLv2FsRead(fd, &ch, 1, &r) != 0 || r != 1)
        {
            *eof = 1;
            break;
        }
        if (!line_started)
        {
            if (ch > ' ')
            {
                line[i++] = (char)ch;
                line_started = 1;
            }
        }
        else
        {
            if (ch == '\n' || ch == '\r') break;
            line[i++] = (char)ch;
        }
    }
    line[i] = 0;
    // Remove space chars at end
    for (j = i-1; j >= 0; j--)
    {
        if (line[j] <= ' ')
        {
            line[j] = 0;
            i = j;
        }
        else break;
    }
    return i;
}

uint32_t load_all_prx(char *plugins_path, uint64_t syscall_num)
{
    #ifdef ENABLE_LOG
    if (verbose)  WriteToLog(plugins_path);
    #endif
    unsigned int slot = VSH_PLUGINS_FIRST_SLOT;
    syscall_load_prx_module(syscall_num, slot, "/dev_hdd0/game/ARTPS3001/USRDIR/artemis_ps3.sprx", 0, 0);
    return SUCCESS;
}

int load_vsh_plugins()
{
    if(is_mamba() == SUCCESS)
    {
        #ifdef ENABLE_LOG
        if (verbose) WriteToLog("Success: MAMBA detected");
        #endif
        return load_all_prx(VSH_PLUGINS_PATH_MAMBA, 8);
    }
    else
    {
        switch(syscall_mpl_payload_is_enabled())
        {
            case IS_PRX_LOADER_PAYLOAD:
            case IS_MAMBA_PRX_LOADER_PAYLOAD:
                #ifdef ENABLE_LOG
                if (verbose)  WriteToLog("Success: PRX Loader detected");
                #endif
                return load_all_prx(VSH_PLUGINS_PATH_PRX, MAMBA_PRX_LOADER_SYSCALL_NUM);
            break;
            default:
                #ifdef ENABLE_LOG
                if (verbose) WriteToLog("Error: PRX Loader not found");
                #endif
                return FAILED; 
            break;
        }

    }
    return FAILED;
}

//----------------------------------------
//MAMBA/PRX LOADER
//----------------------------------------

int get_firmware_info()
{
	uint64_t toc = lv2peek(0x8000000000003000ULL);
	switch(toc)
	{
		case 0x8000000000330540ULL:
			HV_START_OFFSET = HV_START_OFFSET_355;
			SYSCALL_TABLE = SYSCALL_TABLE_355;
			OFFSET_2_FIX = OFFSET_2_FIX_355;
			OFFSET_FIX = OFFSET_FIX_355;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_355;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_355;
			OFFSET_FIX_3C = OFFSET_FIX_3C_355;
			OFFSET_FIX_17 = OFFSET_FIX_17_355;
			OFFSET_FIX_2B = OFFSET_FIX_2B_355;
			FIRMWARE = 0x355C;
			return SUCCESS;
		break;
		 case 0x800000000034AC80ULL:
			HV_START_OFFSET = HV_START_OFFSET_355D;
			SYSCALL_TABLE = SYSCALL_TABLE_355D;
			OFFSET_2_FIX = OFFSET_2_FIX_355D;
			OFFSET_FIX = OFFSET_FIX_355D;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_355D;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_355D;
			OFFSET_FIX_3C = OFFSET_FIX_3C_355D;
			OFFSET_FIX_17 = OFFSET_FIX_17_355D;
			OFFSET_FIX_2B = OFFSET_FIX_2B_355D;
			FIRMWARE = 0x355D;
			return SUCCESS;
		break;
		case 0x8000000000346390ULL:
			HV_START_OFFSET = HV_START_OFFSET_421;
			SYSCALL_TABLE = SYSCALL_TABLE_421;
			OFFSET_2_FIX = OFFSET_2_FIX_421;
			OFFSET_FIX = OFFSET_FIX_421;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_421;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_421;
			OFFSET_FIX_3C = OFFSET_FIX_3C_421;
			OFFSET_FIX_17 = OFFSET_FIX_17_421;
			OFFSET_FIX_2B = OFFSET_FIX_2B_421;
			FIRMWARE = 0x421C;
			return SUCCESS;
		break;
		case 0x8000000000363E80ULL:
			HV_START_OFFSET = HV_START_OFFSET_421D;
			SYSCALL_TABLE = SYSCALL_TABLE_421D;
			OFFSET_2_FIX = OFFSET_2_FIX_421D;
			OFFSET_FIX = OFFSET_FIX_421D;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_421D;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_421D;
			OFFSET_FIX_3C = OFFSET_FIX_3C_421D;
			OFFSET_FIX_17 = OFFSET_FIX_17_421D;
			OFFSET_FIX_2B = OFFSET_FIX_2B_421D;
			FIRMWARE = 0x421D;
			return SUCCESS;
		break;
		case 0x8000000000348200ULL:
			HV_START_OFFSET = HV_START_OFFSET_430;
			SYSCALL_TABLE = SYSCALL_TABLE_430;
			OFFSET_2_FIX = OFFSET_2_FIX_430;
			OFFSET_FIX = OFFSET_FIX_430;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_430;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_430;
			OFFSET_FIX_3C = OFFSET_FIX_3C_430;
			OFFSET_FIX_17 = OFFSET_FIX_17_430;
			OFFSET_FIX_2B = OFFSET_FIX_2B_430;
			FIRMWARE = 0x430C;
			return SUCCESS;
		break;
		case 0x8000000000365CA0ULL:
			HV_START_OFFSET = HV_START_OFFSET_430D;
			SYSCALL_TABLE = SYSCALL_TABLE_430D;
			OFFSET_2_FIX = OFFSET_2_FIX_430D;
			OFFSET_FIX = OFFSET_FIX_430D;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_430D;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_430D;
			OFFSET_FIX_3C = OFFSET_FIX_3C_430D;
			OFFSET_FIX_17 = OFFSET_FIX_17_430D;
			OFFSET_FIX_2B = OFFSET_FIX_2B_430D;
			FIRMWARE = 0x430D;
			return SUCCESS;
		break;
		case 0x8000000000348210ULL:
			HV_START_OFFSET = HV_START_OFFSET_431;
			SYSCALL_TABLE = SYSCALL_TABLE_431;
			OFFSET_2_FIX = OFFSET_2_FIX_431;
			OFFSET_FIX = OFFSET_FIX_431;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_431;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_431;
			OFFSET_FIX_3C = OFFSET_FIX_3C_431;
			OFFSET_FIX_17 = OFFSET_FIX_17_431;
			OFFSET_FIX_2B = OFFSET_FIX_2B_431;
			FIRMWARE = 0x431C;
			return SUCCESS;
		break;
		case 0x80000000003487D0ULL:
			HV_START_OFFSET = HV_START_OFFSET_440;
			SYSCALL_TABLE = SYSCALL_TABLE_440;
			OFFSET_2_FIX = OFFSET_2_FIX_440;
			OFFSET_FIX = OFFSET_FIX_440;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_440;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_440;
			OFFSET_FIX_3C = OFFSET_FIX_3C_440;
			OFFSET_FIX_17 = OFFSET_FIX_17_440;
			OFFSET_FIX_2B = OFFSET_FIX_2B_440;
			FIRMWARE = 0x440C;
			return SUCCESS;
		break;
		case 0x80000000003487E0ULL:
			HV_START_OFFSET = HV_START_OFFSET_441;
			SYSCALL_TABLE = SYSCALL_TABLE_441;
			OFFSET_2_FIX = OFFSET_2_FIX_441;
			OFFSET_FIX = OFFSET_FIX_441;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_441;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_441;
			OFFSET_FIX_3C = OFFSET_FIX_3C_441;
			OFFSET_FIX_17 = OFFSET_FIX_17_441;
			OFFSET_FIX_2B = OFFSET_FIX_2B_441;
			FIRMWARE = 0x441C;
			return SUCCESS;
		break;
		case 0x80000000003665C0ULL:
			HV_START_OFFSET = HV_START_OFFSET_441D;
			SYSCALL_TABLE = SYSCALL_TABLE_441D;
			OFFSET_2_FIX = OFFSET_2_FIX_441D;
			OFFSET_FIX = OFFSET_FIX_441D;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_441D;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_441D;
			OFFSET_FIX_3C = OFFSET_FIX_3C_441D;
			OFFSET_FIX_17 = OFFSET_FIX_17_441D;
			OFFSET_FIX_2B = OFFSET_FIX_2B_441D;
			FIRMWARE = 0x441D;
			return SUCCESS;
		break;
		case 0x8000000000348DF0ULL:
			HV_START_OFFSET = HV_START_OFFSET_446;
			SYSCALL_TABLE = SYSCALL_TABLE_446;
			OFFSET_2_FIX = OFFSET_2_FIX_446;
			OFFSET_FIX = OFFSET_FIX_446;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_446;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_446;
			OFFSET_FIX_3C = OFFSET_FIX_3C_446;
			OFFSET_FIX_17 = OFFSET_FIX_17_446;
			OFFSET_FIX_2B = OFFSET_FIX_2B_446;
			FIRMWARE = 0x446C;
			return SUCCESS;
		break;
		 case 0x8000000000366BD0ULL:
			HV_START_OFFSET = HV_START_OFFSET_446D;
			SYSCALL_TABLE = SYSCALL_TABLE_446D;
			OFFSET_2_FIX = OFFSET_2_FIX_446D;
			OFFSET_FIX = OFFSET_FIX_446D;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_446D;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_446D;
			OFFSET_FIX_3C = OFFSET_FIX_3C_446D;
			OFFSET_FIX_17 = OFFSET_FIX_17_446D;
			OFFSET_FIX_2B = OFFSET_FIX_2B_446D;
			FIRMWARE = 0x446D;
			return SUCCESS;
		break;
		 case 0x800000000034B160ULL:
			HV_START_OFFSET = HV_START_OFFSET_450;
			SYSCALL_TABLE = SYSCALL_TABLE_450;
			OFFSET_2_FIX = OFFSET_2_FIX_450;
			OFFSET_FIX = OFFSET_FIX_450;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_450;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_450;
			OFFSET_FIX_3C = OFFSET_FIX_3C_450;
			OFFSET_FIX_17 = OFFSET_FIX_17_450;
			OFFSET_FIX_2B = OFFSET_FIX_2B_450;
			FIRMWARE = 0x450C;
			return SUCCESS;
		break;
		case 0x800000000036EC40ULL:
			HV_START_OFFSET = HV_START_OFFSET_450D;
			SYSCALL_TABLE = SYSCALL_TABLE_450D;
			OFFSET_2_FIX = OFFSET_2_FIX_450D;
			OFFSET_FIX = OFFSET_FIX_450D;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_450D;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_450D;
			OFFSET_FIX_3C = OFFSET_FIX_3C_450D;
			OFFSET_FIX_17 = OFFSET_FIX_17_450D;
			OFFSET_FIX_2B = OFFSET_FIX_2B_450D;
			FIRMWARE = 0x450D;
			return SUCCESS;
		break;
		case 0x800000000034B2E0ULL:
			HV_START_OFFSET = HV_START_OFFSET_453;
			SYSCALL_TABLE = SYSCALL_TABLE_453;
			OFFSET_2_FIX = OFFSET_2_FIX_453;
			OFFSET_FIX = OFFSET_FIX_453;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_453;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_453;
			OFFSET_FIX_3C = OFFSET_FIX_3C_453;
			OFFSET_FIX_17 = OFFSET_FIX_17_453;
			OFFSET_FIX_2B = OFFSET_FIX_2B_453;
			FIRMWARE = 0x453C;
			return SUCCESS;
		break;
		case 0x8000000000370620ULL:
			HV_START_OFFSET = HV_START_OFFSET_453D;
			SYSCALL_TABLE = SYSCALL_TABLE_453D;
			OFFSET_2_FIX = OFFSET_2_FIX_453D;
			OFFSET_FIX = OFFSET_FIX_453D;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_453D;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_453D;
			OFFSET_FIX_3C = OFFSET_FIX_3C_453D;
			OFFSET_FIX_17 = OFFSET_FIX_17_453D;
			OFFSET_FIX_2B = OFFSET_FIX_2B_453D;
			FIRMWARE = 0x453D;
			return SUCCESS;
		break;
		case 0x800000000034E620ULL:
			HV_START_OFFSET = HV_START_OFFSET_455;
			SYSCALL_TABLE = SYSCALL_TABLE_455;
			OFFSET_2_FIX = OFFSET_2_FIX_455;
			OFFSET_FIX = OFFSET_FIX_455;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_455;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_455;
			OFFSET_FIX_3C = OFFSET_FIX_3C_455;
			OFFSET_FIX_17 = OFFSET_FIX_17_455;
			OFFSET_FIX_2B = OFFSET_FIX_2B_455;
			FIRMWARE = 0x455C;
			return SUCCESS;
		break;
		case 0x80000000003738E0ULL:
			HV_START_OFFSET = HV_START_OFFSET_455D;
			SYSCALL_TABLE = SYSCALL_TABLE_455D;
			OFFSET_2_FIX = OFFSET_2_FIX_455D;
			OFFSET_FIX = OFFSET_FIX_455D;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_455D;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_455D;
			OFFSET_FIX_3C = OFFSET_FIX_3C_455D;
			OFFSET_FIX_17 = OFFSET_FIX_17_455D;
			OFFSET_FIX_2B = OFFSET_FIX_2B_455D;
			FIRMWARE = 0x455D;
			return SUCCESS;
		break;
		case 0x800000000034F950ULL:
			HV_START_OFFSET = HV_START_OFFSET_460;
			SYSCALL_TABLE = SYSCALL_TABLE_460;
			OFFSET_2_FIX = OFFSET_2_FIX_460;
			OFFSET_FIX = OFFSET_FIX_460;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_460;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_460;
			OFFSET_FIX_3C = OFFSET_FIX_3C_460;
			OFFSET_FIX_17 = OFFSET_FIX_17_460;
			OFFSET_FIX_2B = OFFSET_FIX_2B_460;
			FIRMWARE = 0x460C;
			return SUCCESS;
		break;
		case 0x8000000000375500ULL:
			HV_START_OFFSET = HV_START_OFFSET_460D;
			SYSCALL_TABLE = SYSCALL_TABLE_460D;
			OFFSET_2_FIX = OFFSET_2_FIX_460D;
			OFFSET_FIX = OFFSET_FIX_460D;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_460D;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_460D;
			OFFSET_FIX_3C = OFFSET_FIX_3C_460D;
			OFFSET_FIX_17 = OFFSET_FIX_17_460D;
			OFFSET_FIX_2B = OFFSET_FIX_2B_460D;
			FIRMWARE = 0x460D;
			return SUCCESS;
		break;
		case 0x800000000034F960ULL:
			HV_START_OFFSET = HV_START_OFFSET_465;
			SYSCALL_TABLE = SYSCALL_TABLE_465;
			OFFSET_2_FIX = OFFSET_2_FIX_465;
			OFFSET_FIX = OFFSET_FIX_465;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_465;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_465;
			OFFSET_FIX_3C = OFFSET_FIX_3C_465;
			OFFSET_FIX_17 = OFFSET_FIX_17_465;
			OFFSET_FIX_2B = OFFSET_FIX_2B_465;
			FIRMWARE = (lv2peek(0x80000000002FC938ULL)==0x323031342F31312FULL) ? 0x466C : 0x465C;
			return SUCCESS;
		break;
		case 0x8000000000375510ULL:
			HV_START_OFFSET = HV_START_OFFSET_465D;
			SYSCALL_TABLE = SYSCALL_TABLE_465D;
			OFFSET_2_FIX = OFFSET_2_FIX_465D;
			OFFSET_FIX = OFFSET_FIX_465D;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_465D;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_465D;
			OFFSET_FIX_3C = OFFSET_FIX_3C_465D;
			OFFSET_FIX_17 = OFFSET_FIX_17_465D;
			OFFSET_FIX_2B = OFFSET_FIX_2B_465D;
			FIRMWARE = (lv2peek(0x800000000031EBA8ULL)==0x323031342F31312FULL) ? 0x466D : 0x465D;
			return SUCCESS;
		break;
		case 0x800000000034FB10ULL:
			HV_START_OFFSET = HV_START_OFFSET_470;
			SYSCALL_TABLE = SYSCALL_TABLE_470;
			OFFSET_2_FIX = OFFSET_2_FIX_470;
			OFFSET_FIX = OFFSET_FIX_470;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_470;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_470;
			OFFSET_FIX_3C = OFFSET_FIX_3C_470;
			OFFSET_FIX_17 = OFFSET_FIX_17_470;
			OFFSET_FIX_2B = OFFSET_FIX_2B_470;
			FIRMWARE = 0x470C;
			return SUCCESS;
		break;
		case 0x8000000000375850ULL:
			HV_START_OFFSET = HV_START_OFFSET_470D;
			SYSCALL_TABLE = SYSCALL_TABLE_470D;
			OFFSET_2_FIX = OFFSET_2_FIX_470D;
			OFFSET_FIX = OFFSET_FIX_470D;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_470D;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_470D;
			OFFSET_FIX_3C = OFFSET_FIX_3C_470D;
			OFFSET_FIX_17 = OFFSET_FIX_17_470D;
			OFFSET_FIX_2B = OFFSET_FIX_2B_470D;
			FIRMWARE = 0x470D;
			return SUCCESS;
		break;
		case 0x800000000034FBB0ULL:
			HV_START_OFFSET = HV_START_OFFSET_475;
			SYSCALL_TABLE = SYSCALL_TABLE_475;
			OFFSET_2_FIX = OFFSET_2_FIX_475;
			OFFSET_FIX = OFFSET_FIX_475;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_475;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_475;
			OFFSET_FIX_3C = OFFSET_FIX_3C_475;
			OFFSET_FIX_17 = OFFSET_FIX_17_475;
			OFFSET_FIX_2B = OFFSET_FIX_2B_475;
			if(lv2peek(0x80000000002FCB68ULL)==0x323031352F30382FULL) FIRMWARE = 0x476C;
			else if(lv2peek(0x80000000002FCB68ULL)==0x323031352F31322FULL) FIRMWARE = 0x478C;
			else FIRMWARE = 0x475C;
			return SUCCESS;
		break;
		case 0x80000000003758E0ULL:
			HV_START_OFFSET = HV_START_OFFSET_475D;
			SYSCALL_TABLE = SYSCALL_TABLE_475D;
			OFFSET_2_FIX = OFFSET_2_FIX_475D;
			OFFSET_FIX = OFFSET_FIX_475D;
			OFFSET_FIX_2B17 = OFFSET_FIX_2B17_475D;
			OFFSET_FIX_LIC = OFFSET_FIX_LIC_475D;
			OFFSET_FIX_3C = OFFSET_FIX_3C_475D;
			OFFSET_FIX_17 = OFFSET_FIX_17_475D;
			OFFSET_FIX_2B = OFFSET_FIX_2B_475D;
			if(lv2peek(0x800000000031EF48ULL)==0x323031352F30382FULL) FIRMWARE = 0x476D;
			else if(lv2peek(0x800000000031EF48ULL)== 0x323031352F31322FULL) FIRMWARE = 0x478D; 
			else FIRMWARE = 0x475D;
			return SUCCESS;
		break;
		default:
			return FAILED;
		break;
	}
	return FAILED;
}


int mamba_prx_loader(int mamba_off, int noplugins)
{
    #ifdef ENABLE_LOG
    if (verbose)  WriteToLog("[MAMBA/PRX LOADER]");
    #endif
    
    //FW INIT
    if (get_firmware_info() != SUCCESS )
    {
        #ifdef ENABLE_LOG
        if (verbose) WriteToLog("Error: Unsupported FIRMWARE");
        #endif
        return FAILED;
    
    }
    
    //LOAD MAMBA/PRX LOADER PAYLOAD
    if (load_mamba_prx_loader_payload() == SUCCESS)
    {
        #ifdef ENABLE_LOG
        if (verbose) WriteToLog("Success: MAMBA/PRX Loader payload loaded");
        #endif
    }
    else return FAILED;
    
    
    #ifdef USING_NEW_CORE
    //FLAG MAMBA
    if(file_exists("/dev_usb000/core_flags/mamba_off")==0) mamba_off = 1;
    else if(file_exists("/dev_usb001/core_flags/mamba_off")==0) mamba_off = 1;
    else if(file_exists("/dev_hdd0/tmp/core_flags/mamba_off")==0) mamba_off = 1;
    if (mamba_off && verbose) WriteToLog("Success: Flag mamba_off detected");   
    //FLAG VSH Plugins
    if(file_exists("/dev_usb000/core_flags/noplugins")==0) noplugins = 1;
    else if(file_exists("/dev_usb001/core_flags/noplugins")==0) noplugins = 1;
    else if(file_exists("/dev_hdd0/tmp/core_flags/noplugins")==0) noplugins = 1;    
    if (noplugins && verbose) WriteToLog("Success: Flag noplugins detected");
    #endif
    
    //LOAD MAMBA
    if (!mamba_off)
    {
        #ifdef ENABLE_LOG
        if (verbose)  WriteToLog("[MAMBA]");
        #endif
        if (load_mamba() == SUCCESS)
        {
            #ifdef ENABLE_LOG
            if (verbose) WriteToLog("Success: MAMBA payload loaded");
            #endif
        }
        else
        {
            unload_mamba_prx_loader_payload();
            return FAILED;
        }
    }   
    
    //LOAD VSH PLUGINS
    if (!noplugins)
    {
        #ifdef ENABLE_LOG
        if (verbose)  WriteToLog("[VSH PLUGINS]");
        #endif
        load_vsh_plugins();
    }
    
    //UNLOAD MAMBA/PRX LOADER PAYLOAD
    if (unload_mamba_prx_loader_payload() == SUCCESS)
        {
            #ifdef ENABLE_LOG
            if (verbose) WriteToLog("Success: MAMBA/PRX Loader payload unloaded");
            #endif
        }
        
    //END
    return SUCCESS; 
}

/*PS3 MANAGER API
 * Copyright (c) 2014 _NzV_.
 *
 * This code is write by _NzV_ <donm7v@gmail.com>.
 * It may be used for any purpose as long as this notice remains intact on all
 * source code distributions.
 */

#ifndef __PS3MAPI_H__
#define __PS3MAPI_H__

#include <lv2/process.h>
#include <lv2/modules.h>

#define SYSCALL8_OPCODE_PS3MAPI			 		0x7777

//-----------------------------------------------
//CORE
//-----------------------------------------------

#define PS3MAPI_CORE_VERSION			 		0x0122
#define PS3MAPI_CORE_MINVERSION			 		0x0111

#if defined(FIRMWARE_3_55)
	#define PS3MAPI_FW_VERSION			 		0x0355
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003BA880ULL
	#define PS3MAPI_IDPS_2			 			0x800000000044A174ULL
	#define PS3MAPI_PSID			 			0x800000000044A18CULL
#endif
#if defined(FIRMWARE_3_55DEX)
	#define PS3MAPI_FW_VERSION			 		0x0355
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003DE170ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000472174ULL
	#define PS3MAPI_PSID			 			0x800000000047218CULL
#endif
#if defined(FIRMWARE_4_21)
	#define PS3MAPI_FW_VERSION			 		0x0421
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003D9230ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000477E9CULL
	#define PS3MAPI_PSID			 			0x8000000000477EB4ULL
#endif
#if defined(FIRMWARE_4_21DEX)
	#define PS3MAPI_FW_VERSION			 		0x0421
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003F7A30ULL
	#define PS3MAPI_IDPS_2			 			0x800000000048FE9CULL
	#define PS3MAPI_PSID			 			0x800000000048FEB4ULL
#endif
#if defined(FIRMWARE_4_30)
	#define PS3MAPI_FW_VERSION			 		0x0430
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003DB1B0ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000476F3CULL
	#define PS3MAPI_PSID			 			0x8000000000476F54ULL
#endif
#if defined(FIRMWARE_4_30DEX)
	#define PS3MAPI_FW_VERSION			 		0x0430
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003F9930ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000496F3CULL
	#define PS3MAPI_PSID			 			0x8000000000496F54ULL
#endif
#if defined(FIRMWARE_4_31)
	#define PS3MAPI_FW_VERSION			 		0x0431
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003DB1B0ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000476F3CULL
	#define PS3MAPI_PSID			 			0x8000000000476F54ULL
#endif
#if defined(FIRMWARE_4_40)
	#define PS3MAPI_FW_VERSION			 		0x0440
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003DB830ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000476F3CULL
	#define PS3MAPI_PSID			 			0x8000000000476F54ULL
#endif
#if defined(FIRMWARE_4_41)
	#define PS3MAPI_FW_VERSION			 		0x0441
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003DB830ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000476F3CULL
	#define PS3MAPI_PSID						0x8000000000476F54ULL
#endif
#if defined(FIRMWARE_4_41DEX)
	#define PS3MAPI_FW_VERSION			 		0x0441
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003FA2B0ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000496F3CULL
	#define PS3MAPI_PSID						0x8000000000496F54ULL
#endif
#if defined(FIRMWARE_4_46)
	#define PS3MAPI_FW_VERSION			 		0x0446
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003DBE30ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000476F3CULL
	#define PS3MAPI_PSID						0x8000000000476F54ULL
#endif
#if defined(FIRMWARE_4_46DEX)
	#define PS3MAPI_FW_VERSION			 		0x0446
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003FA8B0ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000496F3CULL
	#define PS3MAPI_PSID						0x8000000000496F54ULL
#endif
#if defined(FIRMWARE_4_50)
	#define PS3MAPI_FW_VERSION			 		0x0450
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003DE230ULL
	#define PS3MAPI_IDPS_2			 			0x800000000046CF0CULL
	#define PS3MAPI_PSID						0x800000000046CF24ULL
#endif
#if defined(FIRMWARE_4_50DEX)
	#define PS3MAPI_FW_VERSION			 		0x0450
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x8000000000402AB0ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000494F0CULL
	#define PS3MAPI_PSID						0x8000000000494F24ULL
#endif
#if defined(FIRMWARE_4_53)
	#define PS3MAPI_FW_VERSION			 		0x0453
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003DE430ULL
	#define PS3MAPI_IDPS_2			 			0x800000000046CF0CULL
	#define PS3MAPI_PSID						0x800000000046CF24ULL
#endif
#if defined(FIRMWARE_4_53DEX)
	#define PS3MAPI_FW_VERSION			 		0x0453
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000004045B0ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000494F1CULL
	#define PS3MAPI_PSID						0x8000000000494F34ULL
#endif
#if defined(FIRMWARE_4_55)
	#define PS3MAPI_FW_VERSION			 		0x0455
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003E17B0ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000474F1CULL
	#define PS3MAPI_PSID						0x8000000000474F34ULL
#endif
#if defined(FIRMWARE_4_55DEX)
	#define PS3MAPI_FW_VERSION			 		0x0455
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x8000000000407930ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000494F1CULL
	#define PS3MAPI_PSID						0x8000000000494F34ULL
#endif
#if defined(FIRMWARE_4_60)
	#define PS3MAPI_FW_VERSION			 		0x0460
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003E2BB0ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000474F1CULL
	#define PS3MAPI_PSID						0x8000000000474F34ULL
#endif
#if defined(FIRMWARE_4_60DEX)
	#define PS3MAPI_FW_VERSION			 		0x0460
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000004095B0ULL
	#define PS3MAPI_IDPS_2			 			0x800000000049CF1CULL
	#define PS3MAPI_PSID						0x800000000049CF34ULL
#endif
#if defined(FIRMWARE_4_65)
	#define PS3MAPI_FW_VERSION			 		0x0465
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003E2BB0ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000474F1CULL
	#define PS3MAPI_PSID						0x8000000000474F34ULL
#endif
#if defined(FIRMWARE_4_65DEX)
	#define PS3MAPI_FW_VERSION			 		0x0465
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000004095B0ULL
	#define PS3MAPI_IDPS_2			 			0x800000000049CF1CULL
	#define PS3MAPI_PSID						0x800000000049CF34ULL
#endif
#if defined(FIRMWARE_4_66)
	#define PS3MAPI_FW_VERSION			 		0x0466
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003E2BB0ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000474F1CULL
	#define PS3MAPI_PSID						0x8000000000474F34ULL
#endif
#if defined(FIRMWARE_4_66DEX)
	#define PS3MAPI_FW_VERSION			 		0x0466
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000004095B0ULL
	#define PS3MAPI_IDPS_2			 			0x800000000049CF1CULL
	#define PS3MAPI_PSID						0x800000000049CF34ULL
#endif
#if defined(FIRMWARE_4_70)
	#define PS3MAPI_FW_VERSION			 		0x0470
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003E2DB0ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000474AF4ULL
	#define PS3MAPI_PSID						0x8000000000474B0CULL
#endif
#if defined(FIRMWARE_4_70DEX)
	#define PS3MAPI_FW_VERSION			 		0x0470
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000004098B0ULL
	#define PS3MAPI_IDPS_2			 			0x800000000049CAF4ULL
	#define PS3MAPI_PSID						0x800000000049CB0CULL
#elif defined(FIRMWARE_4_75)
	#define PS3MAPI_FW_VERSION			 		0x0475
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003E2E30ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000474AF4ULL
	#define PS3MAPI_PSID						0x8000000000474B0CULL
#endif
#if defined(FIRMWARE_4_75DEX)
	#define PS3MAPI_FW_VERSION			 		0x0475
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x8000000000409930ULL
	#define PS3MAPI_IDPS_2			 			0x800000000049CAF4ULL
	#define PS3MAPI_PSID						0x800000000049CB0CULL
#endif						0x800000000049CB0CULL
#if defined(FIRMWARE_4_76)
	#define PS3MAPI_FW_VERSION			 		0x0476
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"CEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"CEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x80000000003E2E30ULL
	#define PS3MAPI_IDPS_2			 			0x8000000000474AF4ULL
	#define PS3MAPI_PSID						0x8000000000474B0CULL
#endif
#if defined(FIRMWARE_4_76DEX)
	#define PS3MAPI_FW_VERSION			 		0x0476
	#if defined(IS_MAMBA)
		#define PS3MAPI_FW_TYPE			 		"DEX MAMBA"
	#else
		#define PS3MAPI_FW_TYPE			 		"DEX COBRA"
	#endif
	#define PS3MAPI_IDPS_1			 			0x8000000000409930ULL
	#define PS3MAPI_IDPS_2			 			0x800000000049CAF4ULL
	#define PS3MAPI_PSID						0x800000000049CB0CULL
#endif

#define PS3MAPI_OPCODE_GET_CORE_VERSION			0x0011
#define PS3MAPI_OPCODE_GET_CORE_MINVERSION		0x0012
#define PS3MAPI_OPCODE_GET_FW_TYPE				0x0013
#define PS3MAPI_OPCODE_GET_FW_VERSION			0x0014

int ps3mapi_get_fw_type(char *fw);

//-----------------------------------------------
//PROCESSES
//-----------------------------------------------

#define PS3MAPI_OPCODE_GET_ALL_PROC_PID			0x0021
#define PS3MAPI_OPCODE_GET_PROC_NAME_BY_PID		0x0022
#define PS3MAPI_OPCODE_GET_PROC_BY_PID			0x0023
#define PS3MAPI_OPCODE_GET_CURRENT_PROC			0x0024
#define PS3MAPI_OPCODE_GET_CURRENT_PROC_CRIT	0x0025

typedef uint32_t process_id_t;

int ps3mapi_get_all_processes_pid(process_id_t *pid_list);
int ps3mapi_get_process_name_by_pid(process_id_t pid, char *name);
int ps3mapi_get_process_by_pid(process_id_t pid, process_t process);
int ps3mapi_process_kill_by_pid(process_id_t pid);
int ps3mapi_get_current_process_critical(process_t process);
int ps3mapi_get_current_process(process_t process);

//-----------------------------------------------
//MEMORY
//-----------------------------------------------

#define PS3MAPI_OPCODE_GET_PROC_MEM				0x0031
#define PS3MAPI_OPCODE_SET_PROC_MEM				0x0032

int ps3mapi_set_process_mem(process_id_t pid, uint64_t addr, char *buf, int size);
int ps3mapi_get_process_mem(process_id_t pid, uint64_t addr, char *buf, int size);

//-----------------------------------------------
//MODULES
//-----------------------------------------------

#define PS3MAPI_OPCODE_GET_ALL_PROC_MODULE_PID		0x0041
#define PS3MAPI_OPCODE_GET_PROC_MODULE_NAME			0x0042
#define PS3MAPI_OPCODE_GET_PROC_MODULE_FILENAME		0x0043
#define PS3MAPI_OPCODE_LOAD_PROC_MODULE				0x0044
#define PS3MAPI_OPCODE_UNLOAD_PROC_MODULE			0x0045
#define PS3MAPI_OPCODE_UNLOAD_VSH_PLUGIN			0x0046 //Look in modulespatch.c for code.
#define PS3MAPI_OPCODE_GET_VSH_PLUGIN_INFO			0x0047 //Look in modulespatch.c for code.

int ps3mapi_get_all_process_modules_prx_id(process_id_t pid, sys_prx_id_t *prx_id_list);
int ps3mapi_get_process_module_name_by_prx_id(process_id_t pid, sys_prx_id_t prx_id, char *name);
int ps3mapi_get_process_module_filename_by_prx_id(process_id_t pid, sys_prx_id_t prx_id, char *name);
int ps3mapi_load_process_modules(process_id_t pid, char *path, void *arg, uint32_t arg_size);
int ps3mapi_unload_process_modules(process_id_t pid, sys_prx_id_t prx_id);

//-----------------------------------------------
//SYSCALL
//-----------------------------------------------

#define SYSCALL8_OPCODE_STEALTH_TEST			0x3993 //KW PSNPatch stealth extension compatibility
#define SYSCALL8_OPCODE_STEALTH_ACTIVATE    	0x3995 //KW PSNPatch stealth extension compatibility
#define SYSCALL8_STEALTH_OK						0x5555 //KW PSNPatch stealth extension compatibility
#define PS3MAPI_OPCODE_CHECK_SYSCALL			0x0091
#define PS3MAPI_OPCODE_DISABLE_SYSCALL			0x0092
#define PS3MAPI_OPCODE_PDISABLE_SYSCALL8 		0x0093 //Look in main.c for code.
#define PS3MAPI_OPCODE_PCHECK_SYSCALL8 			0x0094 //Look in main.c for code.


int ps3mapi_check_syscall(int num);
int ps3mapi_disable_syscall(int num);

//-----------------------------------------------
//PEEK POKE
//-----------------------------------------------

#define PS3MAPI_OPCODE_SUPPORT_SC8_PEEK_POKE	0x1000
#define PS3MAPI_OPCODE_LV2_PEEK					0x1006
#define PS3MAPI_OPCODE_LV2_POKE					0x1007
#define PS3MAPI_OPCODE_LV1_PEEK					0x1008
#define PS3MAPI_OPCODE_LV1_POKE					0x1009

//-----------------------------------------------
//SECURITY
//-----------------------------------------------

#define PS3MAPI_OPCODE_SET_ACCESS_KEY			0x2000
#define PS3MAPI_OPCODE_REQUEST_ACCESS			0x2001

//-----------------------------------------------
//REMOVE COBRA/MAMBA HOOK
//-----------------------------------------------

#define PS3MAPI_OPCODE_REMOVE_HOOK			0x0101 //Look in main.c for code.

//-----------------------------------------------
//PSID/IDPS
//-----------------------------------------------

#define PS3MAPI_OPCODE_GET_IDPS 		0x0081
#define PS3MAPI_OPCODE_SET_IDPS 		0x0082
#define PS3MAPI_OPCODE_GET_PSID 		0x0083
#define PS3MAPI_OPCODE_SET_PSID			0x0084

int ps3mapi_get_idps(uint64_t *idps);
int ps3mapi_set_idps(uint64_t part1, uint64_t part2);
int ps3mapi_get_psid(uint64_t *psid);
int ps3mapi_set_psid(uint64_t part1, uint64_t part2);

#endif /* __PS3MAPI_H__ */


/*PS3 MANAGER API
 * Copyright (c) 2014 _NzV_.
 *
 * This code is write by _NzV_ <donm7v@gmail.com>.
 * It may be used for any purpose as long as this notice remains intact on all
 * source code distributions.
 */

#include <sys/syscall.h>
#include <sys/return_code.h>
#include <cell/cell_fs.h>
#include "ps3mapi_ps3_lib.h"

#define KB 1024ULL

int sys_game_get_temperature(uint32_t _dev, uint32_t *temperature);

//-----------------------------------------------
//CORE
//-----------------------------------------------

int ps3mapi_get_core_version(void)
{
	system_call_2(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_CORE_VERSION);
	return_to_user_prog(int);						
}

int ps3mapi_get_core_minversion(void)
{
	system_call_2(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_CORE_MINVERSION);
	return_to_user_prog(int);						
}

int ps3mapi_get_fw_type(char *fw) 
{
	system_call_3(8, (uint64_t)SYSCALL8_OPCODE_PS3MAPI, (uint64_t)PS3MAPI_OPCODE_GET_FW_TYPE, (uint64_t)((uint32_t)fw));
	return_to_user_prog(int);						
}

int ps3mapi_get_fw_version(void)
{
	system_call_2(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_FW_VERSION);
	return_to_user_prog(int);						
}

//-----------------------------------------------
//PROCESSES
//-----------------------------------------------

int ps3mapi_get_all_processes_pid(process_id_t *pid_list)
{
	system_call_3(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_ALL_PROC_PID, (uint64_t)((uint32_t)pid_list));
	return_to_user_prog(int);						
}

int  ps3mapi_get_process_name_by_pid(process_id_t pid, char *name)
{
	system_call_4(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PROC_NAME_BY_PID, (uint64_t)pid, (uint64_t)((uint32_t)name));
	return_to_user_prog(int);						
}

int ps3mapi_get_process_by_pid(process_id_t pid, process_t process)
{
	system_call_4(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PROC_BY_PID, (uint64_t)pid, (uint64_t)((uint32_t)process));
	return_to_user_prog(int);						
}

int ps3mapi_get_current_process_critical(process_t process)
{
	system_call_3(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_CURRENT_PROC_CRIT, (uint64_t)((uint32_t)process));
	return_to_user_prog(int);
}

int ps3mapi_get_current_process(process_t process)
{
	system_call_3(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_CURRENT_PROC, (uint64_t)((uint32_t)process));
	return_to_user_prog(int);						
}

//-----------------------------------------------
//MEMORY
//-----------------------------------------------

int set_process_mem(process_id_t pid, uint64_t addr, char * buf, int size, int isDEX, int isCCAPI)
{
	if (isDEX)
	{
		return dex_set_process_mem(pid, addr, buf, size);
	}
	else if (isCCAPI)
	{
		return ccapi_set_process_mem(pid, addr, buf, size);
	}
	
	return ps3mapi_set_process_mem(pid, addr, buf, size);
}

int get_process_mem(process_id_t pid, uint64_t addr, char *buf, int size, int isDEX, int isCCAPI)
{
	if (isDEX)
	{
		return dex_get_process_mem(pid, addr, buf, size);
	}
	else if (isCCAPI)
	{
		return ccapi_get_process_mem(pid, addr, buf, size);
	}
	
	return ps3mapi_get_process_mem(pid, addr, buf, size);
}

int ps3mapi_set_process_mem(process_id_t pid, uint64_t addr, char *buf, int size )
{
	system_call_6(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_SET_PROC_MEM, (uint64_t)pid, (uint64_t)addr, (uint64_t)((uint32_t)buf), (uint64_t)size);
	return_to_user_prog(int);
}

int dex_set_process_mem(process_id_t pid, uint64_t addr, char *buf, int size )
{
	system_call_4(905, (uint64_t)pid, (uint64_t)addr, (uint64_t)size, (uint64_t)((uint32_t)buf));
	return_to_user_prog(int);
}

int ccapi_set_process_mem(process_id_t pid, uint64_t addr, char *buf, int size )
{
	system_call_4(201, (uint64_t)pid, (uint64_t)addr, (uint64_t)size, (uint64_t)((uint32_t)buf));
	return_to_user_prog(int);
}

int ps3mapi_get_process_mem(process_id_t pid, uint64_t addr, char *buf, int size)
{
	system_call_6(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PROC_MEM, (uint64_t)pid, (uint64_t)addr, (uint64_t)((uint32_t)buf), (uint64_t)size);
	return_to_user_prog(int);						
}
	
int dex_get_process_mem(process_id_t pid, uint64_t addr, char *buf, int size)
{
	system_call_4(904, (uint64_t)pid, (uint64_t)addr, (uint64_t)size, (uint64_t)((uint32_t)buf));
	return_to_user_prog(int);
}

int ccapi_get_process_mem(process_id_t pid, uint64_t addr, char *buf, int size)
{
	system_call_4(200, (uint64_t)pid, (uint64_t)addr, (uint64_t)size, (uint64_t)((uint32_t)buf));
	return_to_user_prog(int);
}

//-----------------------------------------------
//MODULES
//-----------------------------------------------

int ps3mapi_get_all_process_modules_prx_id(process_id_t pid, sys_prx_id_t *prx_id_list)
{
	system_call_4(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_ALL_PROC_MODULE_PID, (uint64_t)pid, (uint64_t)((uint32_t)prx_id_list));
	return_to_user_prog(int);						
}

int ps3mapi_get_process_module_name_by_prx_id(process_id_t pid, sys_prx_id_t prx_id, char *name)
{
	system_call_5(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PROC_MODULE_NAME, (uint64_t)pid, (uint64_t)prx_id, (uint64_t)((uint32_t)name));
	return_to_user_prog(int);						
}

int ps3mapi_get_process_module_filename_by_prx_id(process_id_t pid, sys_prx_id_t prx_id, char *filename)
{
	system_call_5(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PROC_MODULE_FILENAME, (uint64_t)pid, (uint64_t)prx_id, (uint64_t)((uint32_t)filename));
	return_to_user_prog(int);						
}

int ps3mapi_load_process_modules(process_id_t pid, char *path, void *arg, uint32_t arg_size)
{
	system_call_6(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_LOAD_PROC_MODULE, (uint64_t)pid, (uint64_t)((uint32_t)path), (uint64_t)((uint32_t)arg), (uint64_t)arg_size);
	return_to_user_prog(int);						
}

int ps3mapi_unload_process_modules(process_id_t pid, sys_prx_id_t prx_id)
{
	system_call_4(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_UNLOAD_PROC_MODULE, (uint64_t)pid, (uint64_t)prx_id);
	return_to_user_prog(int);						
}

int ps3mapi_unload_vsh_plugin(char *name)
{
	system_call_3(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_UNLOAD_VSH_PLUGIN, (uint64_t)((uint32_t)name));
	return_to_user_prog(int);						
}

int ps3mapi_get_vsh_plugin_info(unsigned int slot, char *name, char *filename)
{
	system_call_5(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_VSH_PLUGIN_INFO, (uint64_t)slot, (uint64_t)((uint32_t)name), (uint64_t)((uint32_t)filename));
	return_to_user_prog(int);						
}

//-----------------------------------------------
//CLEAN SYSCALL
//-----------------------------------------------

int ps3mapi_check_syscall(int num)
{
	system_call_3(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_CHECK_SYSCALL, (uint64_t)num);
	return_to_user_prog(int);						
}

int ps3mapi_disable_syscall(int num)
{
	system_call_3(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_DISABLE_SYSCALL, (uint64_t)num);
	return_to_user_prog(int);						
}

int ps3mapi_pdisable_syscall8(int mode)
{
	system_call_3(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_PDISABLE_SYSCALL8, (uint64_t)mode);
	return_to_user_prog(int);						
}

int ps3mapi_pcheck_syscall8()
{
	system_call_2(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_PCHECK_SYSCALL8);
	return_to_user_prog(int);						
}


//-----------------------------------------------
//PSID/IDPS
//-----------------------------------------------

int ps3mapi_get_idps(uint64_t *idps)
{
	system_call_3(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_IDPS, (uint64_t)((uint32_t)idps));
	return_to_user_prog(int);						
}

int ps3mapi_set_idps(uint64_t part1, uint64_t part2)
{
	system_call_4(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_SET_IDPS, (uint64_t)part1, (uint64_t)part2);
	return_to_user_prog(int);						
}

int ps3mapi_get_psid(uint64_t *psid)
{
	system_call_3(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_GET_PSID, (uint64_t)((uint32_t)psid));
	return_to_user_prog(int);						
}

int ps3mapi_set_psid(uint64_t part1, uint64_t part2)
{
	system_call_4(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_SET_PSID, (uint64_t)part1, (uint64_t)part2);
	return_to_user_prog(int);						
}

//-----------------------------------------------
//DISABLE COBRA/MAMBA
//-----------------------------------------------

int ps3mapi_remove_hook(void)
{
	system_call_2(8, SYSCALL8_OPCODE_PS3MAPI, PS3MAPI_OPCODE_REMOVE_HOOK);
	return_to_user_prog(int);						
}

//-----------------------------------------------
//EXTRA (NO PS3 MANAGER SYSCALL)
//-----------------------------------------------

int ps3_shutdown(void)
{
	cellFsUnlink((char*)"/dev_hdd0/tmp/turnoff");
	system_call_4(379, 0x1100, 0, 0, 0);
	return_to_user_prog(int);						
}

int ps3_quick_restart(void)
{
	cellFsUnlink((char*)"/dev_hdd0/tmp/turnoff");
	system_call_3(379, 0x8201 , NULL, 0);
	return_to_user_prog(int);						
}

int ps3_hard_restart(void)
{
	cellFsUnlink((char*)"/dev_hdd0/tmp/turnoff");
	system_call_3(379, 0x1200 , NULL, 0);
	return_to_user_prog(int);						
}

int ps3_soft_restart(void)
{
	cellFsUnlink((char*)"/dev_hdd0/tmp/turnoff");
	system_call_3(379, 0x200 , NULL, 0);
	return_to_user_prog(int);						
}

int led(uint64_t color, uint64_t mode)
{
	system_call_2(386, (uint64_t)color, (uint64_t)mode);
	return_to_user_prog(int);	
}

int ring_buzzer_simple(void)
{
	system_call_3(392, 0x1004, 0x4, 0x6);
	return_to_user_prog(int);	
}

int ring_buzzer_double(void)
{
	system_call_3(392, 0x1004, 0x7, 0x36);
	return_to_user_prog(int);	
}

int ring_buzzer_triple(void)
{
	system_call_3(392, 0x1004, 0xa, 0x1b6);
	return_to_user_prog(int);	
}

int sys_game_get_temperature(uint32_t _dev, uint32_t *temperature)
{
	system_call_2(383, (uint64_t)_dev, (uint64_t)((uint32_t)temperature));
	return_to_user_prog(int);
}

int get_temperature_celcius(uint32_t cpu_temp, uint32_t rsx_temp)
{
	sys_game_get_temperature(0, &cpu_temp);
	sys_game_get_temperature(1, &rsx_temp);
	cpu_temp=cpu_temp>>24;
	rsx_temp=rsx_temp>>24;
    return 0;
}


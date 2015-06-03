/*PS3 MANAGER API
 * Copyright (c) 2014 _NzV_.
 *
 * This code is write by _NzV_ <donm7v@gmail.com>.
 * It may be used for any purpose as long as this notice remains intact on all
 * source code distributions.
 */

#ifndef __PS3MAPI_H__
#define __PS3MAPI_H__

#define process_id_t							uint32_t
#define sys_prx_id_t							int32_t

#define SYSCALL8_OPCODE_PS3MAPI			 		0x7777

#define PS3MAPI_PS3_LIB_VERSION					0x0120

#define PS3MAPI_CORE_MINVERSION					0x0120

//-----------------------------------------------
//CORE
//-----------------------------------------------

#define PS3MAPI_OPCODE_GET_CORE_VERSION			0x0011
#define PS3MAPI_OPCODE_GET_CORE_MINVERSION		0x0012
#define PS3MAPI_OPCODE_GET_FW_TYPE				0x0013
#define PS3MAPI_OPCODE_GET_FW_VERSION			0x0014

int ps3mapi_get_core_version(void);
int ps3mapi_get_core_minversion(void);
int ps3mapi_get_fw_type(char *fw);
int ps3mapi_get_fw_version(void);

//-----------------------------------------------
//PROCESSES
//-----------------------------------------------

#define PS3MAPI_OPCODE_GET_ALL_PROC_PID			0x0021
#define PS3MAPI_OPCODE_GET_PROC_NAME_BY_PID		0x0022
#define PS3MAPI_OPCODE_GET_PROC_BY_PID			0x0023
#define PS3MAPI_OPCODE_GET_CURRENT_PROC			0x0024
#define PS3MAPI_OPCODE_GET_CURRENT_PROC_CRIT	0x0025

typedef struct
{
	void *unk_00; // 0
	char name[24]; // 8
	// ...
} __attribute__((packed)) UnkProcessStruct;

typedef struct _process_t
{
	void *syscall_table; // 0
	uint64_t unk_8[4]; // 8
	uint32_t pid; // 0x28
	int status; // 0x2C
	void *mem_object; // 0x30
	UnkProcessStruct *unk_38; // 0x38
	uint64_t unk_40; // 0x40
	void *first_thread; // 0x48 
	uint64_t unk_50; // 0x50
	uint64_t unk_58; // 0x58
	void *unk_60; // 0x60
	void *unk_68; // 0x68 vshprocess -> mios2_SPU_Service.elf
	void *unk_70; // 0x70 vshprocess -> mios2_SPU_Service.elf
	uint64_t unk_78; // 0x78
	uint64_t unk_80; // 0x80
	uint64_t unk_88[4]; // 0x88
	uint64_t unk_A8; // 0xA8  user address?
	struct _process_t *parent; // 0xB0
	struct _process_t *first_child; // 0xB8  
	struct _process_t *next_sibling; // 0xC0
	uint64_t num_children; // 0xC8
	void *unk_D0; // 0xD0
	uint64_t unk_D8; // 0xD8
	uint64_t unk_E0; // 0xE0
	uint64_t unk_E8; // 0xE8
	uint64_t unk_F0[2]; // 0xF0
	uint64_t unk_100; // 0x100
	uint64_t unk_108; // 0x108
	void *unk_110; // 0x110
	void *unk_118; // 0x118  vshprocess -> pointer to unk_D0
	uint64_t unk_120; // 0x120
	void *unk_128; // 0x128  only on vshprocess -> same as first_thread
	void *unk_130; // 0x130 only on vsh process -> same as first thread
	uint64_t unk_138; // 0x138
	uint64_t unk_140[4]; // 0x140
	char *process_image; // 0x160
	void *unk_168; // 0x168
	uint64_t unk_170; // 0x170
	uint64_t unk_178; // 0x178
	uint64_t unk_180; // 0x180
	uint64_t unk_188[4]; // 0x188
	uint64_t unk_1A8; // 0x1A8
	uint64_t unk_1B0; // 0x1B0
	uint64_t unk_1B8; // 0x1B8
	uint64_t unk_1C0; // 0x1C0
	uint64_t unk_1C8; // 0x1C8
	uint64_t unk_1D0; // 0x1D0
	uint64_t unk_1D8; // 0x1D8
	uint64_t unk_1E0; // 0x1E0
	uint64_t unk_1E8[4]; // 0x1E8
	void *object_table; // 0x208 waiting for a better name...
	// ...?
	// 0x26C -> sdk version 32bits
} __attribute__((packed)) *process_t;

int ps3mapi_get_all_processes_pid(process_id_t *pid_list);
int ps3mapi_get_process_name_by_pid(process_id_t pid, char *name);
int ps3mapi_get_process_by_pid(process_id_t pid, process_t process);
int ps3mapi_get_current_process_critical(process_t process);
int ps3mapi_get_current_process(process_t process);

//-----------------------------------------------
//MEMORY
//-----------------------------------------------

#define PS3MAPI_OPCODE_GET_PROC_MEM			0x0031
#define PS3MAPI_OPCODE_SET_PROC_MEM			0x0032

int set_process_mem(process_id_t pid, uint64_t addr, char * buf, int size, int isDEX, int isCCAPI);
int get_process_mem(process_id_t pid, uint64_t addr, char *buf, int size, int isDEX, int isCCAPI);
int dex_set_process_mem(process_id_t pid, uint64_t addr, char *buf, int size);
int ccapi_set_process_mem(process_id_t pid, uint64_t addr, char *buf, int size);
int ps3mapi_set_process_mem(process_id_t pid, uint64_t addr, char *buf, int size);
int ps3mapi_get_process_mem(process_id_t pid, uint64_t addr, char *buf, int size);
int dex_get_process_mem(process_id_t pid, uint64_t addr, char *buf, int size);
int ccapi_get_process_mem(process_id_t pid, uint64_t addr, char *buf, int size);

//-----------------------------------------------
//MODULES
//-----------------------------------------------

#define PS3MAPI_OPCODE_GET_ALL_PROC_MODULE_PID		0x0041
#define PS3MAPI_OPCODE_GET_PROC_MODULE_NAME			0x0042
#define PS3MAPI_OPCODE_GET_PROC_MODULE_FILENAME		0x0043
#define PS3MAPI_OPCODE_LOAD_PROC_MODULE				0x0044
#define PS3MAPI_OPCODE_UNLOAD_PROC_MODULE			0x0045
#define PS3MAPI_OPCODE_UNLOAD_VSH_PLUGIN			0x0046
#define PS3MAPI_OPCODE_GET_VSH_PLUGIN_INFO			0x0047

int ps3mapi_get_all_process_modules_prx_id(process_id_t pid, sys_prx_id_t *prx_id_list);
int ps3mapi_get_process_module_name_by_prx_id(process_id_t pid, sys_prx_id_t prx_id, char *name);
int ps3mapi_get_process_module_filename_by_prx_id(process_id_t pid, sys_prx_id_t prx_id, char *filename);
int ps3mapi_load_process_modules(process_id_t pid, char *path, void *arg, uint32_t arg_size);
int ps3mapi_unload_process_modules(process_id_t pid, sys_prx_id_t prx_id);
int ps3mapi_unload_vsh_plugin(char *name);
int ps3mapi_get_vsh_plugin_info(unsigned int slot, char *name, char *filename);

//-----------------------------------------------
//CLEAN SYSCALL
//-----------------------------------------------

#define PS3MAPI_OPCODE_CHECK_SYSCALL			0x0091
#define PS3MAPI_OPCODE_DISABLE_SYSCALL			0x0092
#define PS3MAPI_OPCODE_PDISABLE_SYSCALL8 		0x0093
#define PS3MAPI_OPCODE_PCHECK_SYSCALL8 			0x0094

int ps3mapi_check_syscall(int num);
int ps3mapi_disable_syscall(int num);
int ps3mapi_pdisable_syscall8(int mode);
int ps3mapi_pcheck_syscall8(void);

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

//-----------------------------------------------
//REMOVE COBRA/MAMBA HOOK
//-----------------------------------------------

#define PS3MAPI_OPCODE_REMOVE_HOOK			0x0101

int ps3mapi_remove_hook(void);

//-----------------------------------------------
//EXTRA
//-----------------------------------------------

#define LED_COLOR_RED		0
#define LED_COLOR_GREEN		1
#define LED_COLOR_YELLOW	2

#define LED_MODE_OFF		0
#define LED_MODE_ON			1
#define LED_MODE_BLINK		2

int led(uint64_t color, uint64_t mode);
int ps3_shutdown(void);
int ps3_quick_restart(void);
int ps3_hard_restart(void);
int ps3_soft_restart(void);
int ring_buzzer_simple(void);
int ring_buzzer_double(void);
int ring_buzzer_triple(void);
int get_temperature_celcius(uint32_t cpu_temp, uint32_t rsx_temp);

#endif /* __PS3MAPI_H__ */
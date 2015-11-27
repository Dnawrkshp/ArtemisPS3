#ifndef __MODULESPATCH_H__
#define __MODULESPATCH_H__

#include <lv2/process.h>
#include <lv2/thread.h>

// BIG WARNING: self offsets need to add 0x10000 for address shown in IDA, but not sprxs!

#if defined(FIRMWARE_3_55)

#define LIBFS_EXTERNAL_HASH			0x5bc7bad800005fa4
#define vmode_patch_offset			0x4637F4
#define aio_copy_root_offset		0xD37C

#elif defined(FIRMWARE_3_55DEX)

#define LIBFS_EXTERNAL_HASH			0x5bc7bad800005fa4
#define vmode_patch_offset			0x0
#define aio_copy_root_offset		0xD37C

#elif defined(FIRMWARE_4_21)

#define LIBFS_EXTERNAL_HASH			0x5bc7bec800006430
#define vmode_patch_offset			0x43EA78
#define aio_copy_root_offset		0xD5B4

#elif defined(FIRMWARE_4_21DEX)

#define LIBFS_EXTERNAL_HASH			0x5bc7bec800006430
#define vmode_patch_offset			0x446650
#define aio_copy_root_offset		0xD5B4

#elif defined(FIRMWARE_4_30)

#define LIBFS_EXTERNAL_HASH			0x5bc7bec800006430
#define vmode_patch_offset			0x0
#define aio_copy_root_offset		0xD5B4

#elif defined(FIRMWARE_4_30DEX)

#define LIBFS_EXTERNAL_HASH			0x5bc7bec800006430
#define vmode_patch_offset			0x0
#define aio_copy_root_offset		0xD5B4

#elif defined(FIRMWARE_4_31)

#define LIBFS_EXTERNAL_HASH			0x5bc7bec800006430
#define vmode_patch_offset			0x0
#define aio_copy_root_offset		0xD5B4

#elif defined(FIRMWARE_4_40)

#define LIBFS_EXTERNAL_HASH			0x5bc7bec800006430
#define vmode_patch_offset			0x0
#define aio_copy_root_offset		0xD5B4

#elif defined(FIRMWARE_4_41)

#define LIBFS_EXTERNAL_HASH			0x5bc7bec800006430
#define vmode_patch_offset			0x0
#define aio_copy_root_offset		0xD5B4

#elif defined(FIRMWARE_4_41DEX)

#define LIBFS_EXTERNAL_HASH			0x5bc7bec800006430
#define vmode_patch_offset			0x0
#define aio_copy_root_offset		0xD5B4

#elif defined(FIRMWARE_4_46)

#define LIBFS_EXTERNAL_HASH			0x5bc7bec800006433
#define vmode_patch_offset			0x442D68
#define aio_copy_root_offset		0xD5B4

#elif defined(FIRMWARE_4_46DEX)

#define LIBFS_EXTERNAL_HASH			0x5bc7bec800006433
#define vmode_patch_offset			0x44A970
#define aio_copy_root_offset		0xD5B4

#elif defined(FIRMWARE_4_50)
#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x0
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_50DEX)
#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x449B6C
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_53)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x4422FC
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_53DEX)
#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x0
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_55)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x442FD8
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_55DEX)
#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x0
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_60)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x0
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_60DEX)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x0
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_65)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x444E28
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_65DEX)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x44CA1C
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_66)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x444E28
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_66DEX)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x44CA1C
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_70)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x445630
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_70DEX)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x44D224
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_75)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x445BEC
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_75DEX)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x44D7E0
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_76)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x445BEC
#define aio_copy_root_offset		0xD658

#elif defined(FIRMWARE_4_76DEX)

#define LIBFS_EXTERNAL_HASH			0x5bc7bce800006477
#define vmode_patch_offset			0x44D7E0
#define aio_copy_root_offset		0xD658
#endif /* FIRMWARE */

extern uint8_t condition_apphome; //needed libfs patch (JB FORMAT GAME)

extern process_t vsh_process;

process_t get_vsh_process(void); //NzV

/* Functions for kernel */
void modules_patch_init(void);
#ifdef PS3M_API
void unhook_all_modules(void);
#endif
int prx_load_vsh_plugin(unsigned int slot, char *path, void *arg, uint32_t arg_size);
int prx_unload_vsh_plugin(unsigned int slot);

/* Syscalls */
int sys_prx_load_vsh_plugin(unsigned int slot, char *path, void *arg, uint32_t arg_size);
int sys_prx_unload_vsh_plugin(unsigned int slot);
int sys_thread_create_ex(sys_ppu_thread_t *thread, void *entry, uint64_t arg, int prio, uint64_t stacksize, uint64_t flags, const char *threadname);

#ifdef PS3M_API
int ps3mapi_unload_vsh_plugin(char* name);
int ps3mapi_get_vsh_plugin_info(unsigned int slot, char *name, char *filename);
#endif

#endif /* __MODULESPATCH_H__ */


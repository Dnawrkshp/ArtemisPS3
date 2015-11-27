#ifndef __VSH_H__
#define __VSH_H__


// vsh_015910A0  // ? Pool_Destroy()
// vsh_01DFD97E  // ?
// vsh_0D5CCC40  // ? int_sys_fs_fcntl...
// vsh_0F48562D  // ?
// vsh_0F80B71F  // ?
// vsh_13A5BE24  // ?
// vsh_145991B4  // AIMManagerIF: 0x19002 (Get Device Type)

extern int vsh_1714D098(uint32_t *size);                 // sys_fs_get_mount_info_size()
#define sys_fs_get_mount_info_size vsh_1714D098

extern int vsh_172B05CD(uint32_t offset, uint8_t value);  // UpdateManagerIF_WriteEEPROM()
#define UpdateManagerIF_WriteEEPROM vsh_172B05CD

// vsh_18EF767F  // ?
// vsh_196DB98B  // SecureRTCManagerIF_SetRTC
// vsh_1B890AD2  // UpdateManagerIF_GetTokenSeed

extern int vsh_1B8D4287(const char *dir);  // sys_fs_sync, Param: Device Path (e.g. /dev_hdd0)
#define sys_fs_sync vsh_1B8D4287

// vsh_1C68CC75  // ?
// vsh_1EAC97C3  // ?
// vsh_1F80C608  // UpdateManagerIF_GetFixInstruction
// vsh_1F80E287  // AIMManagerIF: 0x19002 (Get Device Type)
// vsh_20215547  // ? file check/load
// vsh_2068CBF3  // sys_ss_get_boot_device
// vsh_233791FE  // ? sys_fs_mount
// vsh_26709B91  // StorageManagerIF_AuthenticateBDDrive
// vsh_278A6AF7  // ?
// vsh_2A91BB1D  // UpdateManagerIF_ExtractPackageTophalf
// vsh_2B58A92C  // StorageManagerIF_AuthenticatePS3Game

extern int vsh_2C563C92(uint32_t offset, uint8_t *value);  // UpdateManagerIF_ReadEEPROM()
#define UpdateManagerIF_ReadEEPROM vsh_2C563C92

// vsh_3065B3C3  // GamesaveStorageManagerIF_0x08
// vsh_3231E012  // VTRMManagerIF_DecryptMaster
// vsh_339A7508  // ? (char const* mount, int ?) -> sys_fs_unmount(char const* mount, int, int 1)
// vsh_33ACD759  // ? (char const* mount, int ?) -> sys_fs_unmount(char const* mount, int, int 0)
// vsh_3473377C  // ?
// vsh_349F1535  // UpdateManagerIF_SetToken
// vsh_37857F3F  // create_vsh_memory_container_by_id (int id)
// vsh_38565603  // GamesaveStorageManagerIF_0x0B
// vsh_38EA9A58  // ?
// vsh_3AE8D802  // UpdateManagerIF_InspectPackageTophalf
// vsh_3B4A1AC4  // AIMManagerIF_GetDeviceID
// vsh_3C186420  // ?
// vsh_3F062337  // AIMManagerIF_GetPSCode
// vsh_40E51FD1  // (void) return 0
// vsh_42FEA6FB  // UpdateManagerIF_GetPackageInfo
// vsh_44F4A936  // ?
// vsh_47FB5A92  // GamesaveStorageManagerIF_0x05
// vsh_489102C6  // sys_ss_random_number_generator_2
// vsh_4B0523C4  // ? io_kb_
// vsh_4CE8E544  // ?
// vsh_4DB8DD87  // ?
// vsh_4F3A5866  // StorageManagerIF_control_bd_drive_HW_ps3_disc_change
// vsh_4FD63C1D  // VTRMManagerIF_Encrypt
// vsh_50C2962C  // VTRMManagerIF_Retrieve
// vsh_535A7222  // GamesaveStorageManagerIF_0x02
// vsh_53E57474  // ? (char const* mount, int ?) -> sys_fs_unmount(char const* mount, int, int 1)
// vsh_55C6366A  // ?
// vsh_5649626F  // ? io_kb_
// vsh_5A351A0A  // GamesaveStorageManagerIF_0x13
// vsh_5C5D84C1  // ?
// vsh_609635AB  // ?
// vsh_612496AA  // sys_fs_get_mount_info(CellFsMountInformation *, unsigned long, unsigned long *) 
// vsh_63F9074F  // ?
// vsh_6B65C37C  // GamesaveStorageManagerIF_0x0C
// vsh_6D840716  // GamesaveStorageManagerIF_0x0F
// vsh_703393A2  // sys_ss_access_control_engine
// vsh_71BBE625  // ?
// vsh_772E1A24  // VTRManagerIF_Store
// vsh_7C5A1812  // ?
// vsh_7CB16AA0  // GamesaveStorageManagerIF_0x12
// vsh_7D73E7CD  // ?
// vsh_80F5B53C  // Read EEPROM: 0x00048C07 (Product Mode flag)
// vsh_8443023A  // ?
// vsh_8A86B77C  // UpdateManagerrIF_AllocateBuffer
// vsh_8A9529BA  // ?
// vsh_8AD55D80  // AIMManagerIF: 0x19002 (Get Device Type)
// vsh_8B0BC111  // VTRManagerIF_Free
// vsh_8BC98CB9  // ?
// vsh_8C4215ED  // GamesaveStorageManagerIF_0x0D
// vsh_8E2AF83C  // Write EEPROM: 0x00048C18 (System Language), 
// vsh_8F29A4A4  // ?
// vsh_8F71C2DF  // ?
// vsh_9121C0C6  // UpdateManagerIF_ReleaseBuffer
// vsh_91C2E500  // ?
// vsh_92A609B2  // Write EEPROM: 0x00048C42 (HDD Copy Mode)
// vsh_93A6A450  // GamesaveStorageManagerIF_0x0E
// vsh_986EC8D3  // StorageManagerIF_control_bd_drive_HW_ps3_disc_auth
// vsh_99A5F404  // StorageManagerIF_control_bd_drive_HW_ps3_hdd_game_auth
//extern int vsh_9AD2E524(u8 *open_psid[8]);  // sys_ss_get_open_psid
// vsh_9AF9918E  // SecureRTCManagerIF_SetTime
// vsh_9B1FEAA3  // VTRManagerIF_Encrypt_With_Portability
// vsh_9C279BCF  // Read EEPROM: 0x00048C18 (System Language)
// vsh_9C4E9B5C  // ? sys_fs_sync...
// vsh_9C6EEE24  // ?
// vsh_9FC0AA39  // ?
// vsh_A10195F4  // UpdateManagerIF_GetStatus
// vsh_A21246C2  // GamesaveStorageManagerIF_0x06
// vsh_A51FFBF9  // (void) return 0
// vsh_A79070D5  // VTRManagerIF_Decrypt
// vsh_ACDDC98E  // (void) return 1
// vsh_AF44BFBF  // return string "CELL_FS_UTILITY:HDD0"
// vsh_B517EC40  // ?
// vsh_B84451B2  // ? io_kb_
// vsh_C0A2CB93  // ?
// vsh_C0E39B97  // ?
// vsh_C13930A7  // GamesaveStorageManagerIF_0x12 (with r6 = 3)
// vsh_C85E47B8  // GamesaveStorageManagerIF_0x12 (with r5 = 0x42, with r6 = 3)
// vsh_CAA3E8E7  // SecureRTCManagerIF_GetTime
// vsh_CBF8BC6E  // GamesaveStorageManagerIF_0x04
// vsh_CC31BBCF  // sys_ss_random_number_generator_1
// vsh_CFD2CA7D  // ? sys_fs_unmount...
// vsh_D42045F9  // return string "CELL_FS_UTILITY:HDD1"
// vsh_D477DB73  // ?
// vsh_D5B38646  // ?
// vsh_D68351F0  // ?
// vsh_DC2A512E  // UpdateManagerIF_GetExtractPackage
// vsh_DC980E61  // sys_ss_get_cache_of_flash_ext_flag
// vsh_DDB635E1  // Write EEPROM: 0x00048C06 (FSELF Control Flag / toggles release mode)
// vsh_E20104BE  // StorageManagerIF_control_bd_drive_HW_ps3_disc_auth_disc_id
// vsh_E35D54E3  // ?
// vsh_E413CD78  // sys_fs_disk_free
// vsh_E44F29F4  // ?
// vsh_E4A68606  // ?
// vsh_E65867F4  // UpdateManagerIF_UpdatePackageTophalf

extern int vsh_E7C34044(int mc_id);	 // vsh_memory_container_by_id()
#define vsh_memory_container_by_id vsh_E7C34044

// vsh_E836E451  // sys_get_cache_of_product_mode
// vsh_E932A8C0  // reboot_show_min_version
// vsh_ED372406  // Export_vsh_update_manager_if_get_token_seed
// vsh_ED9E5178  // ?

extern int vsh_F399CA36(int mc_id);  // destroy_vsh_memory_container_by_id()
#define destroy_vsh_memory_container_by_id vsh_F399CA36

// vsh_F4AD1B8A  // ?
// vsh_FE92A9D8  // GamesaveStorageManagerIF_0x07
// vsh_FF0309A5  // ?
// vsh_FF4A1633  // ?

#endif // __VSH_H__ 

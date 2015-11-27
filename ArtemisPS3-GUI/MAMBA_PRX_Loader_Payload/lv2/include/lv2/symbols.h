/* Keep this file language agnostic. Only preprocessor here. */

#ifndef __FIRMWARE_SYMBOLS_H_S__
#define __FIRMWARE_SYMBOLS_H_S__

#if defined(FIRMWARE_3_55)
#define TOC                                         0x330540
#define open_shared_kernel_object_symbol            0x12244
#define close_kernel_object_handle_symbol           0x11864
#define map_process_memory_symbol                   0x73500 // bytes matched: 0x14
#define process_map_caller_call                     0x40DC // bytes matched: 0x10*
#define alloc_symbol                                0x60B78
#define dealloc_symbol                              0x60FB4
#define copy_to_user_symbol                         0xF6A4
#define copy_from_user_symbol                       0xF8C0
#define copy_to_process_symbol                      0xF75C
#define copy_from_process_symbol                    0xF56C
#define page_allocate_symbol                        0x5C6E8
#define page_free_symbol                            0x5C14C
#define page_export_to_proc_symbol                  0x5C884
#define page_unexport_from_proc_symbol              0x5C040
#define kernel_ea_to_lpar_addr_symbol               0x6C3E0
#define memcpy_symbol                               0x7C3A4
#define memset_symbol                               0x4E4D8
#define memcmp_symbol                               0x4D7E8
#define printf_symbol                               0x29285C
#define printfnull_symbol                           0x2972CC
#define sprintf_symbol                              0x4F900
#define snprintf_symbol                             0x4F86C
#define strcpy_symbol                               0x4E684
#define strncpy_symbol                              0x4E74C
#define strlen_symbol                               0x4E6AC
#define strcat_symbol                               0x4E5B4
#define strcmp_symbol                               0x4E630
#define strncmp_symbol                              0x4E6D8
#define strchr_symbol                               0x4E5EC
#define spin_lock_irqsave_ex_symbol                 0x290940
#define spin_unlock_irqrestore_ex_symbol            0x290914
#define load_process_symbol                         0x43BC
#define ppu_thread_create_symbol                    0x13CFC
#define ppu_thread_exit_symbol                      0x13DB4
#define ppu_thread_join_symbol                      0x13E08
#define ppu_thread_delay_symbol                     0x28518
#define create_user_thread2_symbol                  0x24DC4
#define start_thread_symbol                         0x23A90
#define run_thread_symbol                           0x232C0 /* temp name */
#define register_thread_symbol                      0x28AC00
#define allocate_user_stack_symbol                  0x28B3E8
#define mutex_create_symbol                         0x13470
#define mutex_destroy_symbol                        0x13408
#define mutex_lock_symbol                           0x13400
#define mutex_unlock_symbol                         0x133F8
#define event_port_create_symbol                    0x12EAC
#define event_port_destroy_symbol                   0x13314
#define event_port_connect_symbol                   0x1338C
#define event_port_disconnect_symbol                0x132B8
#define event_port_send_symbol                      0x12EA4
#define event_queue_create_symbol                   0x131B4
#define event_queue_destroy_symbol                  0x1313C
#define event_queue_receive_symbol                  0x12F80
#define cellFsOpen_symbol                           0x2B353C
#define cellFsClose_symbol                          0x2B33A4
#define cellFsRead_symbol                           0x2B34E0
#define cellFsWrite_symbol                          0x2B344C
#define cellFsLseek_symbol                          0x2B2CA0
#define cellFsStat_symbol                           0x2B2D58
#define cellFsUnlink_internal_symbol                0x189774
#define cellFsUtilMount_symbol                      0x2B2ABC
#define cellFsUtilUmount_symbol                     0x2B2A90
#define pathdup_from_user_symbol                    0x18DC68
#define open_path_symbol                            0x2B3274
#define open_fs_object_symbol                       0x172C50
#define close_fs_object_symbol                      0x171E38
#define storage_get_device_info_symbol              0x29BC9C
#define storage_open_symbol                         0x29B1C0
#define storage_close_symbol                        0x29B75C
#define storage_read_symbol                         0x29A6D8
#define storage_send_device_command_symbol          0x29A814
#define storage_map_io_memory_symbol                0x29BB58
#define storage_unmap_io_memory_symbol              0x29BA24
#define decrypt_func_symbol                         0x1C34C
#define lv1_call_99_wrapper_symbol                  0x323C
#define modules_verification_symbol                 0x79D80
#define prx_load_module_symbol                      0x86404
#define prx_start_module_symbol                     0x85140
#define prx_stop_module_symbol                      0x864A8
#define prx_unload_module_symbol                    0x84E74
#define prx_get_module_info_symbol                  0x848FC
#define prx_get_module_list_symbol                  0x8497C
#define extend_kstack_symbol                        0x6C338
#define get_pseudo_random_number_symbol             0x24CD94
#define syscall_table_symbol                        0x346570
#define syscall_call_offset                         0x297DB0
#define read_bdvd0_symbol                           0x19A218
#define read_bdvd1_symbol                           0x19C818
#define read_bdvd2_symbol                           0x1A99C0
#define storage_internal_get_device_object_symbol   0x29A060
#define device_event_port_send_call                 0x2A3FCC
#define fsloop_open_call                            0x2B36D4
#define fsloop_close_call                           0x2B3724
#define fsloop_read_call                            0x2B3764
#define io_rtoc_entry_1                             -0x1d8
#define io_sub_rtoc_entry_1                         -0x7ee0
#define decrypt_rtoc_entry_2                        -0x5B80
#define storage_rtoc_entry_1                        0x1DC0
#define device_event_rtoc_entry_1                   0x2030
#define process_rtoc_entry_1                        -0x77C0
#define patch_func2                                 0x7A7C4
#define patch_func2_offset                          0x2C
#define user_thread_prio_patch              0x20140
#define user_thread_prio_patch2             0x2014C
#elif defined(FIRMWARE_3_55DEX) // Ported by Joonie, Big thanks to @aldostools for his amazing tool, special thanks to @Estwald
#define TOC                                         0x34AC80 //done
#define open_shared_kernel_object_symbol            0x1288C // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x11EAC // bytes matched: 0x3C  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x64464 // bytes matched: 0x14  2C2300007C85237838C000007C641B784D820020
#define dealloc_symbol                              0x648A0 // bytes matched: 0x28*  7C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6FBA10078
#define copy_to_user_symbol                         0xFCEC // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0xFF08 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xFDA4 // bytes matched: 0x60  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xFBB4 // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x5FFD4 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x5FA38 // bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
#define page_export_to_proc_symbol                  0x60170 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x5F92C // bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
#define kernel_ea_to_lpar_addr_symbol               0x6FE4C // bytes matched: 0x80*  7C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378FB810090
#define map_process_memory_symbol                   0x774F8 // bytes matched: 0x14  7D800026F821FEE1FAC100D07CF63B78FB810100
#define memcpy_symbol                               0x8039C // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x51D9C // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x510AC // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x29A890 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x29F314 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x531C4 // bytes matched: 0x14  F821FF817C0802A6F8A100C0F8010090380100C0
#define snprintf_symbol                             0x53130 // bytes matched: 0x20  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define sprintf_symbol                              0x531C4 // bytes matched: 0x14  F821FF817C0802A6F8A100C0F8010090380100C0
#define snprintf_symbol                             0x53130 // bytes matched: 0x20  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x51F48 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x52010 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x51F70 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x51E78 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x51EF4 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x51F9C // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x51EB0 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x298720 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x2986F4 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x43BC // bytes matched: 0x10  7D800026F821FF11FAC100A0FB6100C8
#define ppu_thread_create_symbol                    0x1434C // bytes matched: 0x54  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x14404 // bytes matched: 0x14  F821FF817C0802A6FBE10078F80100907C7F1B78
#define ppu_thread_join_symbol                      0x14458 // bytes matched: 0x24  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x2A378 // bytes matched: 0x44  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x26990 // bytes matched: 0x2C  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x254C8 // bytes matched: 0x58  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x24C8C // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x2913EC // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x291BD4 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13AC0 // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13A58 // bytes matched: 0x14  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_lock_symbol                           0x13A50 // bytes matched: 0x14**  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_unlock_symbol                         0x13A48 // Found by Joonie
#define event_port_create_symbol                    0x134FC // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13964 // bytes matched: 0xC <=Match is too small, please check it  F821FF717C0802A6FBC10080
#define event_port_connect_symbol                   0x139DC // bytes matched: 0x20****  38A00000F80100B0FB810080FBA100887C9C23787C7D1B78E87B000038800000
#define event_port_disconnect_symbol                0x13908 // bytes matched: 0x18****  38800000F80100A0FBA1007838A000007C7D1B78E87C0000
#define event_port_send_symbol                      0x134F4 // bytes matched: 0x2C**  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_queue_create_symbol                   0x13804 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x1378C // bytes matched: 0x1C****  38800000F80100A0FBA1007838A000007C7D1B78E87E0000FBE10088
#define event_queue_receive_symbol                  0x135D0 // bytes matched: 0x6C  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2C8D5C // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x2C8BC4 // Found by Joonie      F821FF617C0802A6FBC10090EBC2
#define cellFsRead_symbol                           0x2C8D00 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2C8C6C // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x2C84C0 // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x2C8578 // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x18FA18 // bytes matched: 0x2C  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2C8270 // bytes matched: 0x1C  F821FED17C0802A6FB2100F83B210080FAA100D8FBC101207C952378
#define cellFsUtilUmount_symbol                     0x2C8244 // bytes matched: 0x20**  7C8023787CA62B787C641B787C05037838E00000E93E80B0EBC1FFF0E8690000
#define pathdup_from_user_symbol                    0x194024 // bytes matched: 0x38  F821FF517C0802A6FB210078FB4100807C9923787C7A1B783880002738600420
#define open_path_symbol                            0x2C8A94 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x178EF4 // bytes matched: 0x20  7D800026F821FF41FBA100A83BA10070FB4100907FA3EB78FBC100B07CBA2B78
#define close_fs_object_symbol                      0x1780DC // bytes matched: 0x40  7C83237838A00000388000004BFF8024E80300E02FA000004D9E002038000000
#define storage_get_device_info_symbol              0x2AE344 // bytes matched: 0x30  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_open_symbol                         0x2AE56C//  OLD * 0x2AC554
#define storage_close_symbol                        0x2ACAE8 // bytes matched: ????  E92222887C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B78
#define storage_read_symbol                         0x2ABFB0 // 0x2ABE80 // OLD *
#define storage_send_device_command_symbol          0x2ABAD0 // bytes matched: 0x80*  E96222887C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FB6100E8
#define storage_map_io_memory_symbol                0x2AE1F0 // bytes matched: 0x34  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_unmap_io_memory_symbol              0x2AE0AC // OLD * 0x2AE8F0
#define storage_internal_get_device_object_symbol   0x2AB588 // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x1DD18 // bytes matched: 0x28  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x323C  // bytes matched: 0x20  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x7DD78 // bytes matched: 0x18  3884FFFA7C0802A6F821FF912B840036F8010080419D00FC
#define prx_load_module_symbol                      0x8AA24 // bytes matched: 0x44  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x89760 // bytes matched: 0x58  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8AAC8 // bytes matched: 0x28  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x89494 // bytes matched: 0x28  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol          0x88E8C // bytes matched: 0x4C  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol          0x88F0C // bytes matched: 0x58  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x6FDA4 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
#define get_pseudo_random_number_symbol             0x25317C // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x361578 // Found by Joonie
#define syscall_call_offset                         0x29FDF8 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1A05D4 // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1A2BD4 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1AFD7C // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x2B7048 // bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378
#define process_map_caller_call                     0x40DC // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2C8EF4 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2C8F44 // bytes matched: 0x4C  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2C8F84 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             -0xb8 // EBC2 FF48 60630002540007FE 2F24FFFF , cex // EBC2 FE28 60630002 540007FE2F24FFFF
#define io_sub_rtoc_entry_1                         -0x7ee0 //UNTOUCHED
#define decrypt_rtoc_entry_2                        -0x5AA0 // 0-A560 = 5AA0 // E862 A560 4BFDA71539200000 4BFFFFCC2C240000
#define storage_rtoc_entry_1                        0x2288 // E962 2288 7C0802A6F821FF51 F80100C0FBE100A8
#define device_event_rtoc_entry_1                   0x25A0 //E962 25A0 78050620 E8CA00387D052B78 E92B0000
#define process_rtoc_entry_1                        -0x7760 //found at 0x1B4FF 88A03FC0800163DE0005E87D0000
#define patch_func2                                 0x7E7BC // F821FF61 7C0802A6FBC10090 7C9E2378E8
#define patch_func2_offset                          0x2C //UNTOUCHED
#define user_thread_prio_patch                      0x21B0C // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21B18 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_21) //Ported by Joonie, Big thanks to @aldostools for his amazing tool and special thanks to Estwald who is the original creater of this mamba
#define TOC                                         0x346390 //done
#define open_shared_kernel_object_symbol            0x123FC // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x11A1C // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x63ED8 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229E98E86900004BFFFEB8
#define dealloc_symbol                              0x64314 // bytes matched: 0x38  E9229E987C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xF85C // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0xFA78 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xF914 // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xF724 // bytes matched: 0x74  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x5FA48 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x5F4AC // bytes matched: 0x60  E9629C687C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x5FBE4 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x5F3A0 // bytes matched: 0x80**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
#define kernel_ea_to_lpar_addr_symbol               0x6F7F0 // bytes matched: 0x80  E922A1487C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x76910 // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A378FB0100E07C781B78
#define memcpy_symbol                               0x7DFD0 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x4E508 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x4D818 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x29E77C // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x2A31EC // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x4F930 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295B0F8C100C8F8610078
#define snprintf_symbol                             0x4F89C // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x4E6B4 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x4E77C // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x4E6DC // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x4E5E4 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x4E660 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x4E708 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x4E61C // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x29C850 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x29C824 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x13EB4 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x13F6C // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480120258003009054000462
#define ppu_thread_join_symbol                      0x13FC0 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x28554 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x24E38 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x23B04 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x23334 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x296A64 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x29724C // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13628 // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x135C0 // bytes matched: 0x5C  F821FF817C0802A6FBE10078F80100907C7F1B78480090012FA300003C008001
#define mutex_lock_symbol                           0x135B8 // bytes matched: 0x64  38A000004800A358F821FF817C0802A6FBE10078F80100907C7F1B7848009001
#define mutex_unlock_symbol                         0x135B0 // bytes matched: 0x6C  48009AA0480096D838A000004800A358F821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x13064 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x134CC // bytes matched: 0x4C  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x13544 // bytes matched: 0x80  F821FF617C0802A6FB610078EB62859038A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13470 // bytes matched: 0x80  F821FF717C0802A6FB810070EB82859038800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x1305C // bytes matched: 0x34  38E0000148017F54F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x1336C // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x132F4 // bytes matched: 0x4C  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x13138 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2C2820 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x2C2688 // F821FF617C0802A6 FBC10090EBC22538
#define cellFsRead_symbol                           0x2C27C4 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2C2730 // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x2C1DB8 // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x2C203C // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x1A96E8 // bytes matched: 0x64  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2C1B98 // bytes matched: 0x1C  F821FED17C0802A6FBA101183BA10080FAE100E8FBC101207C972378
#define cellFsUtilUmount_symbol                     0x2C1B20 // bytes matched: 0x20**  7C8023787CA62B787C641B787C05037838E00000E93E80B0EBC1FFF0E8690000
#define pathdup_from_user_symbol                    0x1B1988 // bytes matched: 0x40  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78EBC2FE887C992378
#define open_path_symbol                            0x2C2558 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x190970 // bytes matched: 0x4C  7D800026F821FF41FBA100A83BA10070FB4100907FA3EB78FBC100B07CBA2B78
#define close_fs_object_symbol                      0x18F943 // 7838A00000 388000004BFD8
#define storage_get_device_info_symbol              0x2A7BBC // bytes matched: 0x34*  7C0802A6F821FF71F80100A0FBE10088F86100C0EBE90000FB810070FBC10080
#define storage_open_symbol                         0x2A70E0 // bytes matched: 0x40*  7C0802A6F821FF11F8010100FBA100D8F8610120EBA90000FB4100C07C9A2378
#define storage_close_symbol                        0x2A767C // bytes matched: 0x38*  7C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B7838800000
#define storage_read_symbol                         0x2A65F8 // bytes matched: 0x80  F821FF017C0802A6FBE100F83BE10070FBA100E8787D00207FE3FB78F8010110
#define storage_send_device_command_symbol          0x2A6734 // bytes matched: 0x80*  7C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FBA100F8FBC10100
#define storage_map_io_memory_symbol                0x2A7A78 // bytes matched: 0x38*  7C0802A6F821FF61F80100B0FBE10098FB810080EBE900007C9C2378FBC10090
#define storage_unmap_io_memory_symbol              0x2A7944 // bytes matched: 0x38*  7C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378FBC10080
#define storage_internal_get_device_object_symbol   0x2A5F80 // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x346D0 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x4FD44 // bytes matched: 0x20  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x59788 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE962994878891788
#define prx_load_module_symbol                      0x88168 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x86E34 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8820C // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x86B68 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x865F0 // bytes matched: 0x4C  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x86670 // bytes matched: 0x58  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x6F748 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
#define get_pseudo_random_number_symbol             0x2579CC // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x35BCA8 // Found by Joonie
#define syscall_call_offset                         0x2A3CD0 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1BBE5C // bytes matched: 0x80  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1BDA88 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1CAC10 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x2AFF38 // bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2C29B8 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2C2A08 // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2C2A48 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             -0x178 //EB C2 FE 88 60 63 00 02  54 00 07 FE 2F 24 FF FF
#define io_sub_rtoc_entry_1                         -0x7EA0 //UNTOUCHED
#define decrypt_rtoc_entry_2                        -0x6680 //E862 9980 4BFFC599 392000004BFFFFCC
#define storage_rtoc_entry_1                        0x1E50 // E962 1E50 7C0802A6F821FF51 F80100C0
#define device_event_rtoc_entry_1                   0x20C0 //E962 20C0 78050620 E8CA00387D052B78 E92B0000
#define process_rtoc_entry_1                        -0x7800 //found at 0x19F0F 88003FC0800163DE0005E87D0000
#define patch_func2                                 0x5A140 // F821FF617C0802A6 FBC100907C9E2378 E862997838810070 FBA10088FBE10098
#define patch_func2_offset                          0x2C //UNTOUCHED
#define user_thread_prio_patch                      0x201B4 //+ bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x201C0 //+ bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_21DEX) // Ported by Joonie, Big thanks to @aldostools for his awesome getsymbol tool :)
#define TOC                                         0x363E80 //done
#define open_shared_kernel_object_symbol            0x12A44 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x12064 // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x677F0 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229F78E86900004BFFFEB8
#define dealloc_symbol                              0x67C2C // bytes matched: 0x38  E9229F787C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xFEA4 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0x100C0 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xFF5C // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xFD6C // bytes matched: 0x74  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x63360 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x62DC4 // bytes matched: 0x60  E9629D487C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x634FC // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x62CB8 // bytes matched: 0x80**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
#define kernel_ea_to_lpar_addr_symbol               0x73288 // bytes matched: 0x80  E922A2287C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x7A934 // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A458FB0100E07C781B78
#define memcpy_symbol                               0x81FF4 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x51DF8 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x51108 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x2A6828 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x2AB2AC // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x53220 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A29690F8C100C8F8610078
#define snprintf_symbol                             0x5318C // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x51FA4 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x5206C // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x51FCC // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x51ED4 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x51F50 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x51FF8 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x51F0C // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x2A46A8 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x2A467C // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x14530 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x145E8 // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480136F18003009054000462
#define ppu_thread_join_symbol                      0x1463C // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x2A3E0 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x26A30 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x25568 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x24D2C // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x29D2C8 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x29DAB0 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13C78 // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13C10 // bytes matched: 0x5C  F821FF817C0802A6FBE10078F80100907C7F1B784800A3A92FA300003C008001
#define mutex_lock_symbol                           0x13C08 // bytes matched: 0x64  38A000004800B700F821FF817C0802A6FBE10078F80100907C7F1B784800A3A9
#define mutex_unlock_symbol                         0x13C00 // bytes matched: 0x6C  4800AE484800AA8038A000004800B700F821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x136B4 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13B1C // bytes matched: 0x4C  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x13B94 // bytes matched: 0x80  F821FF617C0802A6FB610078EB6285A838A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13AC0 // bytes matched: 0x80  F821FF717C0802A6FB810070EB8285A838800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x136AC // bytes matched: 0x34  38E0000148019910F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x139BC // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13944 // bytes matched: 0x4C  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x13788 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2D99E0 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x2D9848
#define cellFsRead_symbol                           0x2D9984 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2D98F0 // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x2D9144 // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x2D91FC // Found by Joonie
#define cellFsUnlink_internal_symbol                0x1AF9BC // bytes matched: 0x64  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2D8EB8 // bytes matched: 0x1C  F821FED17C0802A6FB2100F83B210080FAA100D8FBC101207C952378
#define cellFsUtilUmount_symbol                       0x2D8E40 // bytes matched: 0x20**  7C8023787CA62B787C641B787C05037838E00000E93E80B0EBC1FFF0E8690000
#define pathdup_from_user_symbol                    0x1B7D78 // bytes matched: 0x40  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78EBC2FFB87C992378
#define open_path_symbol                            0x2D9718 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x196C44 // bytes matched: 0x4C  7D800026F821FF41FBA100A83BA10070FB4100907FA3EB78FBC100B07CBA2B78
#define close_fs_object_symbol                      0x195C17 // Found by Joonie
#define storage_get_device_info_symbol              0x2BA4DC // bytes matched: 0x30  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_open_symbol                         0x2BA704 // * OLD 0x2B8594 // bytes matched: 0x80*  7C0802A6F821FF51F80100C0FBA10098FBE100A87C7D1B787C9F23787C641B78
#define storage_close_symbol                        0x2B8B68 // bytes matched: 0x38*  7C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B7838800000
#define storage_read_symbol                         0x2B80E8 // bytes matched: 0x80  F821FF017C0802A6FBE100F83BE10070FB0100C0FB2100C8FB4100D0FB6100D8
#define storage_send_device_command_symbol          0x2B7C08 // bytes matched: 0x80*  7C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FB6100E8FBC10100
#define storage_map_io_memory_symbol                0x2BA388 // bytes matched: 0x34  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_unmap_io_memory_symbol              0x2BA244 // bytes matched: 0x28  2F8500007C0802A6F821FF61FBE10098F80100B07C7F1B7838A0001838000000
#define storage_internal_get_device_object_symbol   0x2B76C0 // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x37F38 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x53634 // bytes matched: 0x20  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x5D0A0 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE9629A2878891788
#define prx_load_module_symbol                      0x8C7B4 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x8B480 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8C858 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x8B1B4 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x89D30 // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x89DB0 // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x731E0 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
#define get_pseudo_random_number_symbol             0x25DDE8 // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x37A1B0 // Found by Joonie
#define syscall_call_offset                         0x2ABD90 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1C224C // bytes matched: 0x80  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1C3E78 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1D1000 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x2C44E8 // bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2D9B78 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2D9BC8 // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2D9C08 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             -0x48 // EBC2FFB860630002 540007FE2F24FFFF
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x16CBCB 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x65A0 //found at 0x5D5C7 9A604BFFC599392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x2328 //found at 0x2B794B 23287C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x26B0 //found at 0x2C44D3 26B078050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x77A0 //found at 0x1B907 88603FC0800163DE0005E87D0000
#define patch_func2                                 0x5DA58  // Found by Joonie //UNTOUCHED
#define patch_func2_offset                          0x2C //UNTOUCHED //UNTOUCHED //UNTOUCHED //UNTOUCHED
#define user_thread_prio_patch                      0x21BAC //+ <Not found in TOC> bytes matched: 0x30  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21BB8 //+ <Not found in TOC> bytes matched: 0x24  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_30)
#define TOC                     0x348200
#define open_shared_kernel_object_symbol            0x123F8
#define close_kernel_object_handle_symbol           0x11A18
#define alloc_symbol                                0x64028
#define dealloc_symbol                              0x64464
#define copy_to_user_symbol                         0xF858
#define copy_from_user_symbol                       0xFA74
#define copy_to_process_symbol                      0xF910
#define copy_from_process_symbol                    0xF720
#define page_allocate_symbol                        0x5FB98
#define page_free_symbol                            0x5F5FC
#define page_export_to_proc_symbol                  0x5FD34
#define page_unexport_from_proc_symbol              0x5F4F0
#define map_process_memory_symbol                   0x76A3C // bytes matched: 0x14  7D800026F821FEE1FAC100D07CF63B78FB810100
#define kernel_ea_to_lpar_addr_symbol               0x6F91C
#define memcpy_symbol                               0x7E0FC
#define memset_symbol                               0x4E544
#define memcmp_symbol                               0x4D854
#define printf_symbol                               0x29FEEC
#define printfnull_symbol                           0x2A495C
#define sprintf_symbol                              0x4F96C
#define snprintf_symbol                             0x4F8D8
#define strcpy_symbol                               0x4E6F0
#define strncpy_symbol                              0x4E7B8
#define strlen_symbol                               0x4E718
#define strcat_symbol                               0x4E620
#define strcmp_symbol                               0x4E69C
#define strncmp_symbol                              0x4E744
#define strchr_symbol                               0x4E658
#define spin_lock_irqsave_ex_symbol                 0x29DFC0
#define spin_unlock_irqrestore_ex_symbol            0x29DF94
#define load_process_symbol                         0x5004
#define ppu_thread_create_symbol                    0x13EB0
#define ppu_thread_exit_symbol                      0x13F68
#define ppu_thread_join_symbol                      0x13FBC
#define ppu_thread_delay_symbol                     0x28550
#define create_user_thread2_symbol                  0x24E34
#define start_thread_symbol                         0x23B00
#define run_thread_symbol                           0x23330 /* temp name */
#define register_thread_symbol                      0x2981D4
#define allocate_user_stack_symbol                  0x2989BC
#define mutex_create_symbol                         0x13624
#define mutex_destroy_symbol                        0x135BC
#define mutex_lock_symbol                           0x135B4
#define mutex_unlock_symbol                         0x135AC
#define event_port_create_symbol                    0x13060
#define event_port_destroy_symbol                   0x134C8
#define event_port_connect_symbol                   0x13540
#define event_port_disconnect_symbol                0x1346C
#define event_port_send_symbol                      0x13058
#define event_queue_create_symbol                   0x13368
#define event_queue_destroy_symbol                  0x132F0
#define event_queue_receive_symbol                  0x13134
#define cellFsOpen_symbol                           0x2C3F9C
#define cellFsClose_symbol                          0x2C3E04
#define cellFsRead_symbol                           0x2C3F40
#define cellFsWrite_symbol                          0x2C3EAC
#define cellFsLseek_symbol                          0x2C3534
#define cellFsStat_symbol                           0x2C37B8
#define cellFsUnlink_internal_symbol                0x1AA184
#define cellFsUtilMount_symbol                      0x2C3314
#define cellFsUtilUmount_symbol                     0x2C32E8
#define pathdup_from_user_symbol                    0x1B1DC4
#define open_path_symbol                            0x2C3CD4
#define open_fs_object_symbol                       0x1913E8
#define close_fs_object_symbol                      0x1903B8
#define storage_get_device_info_symbol              0x2A932C
#define storage_open_symbol                         0x2A8850
#define storage_close_symbol                        0x2A8DEC
#define storage_read_symbol                         0x2A7D68
#define storage_send_device_command_symbol          0x2A7EA4
#define storage_map_io_memory_symbol                0x2A91E8
#define storage_unmap_io_memory_symbol              0x2A90B4
#define decrypt_func_symbol                         0x3470C
#define lv1_call_99_wrapper_symbol                  0x4FD80
#define modules_verification_symbol                 0x598D8
#define prx_load_module_symbol                      0x88294
#define prx_start_module_symbol                     0x86F60
#define prx_stop_module_symbol                      0x88338
#define prx_unload_module_symbol                    0x86C94
#define prx_get_module_info_symbol                  0x8671C
#define prx_get_module_list_symbol                  0x8679C
#define extend_kstack_symbol                        0x6F874
#define get_pseudo_random_number_symbol             0x2591C8
#define syscall_table_symbol                        0x35DBE0
#define syscall_call_offset                         0x2A5440
#define read_bdvd0_symbol                           0x1BCD24
#define read_bdvd1_symbol                           0x1BE950
#define read_bdvd2_symbol                           0x1CBB08
#define storage_internal_get_device_object_symbol   0x2A76F0
#define device_event_port_send_call                 0x2B16A8
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2C4134
#define fsloop_close_call                           0x2C4184
#define fsloop_read_call                            0x2C41C4
#define io_rtoc_entry_1                             -0x178
#define io_sub_rtoc_entry_1                         -0x7EA0
#define decrypt_rtoc_entry_2                        -0x6680
#define storage_rtoc_entry_1                        0x1E40
#define device_event_rtoc_entry_1                   0x20B0
#define process_rtoc_entry_1                        -0x7800
#define patch_func2                                 0x5A290
#define patch_func2_offset                          0x2C
#define user_thread_prio_patch                      0x201B0
#define user_thread_prio_patch2                     0x201BC
#elif defined(FIRMWARE_4_30DEX) //Ported by Joonie @ Big Thanks to @aldostools for his awesome Getsymbol Tool :)
#define TOC                                         0x365CA0 //done
#define open_shared_kernel_object_symbol            0x12A40 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x12060 // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x67940 // bytes matched: 0x14  2C2300007C85237838C000007C641B784D820020
#define dealloc_symbol                              0x67D7C // bytes matched: 0x28*  7C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6FBA10078
#define copy_to_user_symbol                         0xFEA0 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0x100BC // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xFF58 // bytes matched: 0x60  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xFD68 // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x634B0 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x62F14 // bytes matched: 0x80*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
#define page_export_to_proc_symbol                  0x6364C // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x62E08 // bytes matched: 0x28  E8630030480113142BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol               0x733B4 // bytes matched: 0x80*  7C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378FB810090
#define map_process_memory_symbol                   0x7AA60 // bytes matched: 0x14  7D800026F821FEE1FAC100D07CF63B78FB810100
#define memcpy_symbol                               0x82120 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x51E34 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x51144 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x2A7F50 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x2AC9D4 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x5325C // bytes matched: 0x14  F821FF817C0802A6F8A100C0F8010090380100C0
#define snprintf_symbol                             0x531C8 // bytes matched: 0x20  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x51FE0 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x520A8 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x52008 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x51F10 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x51F8C // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x52034 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x51F48 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x2A5DD0 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x2A5DA4 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x1452C // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x145E4 // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480136F18003009054000462
#define ppu_thread_join_symbol                      0x14638 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x2A3DC // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x26A2C // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x25564 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x24D28 // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x29EA38 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x29F220 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13C74 // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13C0C // bytes matched: 0x5C  F821FF817C0802A6FBE10078F80100907C7F1B784800A3A92FA300003C008001
#define mutex_lock_symbol                           0x13C04 // bytes matched: 0x64  38A000004800B700F821FF817C0802A6FBE10078F80100907C7F1B784800A3A9
#define mutex_unlock_symbol                         0x13BFC // bytes matched: 0x6C  4800AE484800AA8038A000004800B700F821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x136B0 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13B18 // bytes matched: 0x4C  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x13B90 // bytes matched: 0x80  F821FF617C0802A6FB610078EB6285A838A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13ABC // bytes matched: 0x80  F821FF717C0802A6FB810070EB8285A838800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x136A8 // bytes matched: 0x34  38E0000148019910F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x139B8 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13940 // bytes matched: 0x4C  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x13784 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2DB114 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x2DAF7C // Found by Joonie
#define cellFsRead_symbol                           0x2DB0B8 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2DB024 // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x2DA878 // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x2DA930 // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x1B0458 // bytes matched: 0x2C  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2DA5EC // bytes matched: 0x1C  F821FED17C0802A6FB2100F83B210080FAA100D8FBC101207C952378
#define cellFsUtilUmount_symbol                     0x2DA574 // 0x2DA5C0 // *OLD* Found by Joonie
#define pathdup_from_user_symbol                    0x1B81B4 // bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol                            0x2DAE4C // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x1976BC // bytes matched: 0x20  7D800026F821FF41FBA100A83BA10070FB4100907FA3EB78FBC100B07CBA2B78
#define close_fs_object_symbol                      0x19668C // Fixed
#define storage_get_device_info_symbol              0x2BBC04 //Found by Joonie
#define storage_open_symbol                         0x2BBE2C //  *OLD 0x2BA06C  Matched with 4.41 DEX
#define storage_close_symbol                        0x2BA290 // bytes matched: 0x38*  7C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B7838800000
#define storage_read_symbol                         0x2B9810 // bytes matched: 0x58  F821FF017C0802A6FB8100E03B810070FBE100F8787F00207F83E378FAE100B8
#define storage_send_device_command_symbol          0x2B9330 // bytes matched: 0x80*  7C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FB6100E8FBC10100
#define storage_map_io_memory_symbol                0x2BBAB0 // bytes matched: 0x34  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_unmap_io_memory_symbol              0x2BB96C // 0x2BC1B0 //*OLD *0x2BC1B0// Matched with 4.41/4.46 DEX
#define storage_internal_get_device_object_symbol   0x2B8DE8 // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x37F74 // bytes matched: 0x28  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x53670 // bytes matched: 0x20  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x5D1F0 // bytes matched: 0x18  3884FFFA7C0802A6F821FF912B840036F8010080419D00FC
#define prx_load_module_symbol                      0x8C8E0 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x8B5AC // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8C984 // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x8B2E0 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x8ACD8 // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x8AD58 // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x7330C // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
#define get_pseudo_random_number_symbol             0x25F5E4 // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x37C068 //done
#define syscall_call_offset                         0x2AD4B8 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1C3114 // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1C4D40 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1D1EF8 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x2C5C10 // bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2DB2AC // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2DB2FC // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2DB33C // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             -0x48 //found at 0x1B535F FFB8E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x16CD8F 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x65A0 //found at 0x5D717 9A604BFFC599392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x2318 //found at 0x2B9073 23187C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x26A0 //found at 0x2C5BFB 26A078050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x77A0 //found at 0x1B903 88603FC0800163DE0005E87D0000
#define patch_func2                                 0x5DBA8 // bytes matched: 0x10  F821FF617C0802A6FBC100907C9E2378
#define patch_func2_offset                          0x2C // bytes matched: 0x80  0000000000000000000000000000000000000000000000000000000000000000
#define user_thread_prio_patch                      0x21BA8 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21BB4 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_31) //Ported by Joonie, Big thanks to aldostools for his awesome getsymbol tool :)
#define TOC                                         0x348210 //done
#define open_shared_kernel_object_symbol            0x123FC // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x11A1C // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x6402C // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229E98E86900004BFFFEB8
#define dealloc_symbol                              0x64468 // bytes matched: 0x80  E9229E987C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xF85C // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0xFA78 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xF914 // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xF724 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x5FB9C // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x5F600 // bytes matched: 0x80  E9629C687C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x5FD38 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x5F4F4 // bytes matched: 0x80  E8630030480110542BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol               0x6F920 // bytes matched: 0x80  E922A1487C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x76A40 // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A378FB0100E07C781B78
#define memcpy_symbol                               0x7E100 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x4E548 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x4D858 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x29FEF8 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x2A4968 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x4F970 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295B0F8C100C8F8610078
#define snprintf_symbol                             0x4F8DC // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x4E6F4 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x4E7BC // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x4E71C // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x4E624 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x4E6A0 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x4E748 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x4E65C // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x29DFCC // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x29DFA0 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x13EB4 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x13F6C // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480120258003009054000462
#define ppu_thread_join_symbol                      0x13FC0 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x28554 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x24E38 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x23B04 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x23334 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x2981E0 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x2989C8 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13628 // bytes matched: 0x80  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x135C0 // bytes matched: 0x80  F821FF817C0802A6FBE10078F80100907C7F1B78480090012FA300003C008001
#define mutex_lock_symbol                           0x135B8 // bytes matched: 0x80  38A000004800A358F821FF817C0802A6FBE10078F80100907C7F1B7848009001
#define mutex_unlock_symbol                         0x135B0 // bytes matched: 0x80  48009AA0480096D838A000004800A358F821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x13064 // bytes matched: 0x80  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x134CC // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x13544 // bytes matched: 0x80  F821FF617C0802A6FB610078EB62859038A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13470 // bytes matched: 0x80  F821FF717C0802A6FB810070EB82859038800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x1305C // bytes matched: 0x80  38E0000148017F54F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x1336C // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x132F4 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x13138 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2C3FA8 // bytes matched: 0x54  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78EBC22530
#define cellFsClose_symbol                          0x2C3E10 // bytes matched: 0x1C  F821FF617C0802A6FBC10090EBC22530FBA10088F80100B07C7D1B78
#define cellFsRead_symbol                           0x2C3F4C // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2C3EB8 // bytes matched: 0x34  F821FF517C0802A6FBC100A0EBC22530FB410080FB6100887CDA33787CBB2B78
#define cellFsLseek_symbol                          0x2C3540 // bytes matched: 0x34  F821FF517C0802A6FBC100A0EBC22530FB410080FB6100887CDA33787C9B2378
#define cellFsStat_symbol                           0x2C37C4 // bytes matched: 0x38  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78EBC225307C9B2378
#define cellFsUnlink_internal_symbol                0x1AA18C // bytes matched: 0x80  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2C3320 // bytes matched: 0x70  F821FED17C0802A6FBA101183BA10080FAE100E8FBC101207C972378EBC22530
#define cellFsUtilUmount_symbol                     0x2C4C2C // Found by Joonie
#define pathdup_from_user_symbol                    0x1B1DCC // bytes matched: 0x40  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78EBC2FE887C992378
#define open_path_symbol                            0x2C3CE0 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x1913F0 // bytes matched: 0x80  7D800026F821FF41FBA100A83BA10070FB4100907FA3EB78FBC100B07CBA2B78
#define close_fs_object_symbol                      0x1903C0 // bytes matched: 0x80  7C83237838A00000388000004BFD878CE80300F82FA000004D9E002038000000
#define storage_get_device_info_symbol              0x2A9338 // bytes matched: 0x38  E9221E407C0802A6F821FF71F80100A0FBE10088F86100C0EBE90000FB810070
#define storage_open_symbol                         0x2A885C // bytes matched: 0x44  E9221E407C0802A6F821FF11F8010100FBA100D8F8610120EBA90000FB4100C0
#define storage_close_symbol                        0x2A8DF8 // bytes matched: 0x3C  E9221E407C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B78
#define storage_read_symbol                         0x2A7D74 // bytes matched: 0x80  F821FF017C0802A6FBE100F83BE10070FBA100E8787D00207FE3FB78F8010110
#define storage_send_device_command_symbol          0x2A7EB0 // bytes matched: 0x80  E9621E407C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FBA100F8
#define storage_map_io_memory_symbol                0x2A91F4 // bytes matched: 0x3C  E9221E407C0802A6F821FF61F80100B0FBE10098FB810080EBE900007C9C2378
#define storage_unmap_io_memory_symbol              0x2A90C0 // bytes matched: 0x3C  E9221E407C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378
#define storage_internal_get_device_object_symbol   0x2A76FC // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x34710 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x4FD84 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x598DC // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE962994878891788
#define prx_load_module_symbol                      0x88298 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x86F64 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8833C // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x86C98 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x86720 // bytes matched: 0x4C  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x867A0 // bytes matched: 0x58  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x6F878 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB6715E922A108
#define get_pseudo_random_number_symbol             0x2591D0 // bytes matched: 0x48  7C601B78E86204507C8523787C04037848000404480001E4F821FF717C0802A6
#define syscall_table_symbol                        0x35DBE0 // Found by Joonie the same as CEX 4.30
#define syscall_call_offset                         0x2A544C // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1BCD2C // bytes matched: 0x80  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1BE958 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1CBB10 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x2B16B4 // bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2C4140 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2C4190 // bytes matched: 0x80  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2C41D0 // bytes matched: 0x60  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             -0x178 //found at 0x1AEF77 FE88E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x166AC3 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x6680 //found at 0x59E03 99804BFFC599392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x1E40 //found at 0x2A77CB 1E407C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x20B0 //found at 0x2B169F 20B078050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x7800 //found at 0x19F0F 88003FC0800163DE0005E87D0000
#define patch_func2                                 0x5A294 //Found by Joonie
#define patch_func2_offset                          0x2C //UNTOUCHED
#define user_thread_prio_patch                      0x201B4 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x201C0 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_40) // Ported by Joonie Big thanks to @Aldostools for his amazing getsymbol tool, special thanks to @Estwald who is the original creater of this payload
#define TOC                                         0x3487D0 //done
#define open_shared_kernel_object_symbol            0x12470 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x11A90 // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x62F74 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229E90E86900004BFFFEB8
#define dealloc_symbol                              0x633B0 // bytes matched: 0x80  E9229E907C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xF858 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0xFA74 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xF910 // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xF720 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x5EAE4 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x5E548 // bytes matched: 0x80  E9629C607C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x5EC80 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x5E43C // bytes matched: 0x80  E8630030480110542BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol               0x6E868 // bytes matched: 0x80  E922A1407C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x75988 // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A370FB0100E07C781B78
#define memcpy_symbol                               0x7D048 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x4D490 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x4C7A0 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x2A02D4 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x2A4D44 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x4E8B8 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
#define snprintf_symbol                             0x4E824 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x4D63C // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x4D704 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x4D664 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x4D56C // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x4D5E8 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x4D690 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x4D5A4 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x29D3D4 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x29D3A8 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x13F28 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x13FE0 // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480120258003009054000462
#define ppu_thread_join_symbol                      0x14034 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x285C8 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x24EAC // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x23B78 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x233A8 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x2975E4 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x297DCC // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x1369C // bytes matched: 0x80  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13634 // bytes matched: 0x80  F821FF817C0802A6FBE10078F80100907C7F1B78480090012FA300003C008001
#define mutex_lock_symbol                           0x1362C // bytes matched: 0x80  38A000004800A358F821FF817C0802A6FBE10078F80100907C7F1B7848009001
#define mutex_unlock_symbol                         0x13624 // bytes matched: 0x80  48009AA0480096D838A000004800A358F821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x130D8 // bytes matched: 0x80  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13540 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x135B8 // bytes matched: 0x80  F821FF617C0802A6FB610078EB62859038A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x134E4 // bytes matched: 0x80  F821FF717C0802A6FB810070EB82859038800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x130D0 // bytes matched: 0x80  38E0000148017F54F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x133E0 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13368 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x131AC // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2C454C // bytes matched: 0x54  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78EBC22588
#define cellFsClose_symbol                          0x2C43B4 // bytes matched: 0x1C  F821FF617C0802A6FBC10090EBC22588FBA10088F80100B07C7D1B78
#define cellFsRead_symbol                           0x2C44F0 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2C445C // bytes matched: 0x34  F821FF517C0802A6FBC100A0EBC22588FB410080FB6100887CDA33787CBB2B78
#define cellFsLseek_symbol                          0x2C3AE4 // bytes matched: 0x34  F821FF517C0802A6FBC100A0EBC22588FB410080FB6100887CDA33787C9B2378
#define cellFsStat_symbol                           0x2C3D68 // bytes matched: 0x38  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78EBC225887C9B2378
#define cellFsUnlink_internal_symbol                0x1AAD08 // bytes matched: 0x64  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2C38C4 // bytes matched: 0x70  F821FED17C0802A6FBA101183BA10080FAE100E8FBC101207C972378EBC22588
#define cellFsUtilUmount_symbol                     0x2C384C // bytes matched: 0x28  FBC1FFF0EBC225887C8023787CA62B787C641B787C05037838E00000E93E80B0
#define pathdup_from_user_symbol                    0x1B0D98 // bytes matched: 0x40  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78EBC2FEB07C992378
#define open_path_symbol                            0x2EA518 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x1903A0 // bytes matched: 0x80  7D800026F821FF41FBA100A83BA10070FB4100907FA3EB78FBC100B07CBA2B78
#define close_fs_object_symbol                      0x18F370 // bytes matched: 0x18****  E80300F82FA000004D9E002038000000E88300F8F80300F8
#define storage_get_device_info_symbol              0x2A9724 // bytes matched: 0x38  E9221E987C0802A6F821FF71F80100A0FBE10088F86100C0EBE90000FB810070
#define storage_open_symbol                         0x2A9134 // bytes matched: 0x44  E9221E987C0802A6F821FF11F8010100FBA100D8F8610120EBA90000FB4100C0
#define storage_close_symbol                        0x2A8F24 // bytes matched: 0x3C  E9221E987C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B78
#define storage_read_symbol                         0x2A8494 // bytes matched: 0x80  F821FF017C0802A6FBE100F83BE10070FBA100E8787D00207FE3FB78F8010110
#define storage_send_device_command_symbol          0x2A8020 // bytes matched: 0x80  E9621E987C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FBA100F8
#define storage_map_io_memory_symbol                0x2A95E0 // bytes matched: 0x3C  E9221E987C0802A6F821FF61F80100B0FBE10098FB810080EBE900007C9C2378
#define storage_unmap_io_memory_symbol              0x2A94AC // bytes matched: 0x3C  E9221E987C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378
#define storage_internal_get_device_object_symbol   0x2A7AD8 // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x34794 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x4ECCC // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x58824 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE962994078891788
#define prx_load_module_symbol                      0x87230 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x85EFC // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x872D4 // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x85C30 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x856B8 // bytes matched: 0x4C  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x85738 // bytes matched: 0x58  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x6E7C0 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB7841E922A100
#define get_pseudo_random_number_symbol             0x258278 // bytes matched: 0x48  7C601B78E86204787C8523787C04037848000404480001E4F821FF717C0802A6
#define syscall_table_symbol                        0x35E260 // 4.40/4.41 The same.
#define syscall_call_offset                         0x2A5828 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1BBD08 // bytes matched: 0x80  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1BD934 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1CAAEC // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x2B1C58 // bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2C46E4 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2C4734 // bytes matched: 0x80  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2C4774 // bytes matched: 0x60  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             -0x150 //4.40/4.41/4.46 //EBC2 FEB0 E97E8038 EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //4.40/4.41/4.46 //E93E8160 E97E8168EB9E8140 EBBE8170
#define decrypt_rtoc_entry_2                        -0x6688 //4.40/4.41/4.46 //E862 9978 4BFFC599 392000004BFFFFCC 2C2400007C0802A6
#define storage_rtoc_entry_1                        0x1E98 //4.40/4.41/4.46 //E962 1E98 7C0802A6 F821FF51F80100C0 FBE100A87C9F2378 7C641B78E86B0000
#define device_event_rtoc_entry_1                   0x2108 //4.40/4.41/4.46 //E962 2108 78050620E8CA0038 7D052B78E92B0000
#define process_rtoc_entry_1                        -0x7800 //found at 0x19F83 88003FC0800163DE0005E87D0000
#define patch_func2                                 0x591DC // Found by Joonie
#define patch_func2_offset                          0x2C //The same
#define user_thread_prio_patch                      0x20228 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x20234 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_41) // Ported by Joonie, Big thanks to @aldostools for his awesome getsymbol tool :) and @Estwald for his original port of mamba.
#define TOC                                         0x3487E0 //done
#define open_shared_kernel_object_symbol            0x12474 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x11A94 // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x62F78 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229E90E86900004BFFFEB8
#define dealloc_symbol                              0x633B4 // bytes matched: 0x80  E9229E907C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xF85C // bytes matched: 0x80  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0xFA78 // bytes matched: 0x80  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xF914 // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xF724 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x5EAE8 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x5E54C // bytes matched: 0x80  E9629C607C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x5EC84 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x5E440 // bytes matched: 0x80  E8630030480110542BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol               0x6E86C // bytes matched: 0x80  E922A1407C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x7598C // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A370FB0100E07C781B78
#define memcpy_symbol                               0x7D04C // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x4D494 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x4C7A4 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x2A02E0 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x2A4D50 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x4E8BC // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
#define snprintf_symbol                             0x4E828 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x4D640 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x4D708 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x4D668 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x4D570 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x4D5EC // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x4D694 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x4D5A8 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x29D3E0 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x29D3B4 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x13F2C // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x13FE4 // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480120258003009054000462
#define ppu_thread_join_symbol                      0x14038 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x285CC // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x24EB0 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x23B7C // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x233AC // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x2975F0 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x297DD8 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x136A0 // bytes matched: 0x80  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13638 // bytes matched: 0x80  F821FF817C0802A6FBE10078F80100907C7F1B78480090012FA300003C008001
#define mutex_lock_symbol                           0x13630 // bytes matched: 0x80  38A000004800A358F821FF817C0802A6FBE10078F80100907C7F1B7848009001
#define mutex_unlock_symbol                         0x13628 // bytes matched: 0x80  48009AA0480096D838A000004800A358F821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x130DC // bytes matched: 0x80  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13544 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x135BC // bytes matched: 0x80  F821FF617C0802A6FB610078EB62859038A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x134E8 // bytes matched: 0x80  F821FF717C0802A6FB810070EB82859038800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x130D4 // bytes matched: 0x80  38E0000148017F54F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x133E4 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x1336C // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x131B0 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2C4558 // bytes matched: 0x54  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78EBC22588
#define cellFsClose_symbol                          0x2C43C0 // bytes matched: 0x1C  F821FF617C0802A6FBC10090EBC22588FBA10088F80100B07C7D1B78
#define cellFsRead_symbol                           0x2C44FC // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2C4468 // bytes matched: 0x34  F821FF517C0802A6FBC100A0EBC22588FB410080FB6100887CDA33787CBB2B78
#define cellFsLseek_symbol                          0x2C3AF0 // bytes matched: 0x34  F821FF517C0802A6FBC100A0EBC22588FB410080FB6100887CDA33787C9B2378
#define cellFsStat_symbol                           0x2C3D74 // bytes matched: 0x38  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78EBC225887C9B2378
#define cellFsUnlink_internal_symbol                0x1AAD10 // bytes matched: 0x64  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2C38D0 // bytes matched: 0x70  F821FED17C0802A6FBA101183BA10080FAE100E8FBC101207C972378EBC22588
#define cellFsUtilUmount_symbol                     0x2C3858 // bytes matched: 0x28  FBC1FFF0EBC225887C8023787CA62B787C641B787C05037838E00000E93E80B0
#define pathdup_from_user_symbol                    0x1B0DA0 // bytes matched: 0x40  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78EBC2FEB07C992378
#define open_path_symbol                            0x2C4290 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x1903A8 // bytes matched: 0x80  7D800026F821FF41FBA100A83BA10070FB4100907FA3EB78FBC100B07CBA2B78
#define close_fs_object_symbol                      0x18F378 // bytes matched: 0x18****  E80300F82FA000004D9E002038000000E88300F8F80300F8
#define storage_get_device_info_symbol              0x2A9730 // bytes matched: 0x38  E9221E987C0802A6F821FF71F80100A0FBE10088F86100C0EBE90000FB810070
#define storage_open_symbol                         0x2A9140 // bytes matched: 0x44  E9221E987C0802A6F821FF11F8010100FBA100D8F8610120EBA90000FB4100C0
#define storage_close_symbol                        0x2A8F30 // bytes matched: 0x3C  E9221E987C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B78
#define storage_read_symbol                         0x2A84A0 // bytes matched: 0x80  F821FF017C0802A6FBE100F83BE10070FBA100E8787D00207FE3FB78F8010110
#define storage_send_device_command_symbol          0x2A802C // bytes matched: 0x80  E9621E987C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FBA100F8
#define storage_map_io_memory_symbol                0x2A95EC // bytes matched: 0x3C  E9221E987C0802A6F821FF61F80100B0FBE10098FB810080EBE900007C9C2378
#define storage_unmap_io_memory_symbol              0x2A94B8 // bytes matched: 0x3C  E9221E987C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378
#define storage_internal_get_device_object_symbol   0x2A7AE4 // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x34798 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x4ECD0 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x58828 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE962994078891788
#define prx_load_module_symbol                      0x87234 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x85F00 // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x872D8 // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x85C34 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x856BC // bytes matched: 0x4C  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x8573C // bytes matched: 0x58  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x6E7C4 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB7841E922A100
#define get_pseudo_random_number_symbol             0x258280 // bytes matched: 0x48  7C601B78E86204787C8523787C04037848000404480001E4F821FF717C0802A6
#define syscall_table_symbol                        0x35E260 // Found by Joonie
#define syscall_call_offset                         0x2A5834 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1BBD10 // bytes matched: 0x80  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1BD93C // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1CAAF4 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x2B1C64 // bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378
#define process_map_caller_call                     0x4D24 // bytes matched: 0x80  480144292F8300007C7D1B78419EFF1C807B0000480147E1E80100D0EB010080
#define fsloop_open_call                            0x2C46F0 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2C4740 // bytes matched: 0x80  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2C4780 // bytes matched: 0x60  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             -0x150 // The same as 4.46
#define io_sub_rtoc_entry_1                         -0x7EA0 //The same as 4.46
#define decrypt_rtoc_entry_2                        -0x6688 //The same as 4.46
#define storage_rtoc_entry_1                        0x1E98 //The same as 4.46
#define device_event_rtoc_entry_1                   0x2108 //The same as 4.46
#define process_rtoc_entry_1                        -0x7800 //found at 0x19F87 88003FC0800163DE0005E87D0000
#define patch_func2                                 0x591E0 // bytes matched: 0x80  F821FF617C0802A6FBC100907C9E2378E862997038810070FBA10088FBE10098
#define patch_func2_offset                          0x2C //The same as 4.46
#define user_thread_prio_patch                      0x2022C // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x20238 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_41DEX) //Ported by Joonie, Bit thanks to @aldostools for his amazing getsymbol tool :)
#define TOC                                         0x3665C0 //done
#define open_shared_kernel_object_symbol            0x12ABC // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x120DC // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x66890 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229F70E86900004BFFFEB8
#define dealloc_symbol                              0x66CCC // bytes matched: 0x80  E9229F707C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xFEA4 // bytes matched: 0x80  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0x100C0 // bytes matched: 0x80  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xFF5C // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xFD6C // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x62400 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x61E64 // bytes matched: 0x80  E9629D407C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x6259C // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x61D58 // bytes matched: 0x80  E8630030480113142BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol               0x72304 // bytes matched: 0x80  E922A2207C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x799B0 // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A450FB0100E07C781B78
#define memcpy_symbol                               0x81070 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x50D84 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x50094 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x2A8520 // bytes matched: 0x34****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x2ACFA4 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x521AC // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A29688F8C100C8F8610078
#define snprintf_symbol                             0x52118 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x50F30 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x50FF8 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x50F58 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x50E60 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x50EDC // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x50F84 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x50E98 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x2A522C // Done
#define spin_unlock_irqrestore_ex_symbol            0x2A5200 // Done
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x145A8 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x14660 // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480136F18003009054000462
#define ppu_thread_join_symbol                      0x146B4 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x2A458 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x26AA8 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x255E0 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x24DA4 // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x29DE54 // Done
#define allocate_user_stack_symbol                  0x29E63C // Done
#define mutex_create_symbol                         0x13CF0 // bytes matched: 0x80  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13C88 // bytes matched: 0x80  F821FF817C0802A6FBE10078F80100907C7F1B784800A3A92FA300003C008001
#define mutex_lock_symbol                           0x13C80 // bytes matched: 0x80  38A000004800B700F821FF817C0802A6FBE10078F80100907C7F1B784800A3A9
#define mutex_unlock_symbol                         0x13C78 // bytes matched: 0x80  4800AE484800AA8038A000004800B700F821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x1372C // bytes matched: 0x80  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13B94 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x13C0C // bytes matched: 0x80  F821FF617C0802A6FB610078EB6285A838A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13B38 // bytes matched: 0x80  F821FF717C0802A6FB810070EB8285A838800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x13724 // bytes matched: 0x80  38E0000148019910F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x13A34 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x139BC // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x13800 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2DBA04 // Done
#define cellFsClose_symbol                          0x2DB86C // Done
#define cellFsRead_symbol                           0x2DB9A8 // Done
#define cellFsWrite_symbol                          0x2DB914 // Done
#define cellFsLseek_symbol                          0x2DB168 // Done
#define cellFsStat_symbol                           0x2DB220 // Done
#define cellFsUnlink_internal_symbol                0x1B0FE4 // Done
#define cellFsUtilMount_symbol                      0x2DAEDC // Done
#define cellFsUtilUmount_symbol                     0x2DAEB0 // Found by Joonie "FBC1FFF0 EBC22D307C802378 7CA62B787C641B78 7C05037838E00000 E93E80B0EBC1FFF0 E8690000" 2nd offsets
#define pathdup_from_user_symbol                    0x1B7190 // Done
#define open_path_symbol                            0x2DB73C // Done
#define open_fs_object_symbol                       0x19667C // Done
#define close_fs_object_symbol                      0x19564C // Done
#define storage_get_device_info_symbol              0x2BC338 // Done
#define storage_open_symbol                         0x2BA790 // Done
#define storage_close_symbol                        0x2BAD4C // Done
#define storage_read_symbol                         0x2B9F34 // Done
#define storage_send_device_command_symbol          0x2B9A54 // Done
#define storage_map_io_memory_symbol                0x2BC1E4 // Done
#define storage_unmap_io_memory_symbol              0x2BC8E4 // Done
#define storage_internal_get_device_object_symbol   0x2B950C // Done
#define decrypt_func_symbol                         0x38000 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x525C0 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x5C140 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE9629A2078891788
#define prx_load_module_symbol                      0x8B880 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x8A54C // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8B924 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x8A280 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x89C78 // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x89CF8 // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x7225C // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB5AF1E922A1E0
#define get_pseudo_random_number_symbol             0x25E69C // Done
#define syscall_table_symbol                        0x37C9E8 // Found by Joonie
#define syscall_call_offset                         0x2ADA88 // Done
#define read_bdvd0_symbol                           0x1C2100 // Done
#define read_bdvd1_symbol                           0x1C3D2C // Done
#define read_bdvd2_symbol                           0x1D0EE4 // Done
#define device_event_port_send_call                 0x2C64FC // Done //4BD4D228 F821FF617C0802A6 FBC10090
#define process_map_caller_call                     0x4D24 // bytes matched: 0x80  48015E212F8300007C7D1B78419EFF1C807B0000480161D9E80100D0EB010080
#define fsloop_open_call                            0x2DBB9C // Done
#define fsloop_close_call                           0x2DBBEC // Done
#define fsloop_read_call                            0x2DBC2C // Done
#define io_rtoc_entry_1                             -0x20 //found at 0x1B433B FFE0E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x16BD63 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x65A8 //found at 0x5C667 9A584BFFC599392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x2370 //found at 0x2B9797 23707C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x26F8 //found at 0x2C64E7 26F878050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x77A0 //found at 0x1B97F 88603FC0800163DE0005E87D0000
#define patch_func2                                 0x5CAF8  // Checked //UNTOUCHED
#define patch_func2_offset                          0x2C //UNTOUCHED //UNTOUCHED
#define user_thread_prio_patch                      0x21C24 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21C30 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_46)
#define TOC                                         0x348DF0
#define open_shared_kernel_object_symbol            0x12474
#define close_kernel_object_handle_symbol           0x11A94
#define alloc_symbol                                0x62F78
#define dealloc_symbol                              0x633B4
#define copy_to_user_symbol                         0xF85C
#define copy_from_user_symbol                       0xFA78
#define copy_to_process_symbol                      0xF914
#define copy_from_process_symbol                    0xF724
#define page_allocate_symbol                        0x5EAE8
#define page_free_symbol                            0x5E54C
#define page_export_to_proc_symbol                  0x5EC84
#define page_unexport_from_proc_symbol              0x5E440
#define kernel_ea_to_lpar_addr_symbol               0x6E86C
#define map_process_memory_symbol                   0x7598C
#define memcpy_symbol                               0x7D04C
#define memset_symbol                               0x4D494
#define memcmp_symbol                               0x4C7A4
#define printf_symbol                               0x2A0800
#define printfnull_symbol                           0x2A5270
#define sprintf_symbol                              0x4E8BC
#define snprintf_symbol                             0x4E828
#define strcpy_symbol                               0x4D640
#define strncpy_symbol                              0x4D708
#define strlen_symbol                               0x4D668
#define strcat_symbol                               0x4D570
#define strcmp_symbol                               0x4D5EC
#define strncmp_symbol                              0x4D694
#define strchr_symbol                               0x4D5A8
#define spin_lock_irqsave_ex_symbol                 0x29D900
#define spin_unlock_irqrestore_ex_symbol            0x29D8D4
#define load_process_symbol                         0x5004
#define ppu_thread_create_symbol                    0x13F2C
#define ppu_thread_exit_symbol                      0x13FE4
#define ppu_thread_join_symbol                      0x14038
#define ppu_thread_delay_symbol                     0x285CC
#define create_user_thread2_symbol                  0x24EB0
#define start_thread_symbol                         0x23B7C
#define run_thread_symbol                           0x233AC /* temp name */
#define register_thread_symbol                      0x297B10
#define allocate_user_stack_symbol                  0x2982F8
#define mutex_create_symbol                         0x136A0
#define mutex_destroy_symbol                        0x13638
#define mutex_lock_symbol                           0x13630
#define mutex_unlock_symbol                         0x13628
#define event_port_create_symbol                    0x130DC
#define event_port_destroy_symbol                   0x13544
#define event_port_connect_symbol                   0x135BC
#define event_port_disconnect_symbol                0x134E8
#define event_port_send_symbol                      0x130D4
#define event_queue_create_symbol                   0x133E4
#define event_queue_destroy_symbol                  0x1336C
#define event_queue_receive_symbol                  0x131B0
#define cellFsOpen_symbol                           0x2C4A78
#define cellFsClose_symbol                          0x2C48E0
#define cellFsRead_symbol                           0x2C4A1C
#define cellFsWrite_symbol                          0x2C4988
#define cellFsLseek_symbol                          0x2C4010
#define cellFsStat_symbol                           0x2C4294
#define cellFsUnlink_internal_symbol                0x1AAF70
#define cellFsUtilMount_symbol                      0x2C3DF0
#define cellFsUtilUmount_symbol                     0x2C3DC4
#define pathdup_from_user_symbol                    0x1B1000
#define open_path_symbol                            0x2C47B0
#define open_fs_object_symbol                       0x190420
#define close_fs_object_symbol                      0x18F41C
#define storage_get_device_info_symbol              0x2A9C50
#define storage_open_symbol                         0x2A9660
#define storage_close_symbol                        0x2A9450
#define storage_read_symbol                         0x2A89C0
#define storage_send_device_command_symbol          0x2A854C
#define storage_map_io_memory_symbol                0x2A9B0C
#define storage_unmap_io_memory_symbol              0x2A99D8
#define decrypt_func_symbol                         0x34798
#define lv1_call_99_wrapper_symbol                  0x4ECD0
#define modules_verification_symbol                 0x58828
#define prx_load_module_symbol                      0x87234
#define prx_start_module_symbol                     0x85F00
#define prx_stop_module_symbol                      0x872D8
#define prx_unload_module_symbol                    0x85C34
#define prx_get_module_info_symbol                  0x856BC
#define prx_get_module_list_symbol                  0x8573C
#define extend_kstack_symbol                        0x6E7C4
#define get_pseudo_random_number_symbol             0x2587A0
#define syscall_table_symbol                        0x35E860
#define syscall_call_offset                         0x2A5D54
#define read_bdvd0_symbol                           0x1BBF70
#define read_bdvd1_symbol                           0x1BDB9C
#define read_bdvd2_symbol                           0x1CAD54
#define storage_internal_get_device_object_symbol   0x2A8004
#define device_event_port_send_call                 0x2B2184
#define process_map_caller_call                     0x4D24
#define fsloop_open_call                            0x2C4C10
#define fsloop_close_call                           0x2C4C60
#define fsloop_read_call                            0x2C4CA0
#define io_rtoc_entry_1                             -0x150
#define io_sub_rtoc_entry_1                         -0x7EA0
#define decrypt_rtoc_entry_2                        -0x6688
#define storage_rtoc_entry_1                        0x1E98
#define device_event_rtoc_entry_1                   0x2108
#define process_rtoc_entry_1                        -0x7800
#define patch_func2                                 0x591E0
#define patch_func2_offset                          0x2C
#define user_thread_prio_patch                      0x2022C
#define user_thread_prio_patch2                     0x20238
#elif defined(FIRMWARE_4_46DEX) //Ported by  @Joonie,  @Nathan_r32_69 Bit thanks to  @aldostools for his amazing getsymbol tool :)
#define TOC                                         0x366BD0 // Checked
#define open_shared_kernel_object_symbol            0x12ABC  // Checked
#define close_kernel_object_handle_symbol           0x120DC  // Checked
#define alloc_symbol                                0x66890  // Checked
#define dealloc_symbol                              0x66CCC  // Checked
#define copy_to_user_symbol                         0xFEA4   // Checked
#define copy_from_user_symbol                       0x100C0  // Checked
#define copy_to_process_symbol                      0xFF5C   // Checked
#define copy_from_process_symbol                    0xFD6C   // Checked
#define page_allocate_symbol                        0x62400  // Checked
#define page_free_symbol                            0x61E64  // Checked
#define page_export_to_proc_symbol                  0x6259C  // Checked
#define page_unexport_from_proc_symbol              0x61D58  // Checked
#define kernel_ea_to_lpar_addr_symbol               0x72304  // Checked
#define map_process_memory_symbol                   0x799B0  // Checked
#define memcpy_symbol                               0x81070  // Checked
#define memset_symbol                               0x50D84  // Checked
#define memcmp_symbol                               0x50094  // Checked
#define printf_symbol                               0x2A8A40 // bytes matched: 0x34****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x2AD4C4 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x521AC  // Checked
#define snprintf_symbol                             0x52118  // Checked
#define strcpy_symbol                               0x50F30  // Checked
#define strncpy_symbol                              0x50FF8  // Checked
#define strlen_symbol                               0x50F58  // Checked
#define strcat_symbol                               0x50E60  // Checked
#define strcmp_symbol                               0x50EDC  // Checked
#define strncmp_symbol                              0x50F84  // Checked
#define strchr_symbol                               0x50E98  // Checked
#define spin_lock_irqsave_ex_symbol                 0x2A574C // Checked
#define spin_unlock_irqrestore_ex_symbol            0x2A5720 // Checked
#define load_process_symbol                         0x5004   // Checked
#define ppu_thread_create_symbol                    0x145A8  // Checked
#define ppu_thread_exit_symbol                      0x14660  // Checked
#define ppu_thread_join_symbol                      0x146B4  // Checked
#define ppu_thread_delay_symbol                     0x2A458  // Checked
#define create_user_thread2_symbol                  0x26AA8  // Checked
#define start_thread_symbol                         0x255E0  // Checked
#define run_thread_symbol                           0x24DA4  // Checked
#define register_thread_symbol                      0x29E374 // Checked
#define allocate_user_stack_symbol                  0x29EB5C // Checked
#define mutex_create_symbol                         0x13CF0  // Checked
#define mutex_destroy_symbol                        0x13C88  // Checked
#define mutex_lock_symbol                           0x13C80  // Checked
#define mutex_unlock_symbol                         0x13C78  // Checked
#define event_port_create_symbol                    0x1372C  // Checked
#define event_port_destroy_symbol                   0x13B94  // Fixed [Old: 0x139BC]
#define event_port_connect_symbol                   0x13C0C  // Checked
#define event_port_disconnect_symbol                0x13B38  // Checked
#define event_port_send_symbol                      0x13724  // Checked
#define event_queue_create_symbol                   0x13A34  // Checked
#define event_queue_destroy_symbol                  0x139BC  // Checked
#define event_queue_receive_symbol                  0x13800  // Checked
#define cellFsOpen_symbol                           0x2DBF24 // Checked
#define cellFsClose_symbol                          0x2DBD8C // Checked
#define cellFsRead_symbol                           0x2DBEC8 // Checked
#define cellFsWrite_symbol                          0x2DBE34 // Checked
#define cellFsLseek_symbol                          0x2DB688 // Checked
#define cellFsStat_symbol                           0x2DB740 // Checked
#define cellFsUnlink_internal_symbol                0x1B1244 // Checked
#define cellFsUtilMount_symbol                      0x2DB3FC // Checked
#define cellFsUtilUmount_symbol                     0x2DB3D0 // Fixed [Old: 0x2DB384]
#define pathdup_from_user_symbol                    0x1B73F0 // Checked
#define open_path_symbol                            0x2DBC5C // Checked
#define open_fs_object_symbol                       0x1966F4 // Checked
#define close_fs_object_symbol                      0x1956F0 // Checked
#define storage_get_device_info_symbol              0x2BC858 // Checked
#define storage_open_symbol                         0x2BCA80 // 0x2BACB0 // Fixed [Old: 0x2BCA80]
#define storage_close_symbol                        0x2BB26C // Checked
#define storage_read_symbol                         0x2BA454 // Checked
#define storage_send_device_command_symbol          0x2B9F74 // Checked
#define storage_map_io_memory_symbol                0x2BC704 // Checked
#define storage_unmap_io_memory_symbol              0x2BC5C0 // 0x2BCE04 // Fixed [OLD: 0x2BC5C0]
#define storage_internal_get_device_object_symbol   0x2B9A2C // Checked
#define decrypt_func_symbol                         0x38000 // Checked
#define lv1_call_99_wrapper_symbol                  0x525C0 // Checked
#define modules_verification_symbol                 0x5C140 // Checked
#define prx_load_module_symbol                      0x8B880 // Checked
#define prx_start_module_symbol                     0x8A54C // Checked
#define prx_stop_module_symbol                      0x8B924 // Checked
#define prx_unload_module_symbol                    0x8A280 // Checked
#define prx_get_module_info_symbol                  0x89C78 //
#define prx_get_module_list_symbol                  0x89CF8 //
#define extend_kstack_symbol                        0x7225C  // Checked
#define get_pseudo_random_number_symbol             0x25EBBC // Checked
#define syscall_table_symbol                        0x37CFE8 // Checked
#define syscall_call_offset                         0x2ADFA8 // Checked
#define read_bdvd0_symbol                           0x1C2360 // Checked
#define read_bdvd1_symbol                           0x1C3F8C // Checked
#define read_bdvd2_symbol                           0x1D1144 // Checked
#define device_event_port_send_call                 0x2C6A1C // Checked
#define process_map_caller_call                     0x4D24   // Checked
#define fsloop_open_call                            0x2DC0BC // Checked
#define fsloop_close_call                           0x2DC10C // Checked
#define fsloop_read_call                            0x2DC14C // Checked
#define io_rtoc_entry_1                             -0x20 //Found by Joonie
#define io_sub_rtoc_entry_1                         -0x7EA0 //Found by Joonie
#define decrypt_rtoc_entry_2                        -0x65A8 //Found by Joonie
#define storage_rtoc_entry_1                        0x2370 //Found by Joonie
#define device_event_rtoc_entry_1                   0x26F8 //Found by Joonie
#define process_rtoc_entry_1                        -0x77A0 //found at 0x1B97F 88603FC0800163DE0005E87D0000
#define patch_func2                                 0x5CAF8  // Checked
#define patch_func2_offset                          0x2C //UNTOUCHED
#define user_thread_prio_patch                      0x21C24
#define user_thread_prio_patch2                     0x21C30
#elif defined(FIRMWARE_4_50) //Ported by Joonie, Big thanks to @aldostools for his awesome Getsymbols tool, and also Thanks a lot to @Estwald who is the creator of this Mamba payload!!
#define process_rtoc_entry_1                -0x7800 //
#define TOC                                         0x34B160 //done
#define open_shared_kernel_object_symbol            0x12470 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x11A90 // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x62F74 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229E90E86900004BFFFEB8
#define dealloc_symbol                              0x633B0 // bytes matched: 0x80  E9229E907C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xF858 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0xFA74 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xF910 // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xF720 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x5EAE4 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x5E548 // bytes matched: 0x80  E9629C607C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x5EC80 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x5E43C // bytes matched: 0x80  E8630030480110542BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol               0x6E868 // bytes matched: 0x80  E922A1407C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x75988 // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A370FB0100E07C781B78
#define memcpy_symbol                               0x7D048 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x4D490 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x4C7A0 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x278B08 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x27D578 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x4E8B8 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
#define snprintf_symbol                             0x4E824 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x4D63C // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x4D704 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x4D664 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x4D56C // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x4D5E8 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x4D690 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x4D5A4 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x275C08 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x275BDC // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x13F28 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x13FE0 // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480120258003009054000462
#define ppu_thread_join_symbol                      0x14034 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x285C8 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x24EAC // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x23B78 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x233A8 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x26FE18 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x270600 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x1369C // bytes matched: 0x80  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13634 // bytes matched: 0x80  F821FF817C0802A6FBE10078F80100907C7F1B78480090012FA300003C008001
#define mutex_lock_symbol                           0x1362C // bytes matched: 0x80  38A000004800A358F821FF817C0802A6FBE10078F80100907C7F1B7848009001
#define mutex_unlock_symbol                         0x13624 // bytes matched: 0x80  48009AA0480096D838A000004800A358F821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x130D8 // bytes matched: 0x80  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13540 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x135B8 // bytes matched: 0x80  F821FF617C0802A6FB610078EB62859038A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x134E4 // bytes matched: 0x80  F821FF717C0802A6FB810070EB82859038800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x130D0 // bytes matched: 0x80  38E0000148017F54F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x133E0 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13368 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x131AC // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x29DFE8 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x29DE50 // bytes matched: 0x10  F821FF617C0802A6FBC10090EBC22588
#define cellFsRead_symbol                           0x29DF8C // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x29DEF8 // bytes matched: 0x10  F821FF517C0802A6FBC100A0EBC22588
#define cellFsLseek_symbol                          0x29D580 // bytes matched: 0x10  F821FF517C0802A6FBC100A0EBC22588
#define cellFsStat_symbol                           0x29D804 // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x19BFA4 // bytes matched: 0x2C  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x29D360 // bytes matched: 0x1C  F821FED17C0802A6FBA101183BA10080FAE100E8FBC101207C972378
#define cellFsUtilUmount_symbol                     0x29D2E8 // bytes matched: 0x20**  7C8023787CA62B787C641B787C05037838E00000E93E80B0EBC1FFF0E8690000
#define pathdup_from_user_symbol                    0x1A20DC // bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol                            0x29DD20 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x18A6DC // 7D800026F821FF31 FBC100C0EBC2 found by Joonie
#define close_fs_object_symbol                      0x189618 // bytes matched: 0x18****  E80300F82FA000004D9E002038000000E88300F8F80300F8
#define storage_get_device_info_symbol              0x281F58 // bytes matched: 0x34*  7C0802A6F821FF71F80100A0FBE10088F86100C0EBE90000FB810070FBC10080
#define storage_open_symbol                         0x281968 // bytes matched: 0x40*  7C0802A6F821FF11F8010100FBA100D8F8610120EBA90000FB4100C07C9A2378
#define storage_close_symbol                        0x281758 // bytes matched: 0x38*  7C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B7838800000
#define storage_read_symbol                         0x280CC8 // bytes matched: 0x54  F821FF017C0802A6FBE100F83BE10070FBA100E8787D00207FE3FB78F8010110
#define storage_send_device_command_symbol          0x280854 // bytes matched: 0x80*  7C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FBA100F8FBC10100
#define storage_map_io_memory_symbol                0x281E14 // bytes matched: 0x38*  7C0802A6F821FF61F80100B0FBE10098FB810080EBE900007C9C2378FBC10090
#define storage_unmap_io_memory_symbol              0x281CE0 // bytes matched: 0x38*  7C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378FBC10080
#define storage_internal_get_device_object_symbol   0x28030C // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x34794 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x4ECCC // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x58824 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE962994078891788
#define prx_load_module_symbol                      0x87230 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x85EFC // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x872D4 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x85C30 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x856B8 // bytes matched: 0x4C  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x85738 // bytes matched: 0x58  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x6E7C0 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB7841E922A100
#define get_pseudo_random_number_symbol             0x230930 // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x35F0D0 // Found by Joonie
#define syscall_call_offset                         0x27E05C // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1AD04C // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1AEC78 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1BBE00 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x28A4C4 // bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x29E180 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x29E1D0 // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x29E210 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             -0x1E8 //Found by Joonie //EB C2 FE 18 E9 7E 80 38  EB C1 FF F0 F9 63 00 00
#define io_sub_rtoc_entry_1                         -0x7EA0 //UNTOUCHED
#define decrypt_rtoc_entry_2                        -0x6688 //Found by Joonie //E86299784BFFC599 392000004BFFFFCC 2C2400007C0802A6 //UNTOUCHED
#define storage_rtoc_entry_1                        0x1DC8 //Found by Joonie // E9621DC87C0802A6 F821FF51F80100C0 FBE100A87C9F2378 7C641B78E86B0000
#define device_event_rtoc_entry_1                   0x2038 //Found by Joonie//E9622038 78050620E8CA0038 7D052B78E92B0000
#define process_rtoc_entry_1                        -0x7800 //found at 0x19F83 88003FC0800163DE0005E87D0000
#define patch_func2                                 0x591DC // bytes matched: 0x80  F821FF617C0802A6FBC100907C9E2378E862997038810070FBA10088FBE10098
#define patch_func2_offset                          0x2C //UNTOUCHED
#define user_thread_prio_patch                      0x20228 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x20234 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_50DEX)
#define TOC                                         0x36EC40 //done
#define open_shared_kernel_object_symbol            0x12AB8 //done
#define close_kernel_object_handle_symbol           0x120D8 //done
#define alloc_symbol                                0x66944 //done
#define dealloc_symbol                              0x66D80 //done
#define copy_to_user_symbol                         0xFEA0 //done
#define copy_from_user_symbol                       0x100BC //done
#define copy_to_process_symbol                      0xFF58 //done
#define copy_from_process_symbol                    0xFD68 //done
#define page_allocate_symbol                        0x624B4 //done
#define page_free_symbol                            0x61F18 //done
#define page_export_to_proc_symbol                  0x62650 //done
#define page_unexport_from_proc_symbol              0x61E0C //done
#define kernel_ea_to_lpar_addr_symbol               0x723B8 //done
#define map_process_memory_symbol                   0x79A64 //done
#define memcpy_symbol                               0x81124 //done
#define memset_symbol                               0x50E38 //done
#define memcmp_symbol                               0x50148 //done
#define printf_symbol                               0x280E08 //done
#define printfnull_symbol                           0x28588C //done
#define sprintf_symbol                              0x52260 //done
#define snprintf_symbol                             0x521CC //done
#define strcpy_symbol                               0x50FE4 //done
#define strncpy_symbol                              0x510AC //done
#define strlen_symbol                               0x5100C //done
#define strcat_symbol                               0x50F14 //done
#define strcmp_symbol                               0x50F90 //done
#define strncmp_symbol                              0x51038 //done
#define strchr_symbol                               0x50F4C //done
#define spin_lock_irqsave_ex_symbol                 0x27DB14 //done
#define spin_unlock_irqrestore_ex_symbol            0x27DAE8 //done
#define load_process_symbol                         0x5004 //done
#define ppu_thread_create_symbol                    0x1465C //done
#define ppu_thread_exit_symbol                      0x14714 //done
#define ppu_thread_join_symbol                      0x14768 //done
#define ppu_thread_delay_symbol                     0x2A50C //done
#define create_user_thread2_symbol                  0x26B5C //done
#define start_thread_symbol                         0x25694 //done
#define run_thread_symbol                           0x24E58 /* temp name */ //done
#define register_thread_symbol                      0x27673C //done
#define allocate_user_stack_symbol                  0x276F24 //done
#define mutex_create_symbol                         0x13CEC //done
#define mutex_destroy_symbol                        0x13C84 //done
#define mutex_lock_symbol                           0x13C7C //done
#define mutex_unlock_symbol                         0x13C74 //done
#define event_port_create_symbol                    0x13728 //done
#define event_port_destroy_symbol                   0x13B90 //done
#define event_port_connect_symbol                   0x13C08 //done
#define event_port_disconnect_symbol                0x13B34 //done
#define event_port_send_symbol                      0x13720 //done
#define event_queue_create_symbol                   0x13A30 //done
#define event_queue_destroy_symbol                  0x139B8 //done
#define event_queue_receive_symbol                  0x137FC //done
#define cellFsOpen_symbol                           0x2B84B0 //done
#define cellFsClose_symbol                          0x2B8318 //done
#define cellFsRead_symbol                           0x2B8454 //done
#define cellFsWrite_symbol                          0x2B83C0 //done
#define cellFsLseek_symbol                          0x2B7C14 //done
#define cellFsStat_symbol                           0x2B7CCC //done
#define cellFsUnlink_internal_symbol                0x1A2330 //done
#define cellFsUtilMount_symbol                      0x2B7988 //done
#define cellFsUtilUmount_symbol                     0x2B795C //done
#define pathdup_from_user_symbol                    0x1A858C //done
#define open_path_symbol                            0x2B81E8 //done
#define open_fs_object_symbol                       0x190A68 //done
#define close_fs_object_symbol                      0x18F9A4 //done
#define storage_get_device_info_symbol              0x294E8C //done ???
#define storage_open_symbol                         0x2950B4 //done
#define storage_close_symbol                        0x2938A0 //done
#define storage_read_symbol                         0x29281C //FIXED!!!!!!!!!!!!!!!!!
#define storage_send_device_command_symbol          0x29233C //done
#define storage_map_io_memory_symbol                0x294D38 //done
#define storage_unmap_io_memory_symbol              0x294BF4 //done
#define decrypt_func_symbol                         0x380B4 //done
#define lv1_call_99_wrapper_symbol                  0x52674 //done
#define modules_verification_symbol                 0x5C1F4 //done
#define prx_load_module_symbol                      0x8B934 //done
#define prx_start_module_symbol                     0x8A600 //done
#define prx_stop_module_symbol                      0x8B9D8 //done
#define prx_unload_module_symbol                    0x8A334 //done
#define prx_get_module_info_symbol                  0x89D2C //done
#define prx_get_module_list_symbol                  0x89DAC //done
#define extend_kstack_symbol                        0x72310 //done
#define get_pseudo_random_number_symbol             0x236E0C //done
#define syscall_table_symbol                        0x383658 //done
#define syscall_call_offset                         0x286370 //done??
#define read_bdvd0_symbol                           0x1B34FC //done
#define read_bdvd1_symbol                           0x1B5128 //done
#define read_bdvd2_symbol                           0x1C22B0 //done
#define storage_internal_get_device_object_symbol   0x291DF4 //done
#define device_event_port_send_call                 0x29F088 //done
#define process_map_caller_call                     0x4D24 //done
#define fsloop_open_call                            0x2B8648 //done ???
#define fsloop_close_call                           0x2B8698 //done ???
#define fsloop_read_call                            0x2B86D8 //done ???
#define io_rtoc_entry_1                             -0xB8 //done
#define io_sub_rtoc_entry_1                         -0x7EA0 //done
#define decrypt_rtoc_entry_2                        -0x65A8 //done
#define storage_rtoc_entry_1                        0x22A0 //done
#define device_event_rtoc_entry_1                   0x2628 //done
#define process_rtoc_entry_1                        -0x77A0 //done
#define patch_func2                                 0x5CBAC //done
#define patch_func2_offset                          0x2C
#define user_thread_prio_patch                      0x21CD8 //done
#define user_thread_prio_patch2                     0x21CE4 //done
#elif defined(FIRMWARE_4_53)
#define TOC                                         0x34B2E0 //
#define open_shared_kernel_object_symbol            0x12474 //
#define close_kernel_object_handle_symbol           0x11A94 //
#define alloc_symbol                                0x62F78  //
#define dealloc_symbol                              0x633B4 //
#define copy_to_user_symbol                         0xF85C //
#define copy_from_user_symbol                       0xFA78 //
#define copy_to_process_symbol                      0xF914 //
#define copy_from_process_symbol                    0xF724 //
#define page_allocate_symbol                        0x5EAE8 //
#define page_free_symbol                            0x5E54C //
#define page_export_to_proc_symbol                  0x5EC84 //
#define page_unexport_from_proc_symbol              0x5E440 //
#define kernel_ea_to_lpar_addr_symbol               0x6E86C //
#define map_process_memory_symbol                   0x7598C //
#define memcpy_symbol                               0x7D04C //
#define memset_symbol                               0x4D494 //
#define memcmp_symbol                               0x4C7A4 //
#define printf_symbol                               0x278CE0 //
#define printfnull_symbol                           0x27D750 //
#define sprintf_symbol                              0x4E8BC //
#define snprintf_symbol                             0x4E828 //
#define strcpy_symbol                               0x4D640 //
#define strncpy_symbol                              0x4D708 //
#define strlen_symbol                               0x4D668 //
#define strcat_symbol                               0x4D570 //
#define strcmp_symbol                               0x4D5EC //
#define strncmp_symbol                              0x4D694 //
#define strchr_symbol                               0x4D5A8 //
#define spin_lock_irqsave_ex_symbol                 0x275DE0 //
#define spin_unlock_irqrestore_ex_symbol            0x275DB4 //
#define load_process_symbol                         0x5004 //
#define ppu_thread_create_symbol                    0x13F2C //
#define ppu_thread_exit_symbol                      0x13FE4 //
#define ppu_thread_join_symbol                      0x14038 //
#define ppu_thread_delay_symbol                     0x285CC //
#define create_user_thread2_symbol                  0x24EB0 //
#define start_thread_symbol                         0x23B7C //
#define run_thread_symbol                           0x233AC // /* temp name */
#define register_thread_symbol                      0x26FFF0 //
#define allocate_user_stack_symbol                  0x2707D8 //
#define mutex_create_symbol                         0x136A0 //
#define mutex_destroy_symbol                        0x13638 //
#define mutex_lock_symbol                           0x13630 //
#define mutex_unlock_symbol                         0x13628 //
#define event_port_create_symbol                    0x130DC //
#define event_port_destroy_symbol                   0x13544 //
#define event_port_connect_symbol                   0x135BC //
#define event_port_disconnect_symbol                0x134E8 //
#define event_port_send_symbol                      0x130D4 //
#define event_queue_create_symbol                   0x133E4 //
#define event_queue_destroy_symbol                  0x1336C //
#define event_queue_receive_symbol                  0x131B0 //
#define cellFsOpen_symbol                           0x29E1C0 //
#define cellFsClose_symbol                          0x29E028 //
#define cellFsRead_symbol                           0x29E164 //
#define cellFsWrite_symbol                          0x29E0D0 //
#define cellFsLseek_symbol                          0x29D758 //
#define cellFsStat_symbol                           0x29D9DC //
#define cellFsUnlink_internal_symbol                0x19C14C //FIXED 12/14/13
#define cellFsUtilMount_symbol                      0x29D538 //
#define cellFsUtilUmount_symbol                     0x29D50C //
#define pathdup_from_user_symbol                    0x1A2244 //fixed
#define open_path_symbol                            0x29DEF8 //
#define open_fs_object_symbol                       0x18A6F0 //
#define close_fs_object_symbol                      0x18962C //
#define storage_get_device_info_symbol              0x282130 //
#define storage_open_symbol                         0x281B40 //
#define storage_close_symbol                        0x281930 //
#define storage_read_symbol                         0x280EA0 //
#define storage_send_device_command_symbol          0x280A2C //
#define storage_map_io_memory_symbol                0x281FEC //
#define storage_unmap_io_memory_symbol              0x281EB8 //
#define decrypt_func_symbol                         0x34798 //
#define lv1_call_99_wrapper_symbol                  0x4ECD0 //
#define modules_verification_symbol                 0x58828 //
#define prx_load_module_symbol                      0x87234 //
#define prx_start_module_symbol                     0x85F00 //
#define prx_stop_module_symbol                      0x872D8 //
#define prx_unload_module_symbol                    0x85C34 //
#define prx_get_module_info_symbol                  0x856BC //
#define prx_get_module_list_symbol                  0x8573C //
#define extend_kstack_symbol                        0x6E7C4 //
#define get_pseudo_random_number_symbol             0x230B04 //
#define syscall_table_symbol                        0x35F300 //
#define syscall_call_offset                         0x27E234 //
#define read_bdvd0_symbol                           0x1AD1B4 //
#define read_bdvd1_symbol                           0x1AEDE0 //
#define read_bdvd2_symbol                           0x1BBF98 //
#define storage_internal_get_device_object_symbol   0x2804E4 //
#define device_event_port_send_call                 0x28A69C //FIXED 12/12/13
#define process_map_caller_call                     0x4D24 //
#define fsloop_open_call                            0x29E358 //
#define fsloop_close_call                           0x29E3A8 //
#define fsloop_read_call                            0x29E3E8 //
#define io_rtoc_entry_1                             -0x1E8 //1e8
#define io_sub_rtoc_entry_1                         -0x7EA0 //
#define decrypt_rtoc_entry_2                        -0x6688 //
#define storage_rtoc_entry_1                        0x1DC8 //
#define device_event_rtoc_entry_1                   0x2038 //
#define process_rtoc_entry_1                        -0x7800 //
#define patch_func2                                 0x591E0 //
#define patch_func2_offset                          0x2C //
#define user_thread_prio_patch                      0x2022C //
#define user_thread_prio_patch2                     0x20238 //
#elif defined(FIRMWARE_4_53DEX) //Ported by @Joonie, Big Thanks to @aldostools for his awesome GetSymbol Tool :)
#define TOC                                         0x370620 //done
#define open_shared_kernel_object_symbol            0x12ABC // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x120DC // bytes matched: 0x3C  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x66948 // bytes matched: 0x14  2C2300007C85237838C000007C641B784D820020
#define dealloc_symbol                              0x66D84 // bytes matched: 0x28*  7C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6FBA10078
#define copy_to_user_symbol                         0xFEA4 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0x100C0 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xFF5C // bytes matched: 0x60  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xFD6C // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x624B8 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x61F1C // bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
#define page_export_to_proc_symbol                  0x62654 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x61E10 // bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
#define kernel_ea_to_lpar_addr_symbol               0x723BC // bytes matched: 0x80*  7C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378FB810090
#define map_process_memory_symbol                   0x79A68 // bytes matched: 0x14  7D800026F821FEE1FAC100D07CF63B78FB810100
#define memcpy_symbol                               0x81128 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x50E3C // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x5014C // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x280FE0 // bytes matched: 0x60  F821FF517C0802A6FB610088EB621B98FBA100987C7D1B787F63DB78F8E10100
#define printfnull_symbol                           0x285A64 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x52264 // bytes matched: 0x14  F821FF817C0802A6F8A100C0F8010090380100C0
#define snprintf_symbol                             0x521D0 // bytes matched: 0x20  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x50FE8 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x510B0 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x51010 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x50F18 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x50F94 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x5103C // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x50F50 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x27DCEC // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x27DCC0 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x14660 // bytes matched: 0x54  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x14718 // bytes matched: 0x14  F821FF817C0802A6FBE10078F80100907C7F1B78
#define ppu_thread_join_symbol                      0x1476C // bytes matched: 0x24  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x2A510 // bytes matched: 0x44  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x26B60 // bytes matched: 0x2C  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x25698 // bytes matched: 0x58  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x24E5C // bytes matched: 0x24***  F821FF717C0802A6FBC100807C7E1B78FBA100783BA30010FBE100887FA3EB78
#define register_thread_symbol                      0x276914 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x2770FC // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13CF0 // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13C88 // bytes matched: 0x14  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_lock_symbol                           0x13C80 // bytes matched: 0x14**  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_unlock_symbol                         0x13C78 // bytes matched: 0x8   48009AA0480096
#define event_port_create_symbol                    0x1372C // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13B94 // bytes matched: 0x1C****  38800000F80100A0FBA1007838A000007C7D1B78E87E0000FBE10088
#define event_port_connect_symbol                   0x13C0C // bytes matched: 0x20****  38A00000F80100B0FB810080FBA100887C9C23787C7D1B78E87B000038800000
#define event_port_disconnect_symbol                0x13B38 // bytes matched: 0x18****  38800000F80100A0FBA1007838A000007C7D1B78E87C0000
#define event_port_send_symbol                      0x13724 // bytes matched: 0x2C**  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_queue_create_symbol                   0x13A34 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x139BC // bytes matched: 0xF   F821FF717C0802A6FBC10080EBC285 A8 38800000F80100A0FBA1007838A000007C7D1B78E87E0000FBE100884800
#define event_queue_receive_symbol                  0x13800 // bytes matched: 0x6C  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2B8688 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x2B84F0 // bytes matched: 0xD   F821FF617C0802A6FBC10090EBC2
#define cellFsRead_symbol                           0x2B862C // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2B8598 // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x2B7DEC // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x2B7EA4 // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x1A26DC // bytes matched: 0x2C  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2B7B60 // bytes matched: 0x9   F821FED17C0802A6FB 2100F8 3B 21 0080FA A1 00 D8 FBC101207C 95 2378EBC2
#define cellFsUtilUmount_symbol                     0x2B7B34 // bytes matched: 0x28  FBC1FFF0EBC22E107C8023787CA62B787C641B787C05037838E00000E93E80B0EBC1FFF0E86900004B
#define pathdup_from_user_symbol                    0x1A86F4 // bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol                            0x2B83C0 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x190A7C // bytes matched: 0x48****  FB010090FB210098FB4100A0FB6100A8FB8100B0FBE100C8FBA100B87C9A2378
#define close_fs_object_symbol                      0x18F9B8 // bytes matched: 0x18****  E80300F82FA000004D9E002038000000E88300F8F80300F8
#define storage_get_device_info_symbol              0x295064 // Found by Joonie
#define storage_open_symbol                         0x29528C // Found by Joonie
#define storage_close_symbol                        0x293A78 //<< bytes matched: 0x10*  7C0802A6F821FF51F80100C0FBE100A8
#define storage_read_symbol                         0x2929F4 // Found by Joonie
#define storage_send_device_command_symbol          0x292514 // bytes matched: 0x18*  7C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000
#define storage_map_io_memory_symbol                0x294F10 // Found by Joonie
#define storage_unmap_io_memory_symbol              0x294DCC // Found by Joonie
#define storage_internal_get_device_object_symbol   0x291FCC // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x380B8 // bytes matched: 0x28  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x52678 // bytes matched: 0x20  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x5C1F8 // bytes matched: 0x18  3884FFFA7C0802A6F821FF912B840036F8010080419D00FC
#define prx_load_module_symbol                      0x8B938 // bytes matched: 0x44  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x8A604 // bytes matched: 0x58  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8B9DC // bytes matched: 0x28  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x8A338 // bytes matched: 0x28  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x89D30 // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x89DB0 // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x72314 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
#define get_pseudo_random_number_symbol             0x236FE0 // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x385108 //done
#define syscall_call_offset                         0x286548 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1B3664 // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1B5290 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1C2448 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x29F260 // bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2B8820 // bytes matched: 0x24  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2B8870 // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2B88B0 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             -0xB8 //found at 0x1A589F FF48E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x16AC93 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x65A8 //found at 0x5C71F 9A584BFFC599392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x22A0 //found at 0x292257 22A07C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x2628 //found at 0x29F24B 262878050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x77A0 //found at 0x1BA37 88603FC0800163DE0005E87D0000
#define patch_func2                                 0x5CBB0 // bytes matched: 0x10  F821FF617C0802A6FBC100907C9E2378
#define patch_func2_offset                          0x2C // Done by Joonie
#define user_thread_prio_patch                      0x21CDC // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21CE8 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_55)
#define TOC                     0x34E620 //
#define open_shared_kernel_object_symbol            0x12484 //
#define close_kernel_object_handle_symbol           0x11AA4 //CHECKED TILL HERE!!
#define alloc_symbol                                0x643B4 //
#define dealloc_symbol                              0x647F0 //
#define copy_to_user_symbol                         0xF86C //
#define copy_from_user_symbol                       0xFA88 //
#define copy_to_process_symbol                      0xF924 //
#define copy_from_process_symbol                    0xF734 //
#define page_allocate_symbol                        0x5FF24 // 0X143C+
#define page_free_symbol                            0x5F988 //
#define page_export_to_proc_symbol                  0x600C0 //
#define page_unexport_from_proc_symbol              0x5F87C //
#define kernel_ea_to_lpar_addr_symbol               0x6FCA8 //
#define map_process_memory_symbol                   0x76DC8 //
#define memcpy_symbol                               0x7E488 //
#define memset_symbol                               0x4D6D8 // FIXED!!
#define memcmp_symbol                               0x4C9E8 //
#define printf_symbol                               0x27A530 //
#define printfnull_symbol                           0x27EFA0 //
#define sprintf_symbol                              0x4EB00 //
#define snprintf_symbol                             0x4EA6C //
#define strcpy_symbol                               0x4D884 //
#define strncpy_symbol                              0x4D94C //
#define strlen_symbol                               0x4D8AC //
#define strcat_symbol                               0x4D7B4 //
#define strcmp_symbol                               0x4D830 //
#define strncmp_symbol                              0x4D8D8 //
#define strchr_symbol                               0x4D7EC //
#define spin_lock_irqsave_ex_symbol                 0x277630 //
#define spin_unlock_irqrestore_ex_symbol            0x277604 //
#define load_process_symbol                         0x5004 //
#define ppu_thread_create_symbol                    0x13F3C //
#define ppu_thread_exit_symbol                      0x13FF4 //
#define ppu_thread_join_symbol                      0x14048 //
#define ppu_thread_delay_symbol                     0x28810 //
#define create_user_thread2_symbol                  0x250F4 //
#define start_thread_symbol                         0x23DC0 //
#define run_thread_symbol                           0x235F0 // /* temp name */
#define register_thread_symbol                      0x27183C //
#define allocate_user_stack_symbol                  0x272024 //
#define mutex_create_symbol                         0x136B0 //
#define mutex_destroy_symbol                        0x13648 //
#define mutex_lock_symbol                           0x13640 //
#define mutex_unlock_symbol                         0x13638 //
#define event_port_create_symbol                    0x130EC //
#define event_port_destroy_symbol                   0x13554 //
#define event_port_connect_symbol                   0x135CC //
#define event_port_disconnect_symbol                0x134F8 //
#define event_port_send_symbol                      0x130E4 //
#define event_queue_create_symbol                   0x133F4 //
#define event_queue_destroy_symbol                  0x1337C //
#define event_queue_receive_symbol                  0x131C0 //
#define cellFsOpen_symbol                           0x29FA10 //
#define cellFsClose_symbol                          0x29F878 //
#define cellFsRead_symbol                           0x29F9B4 //
#define cellFsWrite_symbol                          0x29F920 //
#define cellFsLseek_symbol                          0x29EFA8 //
#define cellFsStat_symbol                           0x29F22C //
#define cellFsUnlink_internal_symbol                0x19D638 //FIXED UP!+CHECKED TILL HERE!
#define cellFsUtilMount_symbol                      0x29ED88 //
#define cellFsUtilUmount_symbol                     0x29ED5C //
#define pathdup_from_user_symbol                    0x1A3730 //
#define open_path_symbol                            0x29F748 //
#define open_fs_object_symbol                       0x18BB60 //
#define close_fs_object_symbol                      0x18AA9C //
#define storage_get_device_info_symbol              0x283980 //
#define storage_open_symbol                         0x283390 //
#define storage_close_symbol                        0x283180 //
#define storage_read_symbol                         0x2826F0 //
#define storage_send_device_command_symbol          0x28227C //
#define storage_map_io_memory_symbol                0x28383C //
#define storage_unmap_io_memory_symbol              0x283708 //
#define decrypt_func_symbol                         0x349DC //
#define lv1_call_99_wrapper_symbol                  0x4EF14 //
#define modules_verification_symbol                 0x586E8 //SUSPICIOUS! BUT NOW LOOKS LIKE FINE!
#define prx_load_module_symbol                      0x88680 //
#define prx_start_module_symbol                     0x8734C //
#define prx_stop_module_symbol                      0x88724 //
#define prx_unload_module_symbol                    0x87080 //
#define prx_get_module_info_symbol                  0x86B08 //
#define prx_get_module_list_symbol                  0x86B88 //
#define extend_kstack_symbol                        0x6FC00 //
#define get_pseudo_random_number_symbol             0x2321D4 //
#define syscall_table_symbol                        0x362680 //
#define syscall_call_offset                         0x27FA84 //
#define read_bdvd0_symbol                           0x1AE6A0 //FIXED!!
#define read_bdvd1_symbol                           0x1B02CC //
#define read_bdvd2_symbol                           0x1BD454 //CHECKED TILL HERE!!
#define storage_internal_get_device_object_symbol   0x281D34 //CHECKED!!
#define device_event_port_send_call                 0x28BEEC //
#define process_map_caller_call                     0x4D24 //
#define fsloop_open_call                            0x29FBA8 //
#define fsloop_close_call                           0x29FBF8 //
#define fsloop_read_call                            0x29FC38 //CHECKED TILL HERE!
#define io_rtoc_entry_1                             -0x1B8 //
#define io_sub_rtoc_entry_1                         -0x7EA0 //
#define decrypt_rtoc_entry_2                        -0x66A8 //
#define storage_rtoc_entry_1                        0x1E10 //
#define device_event_rtoc_entry_1                   0x2080 //
#define process_rtoc_entry_1                        -0x7800 //
#define patch_func2                                 0x59990 //
#define patch_func2_offset                          0x2C //
#define user_thread_prio_patch                      0x20470
#define user_thread_prio_patch2                     0x2047C
#elif defined(FIRMWARE_4_55DEX)
#define TOC                                         0x3738E0 //done
#define open_shared_kernel_object_symbol            0x12ACC //done
#define close_kernel_object_handle_symbol           0x120EC //done
#define alloc_symbol                                0x67D84 //done
#define dealloc_symbol                              0x681C0 //done
#define copy_to_user_symbol                         0xFEB4 //done
#define copy_from_user_symbol                       0x100D0 //done
#define copy_to_process_symbol                      0xFF6C //done
#define copy_from_process_symbol                    0xFD7C //done
#define page_allocate_symbol                        0x638F4 //done
#define page_free_symbol                            0x63358 //done
#define page_export_to_proc_symbol                  0x63A90 //done
#define page_unexport_from_proc_symbol              0x6324C //done
#define kernel_ea_to_lpar_addr_symbol               0x737F8 //done
#define map_process_memory_symbol                   0x7AEA4 //done
#define memcpy_symbol                               0x82564 //done
#define memset_symbol                               0x51080 //done
#define memcmp_symbol                               0x50390 //done
#define printf_symbol                               0x282838 // bytes matched: 0x34****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x2872BC // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x524A8  //done
#define snprintf_symbol                             0x52414 //done
#define strcpy_symbol                               0x5122C //done
#define strncpy_symbol                              0x512F4 //done
#define strlen_symbol                               0x51254 //done
#define strcat_symbol                               0x5115C //done
#define strcmp_symbol                               0x511D8 //done
#define strncmp_symbol                              0x51280 //done
#define strchr_symbol                               0x51194 //done
#define spin_lock_irqsave_ex_symbol                 0x27F544 //done
#define spin_unlock_irqrestore_ex_symbol            0x27F518 //done
#define load_process_symbol                         0x5004 //done same as 4.50
#define ppu_thread_create_symbol                    0x14670 //done
#define ppu_thread_exit_symbol                      0x14728 //done
#define ppu_thread_join_symbol                      0x1477C //done
#define ppu_thread_delay_symbol                     0x2A754 //done
#define create_user_thread2_symbol                  0x26DA4 //done
#define start_thread_symbol                         0x258DC //done
#define run_thread_symbol                           0x250A0 /* temp name */
#define register_thread_symbol                      0x278160 //done
#define allocate_user_stack_symbol                  0x278948 //done
#define mutex_create_symbol                         0x13D00 //done
#define mutex_destroy_symbol                        0x13C98 //done
#define mutex_lock_symbol                           0x13C90 //done
#define mutex_unlock_symbol                         0x13C88 //done
#define event_port_create_symbol                    0x1373C //done
#define event_port_destroy_symbol                   0x13BA4 //done
#define event_port_connect_symbol                   0x13C1C //done
#define event_port_disconnect_symbol                0x13B48 //done
#define event_port_send_symbol                      0x13734 //done
#define event_queue_create_symbol                   0x13A44 //done
#define event_queue_destroy_symbol                  0x139CC //done
#define event_queue_receive_symbol                  0x13810 //done
#define cellFsOpen_symbol                           0x2B9EDC //done
#define cellFsClose_symbol                          0x2B9D44 //done
#define cellFsRead_symbol                           0x2B9E80 //done
#define cellFsWrite_symbol                          0x2B9DEC //done
#define cellFsLseek_symbol                          0x2B9640 //done
#define cellFsStat_symbol                           0x2B96F8 //done
#define cellFsUnlink_internal_symbol                0x1A3BC8 //done
#define cellFsUtilMount_symbol                      0x2B93B4 //done
#define cellFsUtilUmount_symbol                     0x2B9388 //done
#define pathdup_from_user_symbol                    0x1A9BE0 //done
#define open_path_symbol                            0x2B9C14 //done
#define open_fs_object_symbol                       0x191EEC //done
#define close_fs_object_symbol                      0x190E28 //done
#define storage_get_device_info_symbol              0x2968BC //done
#define storage_open_symbol                         0x296AE4 //done
#define storage_close_symbol                        0x2952D0 //done
#define storage_read_symbol                         0x29424C // FIXED!!!!!!!!!!!!!!!
#define storage_send_device_command_symbol          0x293D6C //done
#define storage_map_io_memory_symbol                0x296768 //done
#define storage_unmap_io_memory_symbol              0x296624 //done
#define storage_internal_get_device_object_symbol   0x293824 //done
#define decrypt_func_symbol                         0x382FC //done
#define lv1_call_99_wrapper_symbol                  0x528BC //done
#define modules_verification_symbol                 0x5C0B8 //done
#define prx_load_module_symbol                      0x8CD84 //done
#define prx_start_module_symbol                     0x8BA50 //done
#define prx_stop_module_symbol                      0x8CE28 //done
#define prx_unload_module_symbol                    0x8B784 //done
#define prx_get_module_info_symbol                  0x8B17C // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x8B1FC // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x73750 //done
#define get_pseudo_random_number_symbol             0x2386B0 //done
#define syscall_table_symbol                        0x388488 //done
#define syscall_call_offset                         0x287DA0 //done
#define read_bdvd0_symbol                           0x1B4B50 //done
#define read_bdvd1_symbol                           0x1B677C //done
#define read_bdvd2_symbol                           0x1C3904 //done
#define device_event_port_send_call                 0x2A0AB8 //done
#define process_map_caller_call                     0x4D24 //done same as 4.50
#define fsloop_open_call                            0x2BA074 //done
#define fsloop_close_call                           0x2BA0C4 //done
#define fsloop_read_call                            0x2BA104 //done
#define io_rtoc_entry_1                             -0x88 //done
#define io_sub_rtoc_entry_1                         -0x7EA0 //done?
#define decrypt_rtoc_entry_2                        -0x65C8 //done
#define storage_rtoc_entry_1                        0x22E8 //done
#define device_event_rtoc_entry_1                   0x2670 //done
#define process_rtoc_entry_1                        -0x77A0 //found at 0x1BC7B 88603FC0800163DE0005E87D0000
#define patch_func2                                 0x5D360 //done
#define patch_func2_offset                          0x2C
#define user_thread_prio_patch                      0x21F20 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21F2C // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_60)
#define TOC                                         0x34F950 //done
#define open_shared_kernel_object_symbol            0x1240C // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x11A2C // bytes matched: 0x3C  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x64798 // bytes matched: 0x14  2C2300007C85237838C000007C641B784D820020
#define dealloc_symbol                              0x64BD4 // bytes matched: 0x28*  7C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6FBA10078
#define copy_to_user_symbol                         0xF868 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0xFA84 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xF920 // bytes matched: 0x60  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xF730 // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x60308 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x5FD6C // bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
#define page_export_to_proc_symbol                  0x604A4 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x5FC60 // bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
#define kernel_ea_to_lpar_addr_symbol               0x700C0 // bytes matched: 0x80*  7C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378FB810090
#define map_process_memory_symbol                   0x771E0 // bytes matched: 0x14  7D800026F821FEE1FAC100D07CF63B78FB810100
#define memcpy_symbol                               0x7E8A0 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x4D668 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x4C978 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x279330 // bytes matched: 0x60  F821FF517C0802A6FB610088EB6219C8FBA100987C7D1B787F63DB78F8E10100
#define printfnull_symbol                           0x27DDA4 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x4EA90 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
#define snprintf_symbol                             0x4E9FC // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x4D814 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x4D8DC // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x4D83C // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x4D744 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x4D7C0 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x4D868 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x4D77C // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x27641C // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x2763F0 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x13EC4 // bytes matched: 0x54  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x13F7C // Patched //Old: 0x135D0 // bytes matched: 0x14  F821FF817C0802A6FBE10078F80100907C7F1B78
#define ppu_thread_join_symbol                      0x13FD0 // bytes matched: 0x24  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x287A0 // bytes matched: 0x44  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x2507C // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x23D48 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x23578 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x2705D0 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x270DB8 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13638 // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x135D0 // bytes matched: 0x14  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_lock_symbol                           0x135C8 // bytes matched: 0x14**  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_unlock_symbol                         0x135C0  //unconfirmed //48009CD44800990C
#define event_port_create_symbol                    0x13074 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x134DC // Patched //Old: 0x13304 // bytes matched: 0x2C  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x13554 // bytes matched: 0x30  F821FF617C0802A6FB610078EB62859038A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13480 // bytes matched: 0x28  F821FF717C0802A6FB810070EB82859038800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x1306C // bytes matched: 0x2C**  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_queue_create_symbol                   0x1337C // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13304 // bytes matched: 0x2C  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x13148 // bytes matched: 0x6C  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2A0584 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x2A03EC // bytes matched: 0xC   F821FF61 7C0802A6FBC10090
#define cellFsRead_symbol                           0x2A0528 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2A0494 // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x29FB1C // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x29FDA0 // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x19C4AC // bytes matched: 0x2C  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x29F8FC // bytes matched: 0x1C  F821FED17C0802A6FBA101183BA10080FAE100E8FBC101207C972378
#define cellFsUtilUmount_symbol                     0x29F8D0 // Patched //Old: 0x29F884 // bytes matched: 0x20**  7C8023787CA62B787C641B787C05037838E00000E93E80B0EBC1FFF0E8690000
#define pathdup_from_user_symbol                    0x1A23A0 // bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol                            0x2A02BC // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x18A7D0 //                      7D800026F821FF31 FBC100C0EBC2FDD0
#define close_fs_object_symbol                      0x18970C // bytes matched: 0x18****  E80300F82FA000004D9E002038000000E88300F8F80300F8
#define storage_get_device_info_symbol              0x282784 // bytes matched: 0x34*  7C0802A6F821FF71F80100A0FBE10088F86100C0EBE90000FB810070FBC10080
#define storage_open_symbol                         0x282194 // bytes matched: 0x40*  7C0802A6F821FF11F8010100FBA100D8F8610120EBA90000FB4100C07C9A2378
#define storage_close_symbol                        0x281F84 // bytes matched: 0x38*  7C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B7838800000
#define storage_read_symbol                         0x2814F4 // bytes matched: 0x54  F821FF017C0802A6FBE100F83BE10070FBA100E8787D00207FE3FB78F8010110
#define storage_send_device_command_symbol          0x281080 // bytes matched: 0x80*  7C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FBA100F8FBC10100
#define storage_map_io_memory_symbol                0x282640 // bytes matched: 0x38*  7C0802A6F821FF61F80100B0FBE10098FB810080EBE900007C9C2378FBC10090
#define storage_unmap_io_memory_symbol              0x28250C // bytes matched: 0x38*  7C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378FBC10080
#define storage_internal_get_device_object_symbol   0x280B38 // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x3496C // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x4EEA4 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x58A48 // bytes matched: 0x18  3884FFFA7C0802A6F821FF912B840036F8010080419D00FC
#define prx_load_module_symbol                      0x88B78 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x87844 // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x88C1C // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x87578 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x87000 // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x87080 // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x70018 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
#define get_pseudo_random_number_symbol             0x230E74 // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x363A18
#define syscall_call_offset                         0x27E888 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1AD310 // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1AEF3C // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1BC0F4 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x28ACF0 // bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2A071C // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2A076C // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2A07AC // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             -0x1F0
#define io_sub_rtoc_entry_1                         -0x7EA0
#define decrypt_rtoc_entry_2                        -0x66A0 //E86299604BFFBCAD 392000004BFFFFCC 2C2400007C0802A6 F821FF71FBC10080
#define storage_rtoc_entry_1                        0x1DD8
#define device_event_rtoc_entry_1                   0x2048
#define process_rtoc_entry_1                        -0x7800 //found at 0x1A153 88003FC0800163DE0005E87D0000
#define patch_func2                                 0x59CF8 //unconfirmed //F821FF617C0802A6 FBC100907C9E2378
#define patch_func2_offset                          0x2C
#define user_thread_prio_patch                      0x203F8 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x20404 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6

#elif defined(FIRMWARE_4_60DEX)
#define TOC                                         0x375500 //done
#define open_shared_kernel_object_symbol            0x12A54 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x12074 // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x68168 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229FA8E86900004BFFFEB8
#define dealloc_symbol                              0x685A4 // bytes matched: 0x80  E9229FA87C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xFEB0 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0x100CC // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xFF68 // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xFD78 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x63CD8 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x6373C // bytes matched: 0x80  E9629D787C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x63E74 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x63630 // bytes matched: 0x80  E8630030480113482BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol               0x73C10 // bytes matched: 0x80  E922A2587C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x7B2BC // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A488FB0100E07C781B78
#define memcpy_symbol                               0x8297C // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x51010 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x50320 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define sprintf_symbol                              0x52438 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A29688F8C100C8F8610078
#define snprintf_symbol                             0x523A4 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x511BC // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x51284 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x511E4 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x510EC // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x51168 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x51210 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x51124 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x27E2F4 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x27E2C8 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x145F8 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x146B0 // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480139258003009054000462
#define ppu_thread_join_symbol                      0x14704 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x2A6E4 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x26D2C // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x25864 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x25028 // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x276EF4 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x2776DC // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13C88 // bytes matched: 0x80  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13C20 // bytes matched: 0x80  F821FF817C0802A6FBE10078F80100907C7F1B784800A6952FA300003C008001
#define mutex_lock_symbol                           0x13C18 // bytes matched: 0x80  38A000004800B9ECF821FF817C0802A6FBE10078F80100907C7F1B784800A695
#define mutex_unlock_symbol                         0x13C10 // bytes matched: 0x80  4800B1344800AD6C38A000004800B9ECF821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x136C4 // bytes matched: 0x80  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13B2C // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x13BA4 // bytes matched: 0x80  F821FF617C0802A6FB610078EB6285A838A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13AD0 // bytes matched: 0x80  F821FF717C0802A6FB810070EB8285A838800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x136BC // bytes matched: 0x80  38E0000148019C04F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x139CC // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13954 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x13798 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2BB2CC // bytes matched: 0x54  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78EBC22EA8
#define cellFsClose_symbol                          0x2BB134 // bytes matched: 0x1C  F821FF617C0802A6FBC10090EBC22EA8FBA10088F80100B07C7D1B78
#define cellFsRead_symbol                           0x2BB270 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2BB1DC // bytes matched: 0x34  F821FF517C0802A6FBC100A0EBC22EA8FB410080FB6100887CDA33787CBB2B78
#define cellFsLseek_symbol                          0x2BAA30 // bytes matched: 0x34  F821FF517C0802A6FBC100A0EBC22EA8FB410080FB6100887CDA33787C9B2378
#define cellFsStat_symbol                           0x2BAAE8 // bytes matched: 0x38  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78EBC22EA87C9B2378
#define cellFsUnlink_internal_symbol                0x1A2838 // bytes matched: 0x80  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2BA7A4 // bytes matched: 0x80  F821FED17C0802A6FB2100F83B210080FAA100D8FBC101207C952378EBC22EA8
#define cellFsUtilUmount_symbol                     0x2BA72C // bytes matched: 0x28  FBC1FFF0EBC22EA87C8023787CA62B787C641B787C05037838E00000E93E80B0
#define pathdup_from_user_symbol                    0x1A8850 // bytes matched: 0x40  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78EBC2FF407C992378
#define open_path_symbol                            0x2BB004 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x190B5C // bytes matched: 0x58  7D800026F821FF31FBC100C0EBC2FEC8FB010090FB210098FB4100A0FB6100A8
#define close_fs_object_symbol                      0x18FA98 // bytes matched: 0x80  7C83237838A00000388000004BFDE180E80300F82FA000004D9E002038000000
#define storage_get_device_info_symbol              0x295684 // bytes matched: 0x54  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_open_symbol                         0x2958AC // bytes matched: 0x58  F821FF117C0802A6F861012038610120FB0100B0FB2100B8FB4100C0FB8100D0
#define storage_close_symbol                        0x294098 // bytes matched: 0x3C  E92222B07C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B78
#define storage_read_symbol                         0x293014 // bytes matched: 0x80  F821FF017C0802A6FB8100E03B810070FBE100F8787F00207F83E378FAE100B8
#define storage_send_device_command_symbol          0x292B34 // bytes matched: 0x80  E96222B07C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FB6100E8
#define storage_map_io_memory_symbol                0x295530 // bytes matched: 0x54  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_unmap_io_memory_symbol              0x2953EC // bytes matched: 0x4C  F821FF717C0802A6F86100C0386100C0FB810070FBA10078FBC10080FBE10088
#define storage_internal_get_device_object_symbol   0x2925EC // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x3828C // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x5284C // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x5C418 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE96299F878891788
#define prx_load_module_symbol                      0x8D27C // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x8BF48 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8D320 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x8BC7C // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x8B674 // bytes matched: 0x4C  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x8B6F4 // bytes matched: 0x58  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x73B68 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB4469E922A218
#define get_pseudo_random_number_symbol             0x237350 // bytes matched: 0x48  7C601B78E86204D87C8523787C04037848000404480001E4F821FF717C0802A6
#define syscall_table_symbol                        0x38A120 //done
#define syscall_call_offset                         0x286B68 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1B37C0 // bytes matched: 0x80  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1B53EC // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1C25A4 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x29F880 // bytes matched: 0x3C*  F821FF617C0802A6FBC10090F80100B0FBE100987C7E1B78E86300D87C9F2378
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2BB464 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2BB4B4 // bytes matched: 0x80  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2BB4F4 // bytes matched: 0x60  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define user_thread_prio_patch                      0x21EA8 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21EB4 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#define io_rtoc_entry_1                             -0xC0 //found at 0x1A59FA FF40E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x16AD72 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x65C0 //found at 0x5D1F6 9A404BFFBCAD392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x22B0 //found at 0x292876 22B07C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x2638 //found at 0x29F86A 263878050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x77A0 //found at 0x1BC02 88603FC0800163DE0005E87D0000
#define patch_func2                                 0x5D6C8 // bytes matched: 0x10  F821FF617C0802A6FBC100907C9E2378
#define patch_func2_offset                          0x2C //UNTOUCHED
#define user_thread_prio_patch                      0x21EA8 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21EB4 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6

#elif defined(FIRMWARE_4_65) // Ported by Habib, Joonie, Haxxxen and Aldostools
#define TOC                                         0x34F960 //
#define open_shared_kernel_object_symbol            0x12410 //
#define close_kernel_object_handle_symbol           0x11A30 //
#define alloc_symbol                                0x6479C //
#define dealloc_symbol                              0x64BD8 //
#define copy_to_user_symbol                         0xF86C //
#define copy_from_user_symbol                       0xFA88 //
#define copy_to_process_symbol                      0xF924 //
#define copy_from_process_symbol                    0xF734 //
#define page_allocate_symbol                        0x6030C //
#define page_free_symbol                            0x5FD70 //
#define page_export_to_proc_symbol                  0x604A8 //
#define page_unexport_from_proc_symbol              0x5FC64 //
#define kernel_ea_to_lpar_addr_symbol               0x700C4 //
#define map_process_memory_symbol                   0x771E4 //
#define memcpy_symbol                               0x7E8A4 //
#define memset_symbol                               0x4D66C //
#define memcmp_symbol                               0x4C97C //
#define printf_symbol                               0x27933C //
#define printfnull_symbol                           0x27DDB0 //
#define sprintf_symbol                              0x4EA94 //
#define snprintf_symbol                             0x4EA00 //
#define strcpy_symbol                               0x4D818 //
#define strncpy_symbol                              0x4D8E0 //
#define strlen_symbol                               0x4D840 //
#define strcat_symbol                               0x4D748 //
#define strcmp_symbol                               0x4D7C4 //
#define strncmp_symbol                              0x4D86C //
#define strchr_symbol                               0x4D780 //
#define spin_lock_irqsave_ex_symbol                 0x276428 //
#define spin_unlock_irqrestore_ex_symbol            0x2763FC //
#define load_process_symbol                         0x5004 //
#define ppu_thread_create_symbol                    0x13EC8 //
#define ppu_thread_exit_symbol                      0x13F80 //
#define ppu_thread_join_symbol                      0x13FD4 //
#define ppu_thread_delay_symbol                     0x287A4 //
#define create_user_thread2_symbol                  0x25080 //
#define start_thread_symbol                         0x23D4C //
#define run_thread_symbol                           0x2357C // /* temp name */
#define register_thread_symbol                      0x2705DC //
#define allocate_user_stack_symbol                  0x270DC4 //
#define mutex_create_symbol                         0x1363C //
#define mutex_destroy_symbol                        0x135D4 //
#define mutex_lock_symbol                           0x135CC //
#define mutex_unlock_symbol                         0x135C4 //
#define event_port_create_symbol                    0x13078 //
#define event_port_destroy_symbol                   0x134E0 //
#define event_port_connect_symbol                   0x13558 //
#define event_port_disconnect_symbol                0x13484 //
#define event_port_send_symbol                      0x13070 //
#define event_queue_create_symbol                   0x13380 //
#define event_queue_destroy_symbol                  0x13308 //
#define event_queue_receive_symbol                  0x1314C //
#define cellFsOpen_symbol                           0x2A0590 //
#define cellFsClose_symbol                          0x2A03F8 //
#define cellFsRead_symbol                           0x2A0534 //
#define cellFsWrite_symbol                          0x2A04A0 //
#define cellFsLseek_symbol                          0x29FB28 //
#define cellFsStat_symbol                           0x29FDAC //
#define cellFsUnlink_internal_symbol                0x19C4B4 //
#define cellFsUtilMount_symbol                      0x29F908 //
#define cellFsUtilUmount_symbol                     0x29F8DC
#define pathdup_from_user_symbol                    0x1A23A8 //
#define open_path_symbol                            0x2A02C8 // Thanks Habib!
#define open_fs_object_symbol                       0x18A7D8 //
#define close_fs_object_symbol                      0x189714 //
#define storage_get_device_info_symbol              0x282790 //
#define storage_open_symbol                         0x2821A0 //
#define storage_close_symbol                        0x281F90 //
#define storage_read_symbol                         0x281500 //
#define storage_send_device_command_symbol          0x28108C //
#define storage_map_io_memory_symbol                0x28264C //
#define storage_unmap_io_memory_symbol              0x282518 //
#define decrypt_func_symbol                         0x34970 //
#define lv1_call_99_wrapper_symbol                  0x4EEA8 //
#define modules_verification_symbol                 0x58A4C //
#define prx_load_module_symbol                      0x88B7C //
#define prx_start_module_symbol                     0x87848 //
#define prx_stop_module_symbol                      0x88C20 //
#define prx_unload_module_symbol                    0x8757C //
#define prx_get_module_info_symbol                  0x87004 //
#define prx_get_module_list_symbol                  0x87084 //
#define extend_kstack_symbol                        0x7001C //
#define get_pseudo_random_number_symbol             0x230E7C //
#define syscall_table_symbol                        0x363A18 //
#define syscall_call_offset                         0x27E894 //
#define read_bdvd0_symbol                           0x1AD318 //
#define read_bdvd1_symbol                           0x1AEF44 //
#define read_bdvd2_symbol                           0x1BC0FC //
#define storage_internal_get_device_object_symbol   0x280B44 //
#define device_event_port_send_call                 0x28ACFC //
#define process_map_caller_call                     0x4D24 //
#define fsloop_open_call                            0x2A0728 //
#define fsloop_close_call                           0x2A0778 //
#define fsloop_read_call                            0x2A07B8 //
#define io_rtoc_entry_1                             -0x1F0 //
#define io_sub_rtoc_entry_1                         -0x7EA0 //
#define decrypt_rtoc_entry_2                        -0x66A0 //
#define storage_rtoc_entry_1                        0x1DD8 //
#define device_event_rtoc_entry_1                   0x2048 //
#define process_rtoc_entry_1                        -0x7800 //
#define patch_func2                                 0x59CFC //
#define patch_func2_offset                          0x2C //
#define user_thread_prio_patch                      0x203FC //
#define user_thread_prio_patch2                     0x20408 //
#elif defined(FIRMWARE_4_65DEX) // Ported by Joonie, special thanks to @aldostools for his awesome Getsymbol tool!!!!
#define TOC                                         0x375510 //done
#define open_shared_kernel_object_symbol            0x12A58 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x12078 // bytes matched: 0x3C  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x6816C // bytes matched: 0x14  2C2300007C85237838C000007C641B784D820020
#define dealloc_symbol                              0x685A8 // bytes matched: 0x28*  7C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6FBA10078
#define copy_to_user_symbol                         0xFEB4 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0x100D0 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xFF6C // bytes matched: 0x60  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xFD7C // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x63CDC // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x63740 // bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
#define page_export_to_proc_symbol                  0x63E78 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x63634 // bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
#define kernel_ea_to_lpar_addr_symbol               0x73C14 // bytes matched: 0x80*  7C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378FB810090
#define map_process_memory_symbol                   0x7B2C0 // bytes matched: 0x14  7D800026F821FEE1FAC100D07CF63B78FB810100
#define memcpy_symbol                               0x82980 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x51014 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x50324 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x281608 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x286090 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x5243C // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A29688F8C100C8F8610078
#define snprintf_symbol                             0x523A8 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x511C0 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x51288 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x511E8 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x510F0 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x5116C // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x51214 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x51128 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x27E300 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x27E2D4 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x145FC // bytes matched: 0x54  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x146B4 // Verified with IDA by Joonie
#define ppu_thread_join_symbol                      0x14708 // bytes matched: 0x24  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x2A6E8 // bytes matched: 0x44  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x26D30 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x25868 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x2502C // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x276F00 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x2776E8 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13C8C // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13C24 // bytes matched: 0x5C  F821FF817C0802A6FBE10078F80100907C7F1B784800A6952FA300003C008001
#define mutex_lock_symbol                           0x13C1C // bytes matched: 0x14**  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_unlock_symbol                         0x13C14 // bytes matched: 0x6C  4800B1344800AD6C38A000004800B9ECF821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x136C8 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13B30 // Verified with IDA by Joonie
#define event_port_connect_symbol                   0x13BA8 // bytes matched: 0x30  F821FF617C0802A6FB610078EB6285A838A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13AD4 // bytes matched: 0x28  F821FF717C0802A6FB810070EB8285A838800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x136C0 // bytes matched: 0x2C**  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_queue_create_symbol                   0x139D0 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13958 // bytes matched: 0x34  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x1379C // bytes matched: 0x6C  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2BB2D8 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x2BB140 // Verified with IDA by Joonie
#define cellFsRead_symbol                           0x2BB27C // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2BB1E8 // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x2BAA3C // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x2BAAF4 // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x1A2840 // bytes matched: 0x2C  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2BA7B0 // bytes matched: 0x1C  F821FED17C0802A6FB2100F83B210080FAA100D8FBC101207C952378
#define cellFsUtilUmount_symbol                     0x2BA784 // Verified with IDA by Joonie
#define pathdup_from_user_symbol                    0x1A8858 // bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol                            0x2BB010 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x190B64 // bytes matched: 0x48****  FB010090FB210098FB4100A0FB6100A8FB8100B0FBE100C8FBA100B87C9A2378
#define close_fs_object_symbol                      0x18FAA0 // bytes matched: 0x18****  E80300F82FA000004D9E002038000000E88300F8F80300F8
#define storage_get_device_info_symbol              0x295690 // bytes matched: 0x30  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_open_symbol                         0x2958B8 //  Verified with IDA by Joonie
#define storage_close_symbol                        0x2940A4 //  Verified with IDA by Joonie
#define storage_read_symbol                         0x293020 //  Verified with IDA by Joonie
#define storage_send_device_command_symbol          0x292B40 //  Verified with IDA by Joonie
#define storage_map_io_memory_symbol                0x29553C //  Verified with IDA by Joonie
#define storage_unmap_io_memory_symbol              0x2953F8 //  Verified with IDA by Joonie
#define decrypt_func_symbol                         0x38290 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x52850 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x5C41C // bytes matched: 0x18  3884FFFA7C0802A6F821FF912B840036F8010080419D00FC
#define prx_load_module_symbol                      0x8D280 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x8BF4C // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8D324 // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x8BC80 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x8B678 // bytes matched: 0x4C  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x8B6F8 // bytes matched: 0x58  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x73B6C // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
#define get_pseudo_random_number_symbol             0x237358 // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x38A120 //done
#define syscall_call_offset                         0x286B74 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1B37C8 // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1B53F4 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1C25AC // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define storage_internal_get_device_object_symbol   0x2925F8 //  Verified with IDA by Joonie
#define device_event_port_send_call                 0x29F88C //  Verified with IDA by Joonie
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2BB470 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2BB4C0 // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2BB500 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             -0xC0 //found at 0x1A5A03 FF40E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x16AD7B 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x65C0 //found at 0x5D1FB 9A404BFFBCAD392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x22B0 //found at 0x292883 22B07C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x2638 //found at 0x29F877 263878050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x77A0 //found at 0x1BC07 88603FC0800163DE0005E87D0000
#define patch_func2                                 0x5D6CC // bytes matched: 0x10  F821FF617C0802A6FBC100907C9E2378
#define patch_func2_offset                          0x2C
#define user_thread_prio_patch                      0x21EAC // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21EB8
#elif defined(FIRMWARE_4_66) // Ported by Habib, Joonie, Haxxxen and Aldostools (Sep 11/2014)
#define TOC                                         0x34F960 // same as mamba 4.65
#define open_shared_kernel_object_symbol            0x12410 // same as mamba 4.65
#define close_kernel_object_handle_symbol           0x11A30 // same as mamba 4.65
#define alloc_symbol                                0x6479C // same as mamba 4.65
#define dealloc_symbol                              0x64BD8 // same as mamba 4.65
#define copy_to_user_symbol                         0xF86C // same as mamba 4.65
#define copy_from_user_symbol                       0xFA88 // same as mamba 4.65
#define copy_to_process_symbol                      0xF924 // same as mamba 4.65
#define copy_from_process_symbol                    0xF734 // same as mamba 4.65
#define page_allocate_symbol                        0x6030C // same as mamba 4.65
#define page_free_symbol                            0x5FD70 // same as mamba 4.65
#define page_export_to_proc_symbol                  0x604A8 // same as mamba 4.65
#define page_unexport_from_proc_symbol              0x5FC64 // same as mamba 4.65
#define kernel_ea_to_lpar_addr_symbol               0x700C4 // same as mamba 4.65
#define map_process_memory_symbol                   0x771E4 // same as mamba 4.65
#define memcpy_symbol                               0x7E8A4 // same as mamba 4.65
#define memset_symbol                               0x4D66C // same as mamba 4.65
#define memcmp_symbol                               0x4C97C // same as mamba 4.65
#define printf_symbol                               0x27933C //
#define printfnull_symbol                           0x27DDB0 //
#define sprintf_symbol                              0x4EA94 // same as mamba 4.65
#define snprintf_symbol                             0x4EA00 // same as mamba 4.65
#define strcpy_symbol                               0x4D818 // same as mamba 4.65
#define strncpy_symbol                              0x4D8E0 // same as mamba 4.65
#define strlen_symbol                               0x4D840 // same as mamba 4.65
#define strcat_symbol                               0x4D748 // same as mamba 4.65
#define strcmp_symbol                               0x4D7C4 // same as mamba 4.65
#define strncmp_symbol                              0x4D86C // same as mamba 4.65
#define strchr_symbol                               0x4D780 // same as mamba 4.65
#define spin_lock_irqsave_ex_symbol                 0x276428 // same as mamba 4.65
#define spin_unlock_irqrestore_ex_symbol            0x2763FC // same as mamba 4.65
#define load_process_symbol                         0x5004   // same as mamba 4.65
#define ppu_thread_create_symbol                    0x13EC8 // same as mamba 4.65
#define ppu_thread_exit_symbol                      0x13F80 // same as mamba 4.65
#define ppu_thread_join_symbol                      0x13FD4 // same as mamba 4.65
#define ppu_thread_delay_symbol                     0x287A4 // same as mamba 4.65
#define create_user_thread2_symbol                  0x25080 // same as mamba 4.65
#define start_thread_symbol                         0x23D4C // same as mamba 4.65
#define run_thread_symbol                           0x2357C // same as mamba 4.65
#define register_thread_symbol                      0x2705DC // same as mamba 4.65
#define allocate_user_stack_symbol                  0x270DC4 // same as mamba 4.65
#define mutex_create_symbol                         0x1363C // same as mamba 4.65
#define mutex_destroy_symbol                        0x135D4 // same as mamba 4.65
#define mutex_lock_symbol                           0x135CC // same as mamba 4.65
#define mutex_unlock_symbol                         0x135C4 // same as mamba 4.65
#define event_port_create_symbol                    0x13078 // same as mamba 4.65
#define event_port_destroy_symbol                   0x134E0 // same as mamba 4.65
#define event_port_connect_symbol                   0x13558 // same as mamba 4.65
#define event_port_disconnect_symbol                0x13484 // same as mamba 4.65
#define event_port_send_symbol                      0x13070 // same as mamba 4.65
#define event_queue_create_symbol                   0x13380 // same as mamba 4.65
#define event_queue_destroy_symbol                  0x13308 // same as mamba 4.65
#define event_queue_receive_symbol                  0x1314C // same as mamba 4.65
#define cellFsOpen_symbol                           0x2A0590 // same as mamba 4.65
#define cellFsClose_symbol                          0x2A03F8 // same as mamba 4.65
#define cellFsRead_symbol                           0x2A0534 // same as mamba 4.65
#define cellFsWrite_symbol                          0x2A04A0 // same as mamba 4.65
#define cellFsLseek_symbol                          0x29FB28 // same as mamba 4.65
#define cellFsStat_symbol                           0x29FDAC // same as mamba 4.65
#define cellFsUnlink_internal_symbol                0x19C4B4 // same as mamba 4.65
#define cellFsUtilMount_symbol                      0x29F908 // same as mamba 4.65
#define cellFsUtilUmount_symbol                     0x29F8DC // Before it was 0x2A12E4 and 0x29F8BC Thanks Habib!
#define pathdup_from_user_symbol                    0x1A23A8 // same as mamba 4.65
#define open_path_symbol                            0x2A02C8 // same as mamba 4.65 Thanks Habib!
#define open_fs_object_symbol                       0x18A7D8 // same as mamba 4.65
#define close_fs_object_symbol                      0x189714 // same as mamba 4.65
#define storage_send_device_command_symbol          0x28108C // same as mamba 4.65
#define storage_read_symbol                         0x281500 // same as mamba 4.65
#define storage_close_symbol                        0x281F90 // same as mamba 4.65
#define storage_open_symbol                         0x2821A0 // same as mamba 4.65
#define storage_unmap_io_memory_symbol              0x282518 // same as mamba 4.65
#define storage_map_io_memory_symbol                0x28264C // same as mamba 4.65
#define storage_get_device_info_symbol              0x282790 // same as mamba 4.65
#define decrypt_func_symbol                         0x34970 // same as mamba 4.65
#define lv1_call_99_wrapper_symbol                  0x4EEA8 // same as mamba 4.65
#define modules_verification_symbol                 0x58A4C // same as mamba 4.65
#define prx_load_module_symbol                      0x88B7C // same as mamba 4.65
#define prx_start_module_symbol                     0x87848 // same as mamba 4.65
#define prx_stop_module_symbol                      0x88C20 // same as mamba 4.65
#define prx_unload_module_symbol                    0x8757C // same as mamba 4.65
#define prx_get_module_info_symbol                  0x87004 // bytes matched: 0x4C  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x87084 // bytes matched: 0x58  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x7001C // same as mamba 4.65
#define get_pseudo_random_number_symbol             0x230E7C // same as mamba 4.65
#define syscall_table_symbol                        0x363A18 // same as mamba 4.65
#define syscall_call_offset                         0x27E894 // same as mamba 4.65
#define read_bdvd0_symbol                           0x1AD318 // same as mamba 4.65
#define read_bdvd1_symbol                           0x1AEF44 // same as mamba 4.65
#define read_bdvd2_symbol                           0x1BC0FC // same as mamba 4.65
#define storage_internal_get_device_object_symbol   0x280B44 // same as mamba 4.65
#define device_event_port_send_call                 0x28ACFC // same as mamba 4.65
#define process_map_caller_call                     0x4D24 // same as mamba 4.65
#define fsloop_open_call                            0x2A0728 // same as mamba 4.65
#define fsloop_close_call                           0x2A0778 // same as mamba 4.65
#define fsloop_read_call                            0x2A07B8 // same as mamba 4.65
#define io_rtoc_entry_1                             -0x1F0 //
#define io_sub_rtoc_entry_1                         -0x7EA0 //
#define decrypt_rtoc_entry_2                        -0x66A0 // same as mamba 4.65
#define storage_rtoc_entry_1                        0x1DD8 // same as mamba 4.65
#define device_event_rtoc_entry_1                   0x2048 // same as mamba 4.65
#define process_rtoc_entry_1                        -0x7800 //
#define patch_func2                                 0x59CFC  // same as mamba 4.65
#define patch_func2_offset                          0x2C     // same as mamba 4.65
#define user_thread_prio_patch                      0x203FC //
#define user_thread_prio_patch2                     0x20408 //
#elif defined(FIRMWARE_4_66DEX) // Ported by Joonie, special thanks to @aldostools for his awesome Getsymbol tool!!!!
#define TOC                                         0x375510 //done
#define open_shared_kernel_object_symbol            0x12A58 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x12078 // bytes matched: 0x3C  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x6816C // bytes matched: 0x14  2C2300007C85237838C000007C641B784D820020
#define dealloc_symbol                              0x685A8 // bytes matched: 0x28*  7C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6FBA10078
#define copy_to_user_symbol                         0xFEB4 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0x100D0 // bytes matched: 0x60  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xFF6C // bytes matched: 0x60  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xFD7C // bytes matched: 0x58  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x63CDC // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x63740 // bytes matched: 0x5C*  7C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B787CBE2B78
#define page_export_to_proc_symbol                  0x63E78 // bytes matched: 0x3C  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x63634 // bytes matched: 0x20**  2BA3003C7C0802A6F821FF91F80100807C8B23787C601B7841DD0084786326E4
#define kernel_ea_to_lpar_addr_symbol               0x73C14 // bytes matched: 0x80*  7C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378FB810090
#define map_process_memory_symbol                   0x7B2C0 // bytes matched: 0x14  7D800026F821FEE1FAC100D07CF63B78FB810100
#define memcpy_symbol                               0x82980 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x51014 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x50324 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x281608 // bytes matched: 0x30****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol                           0x286090 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x5243C // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A29688F8C100C8F8610078
#define snprintf_symbol                             0x523A8 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x511C0 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x51288 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x511E8 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x510F0 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x5116C // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x51214 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x51128 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x27E300 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x27E2D4 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x145FC // bytes matched: 0x54  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x146B4 // Verified with IDA by Joonie
#define ppu_thread_join_symbol                      0x14708 // bytes matched: 0x24  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x2A6E8 // bytes matched: 0x44  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x26D30 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x25868 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x2502C // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x276F00 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x2776E8 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13C8C // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13C24 // bytes matched: 0x5C  F821FF817C0802A6FBE10078F80100907C7F1B784800A6952FA300003C008001
#define mutex_lock_symbol                           0x13C1C // bytes matched: 0x14**  F821FF817C0802A6FBE10078F80100907C7F1B78
#define mutex_unlock_symbol                         0x13C14 // bytes matched: 0x6C  4800B1344800AD6C38A000004800B9ECF821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x136C8 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13B30 // Verified with IDA by Joonie
#define event_port_connect_symbol                   0x13BA8 // bytes matched: 0x30  F821FF617C0802A6FB610078EB6285A838A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13AD4 // bytes matched: 0x28  F821FF717C0802A6FB810070EB8285A838800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x136C0 // bytes matched: 0x2C**  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_queue_create_symbol                   0x139D0 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13958 // bytes matched: 0x34  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x1379C // bytes matched: 0x6C  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2BB2D8 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x2BB140 // Verified with IDA by Joonie
#define cellFsRead_symbol                           0x2BB27C // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2BB1E8 // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x2BAA3C // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x2BAAF4 // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x1A2840 // bytes matched: 0x2C  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2BA7B0 // bytes matched: 0x1C  F821FED17C0802A6FB2100F83B210080FAA100D8FBC101207C952378
#define cellFsUtilUmount_symbol                     0x2BA784 // Verified with IDA by Joonie
#define pathdup_from_user_symbol                    0x1A8858 // bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol                            0x2BB010 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x190B64 // bytes matched: 0x48****  FB010090FB210098FB4100A0FB6100A8FB8100B0FBE100C8FBA100B87C9A2378
#define close_fs_object_symbol                      0x18FAA0 // bytes matched: 0x18****  E80300F82FA000004D9E002038000000E88300F8F80300F8
#define storage_get_device_info_symbol              0x295690 // bytes matched: 0x30  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_open_symbol                         0x2958B8 //  Verified with IDA by Joonie
#define storage_close_symbol                        0x2940A4 //  Verified with IDA by Joonie
#define storage_read_symbol                         0x293020 //  Verified with IDA by Joonie
#define storage_send_device_command_symbol          0x292B40 //  Verified with IDA by Joonie
#define storage_map_io_memory_symbol                0x29553C //  Verified with IDA by Joonie
#define storage_unmap_io_memory_symbol              0x2953F8 //  Verified with IDA by Joonie
#define decrypt_func_symbol                         0x38290 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x52850 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x5C41C // bytes matched: 0x18  3884FFFA7C0802A6F821FF912B840036F8010080419D00FC
#define prx_load_module_symbol                      0x8D280 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x8BF4C // bytes matched: 0x6C  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8D324 // bytes matched: 0x3C  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x8BC80 // bytes matched: 0x3C  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x8B678 // bytes matched: 0x4C  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x8B6F8 // bytes matched: 0x58  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x73B6C // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
#define get_pseudo_random_number_symbol             0x237358 // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x38A120 //done
#define syscall_call_offset                         0x286B74 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1B37C8 // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1B53F4 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1C25AC // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define storage_internal_get_device_object_symbol   0x2925F8 //  Verified with IDA by Joonie
#define device_event_port_send_call                 0x29F88C //  Verified with IDA by Joonie
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2BB470 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2BB4C0 // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2BB500 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             -0xC0 //found at 0x1A5A03 FF40E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x16AD7B 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x65C0 //found at 0x5D1FB 9A404BFFBCAD392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x22B0 //found at 0x292883 22B07C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x2638 //found at 0x29F877 263878050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x77A0 //found at 0x1BC07 88603FC0800163DE0005E87D0000
#define patch_func2                                 0x5D6CC // bytes matched: 0x10  F821FF617C0802A6FBC100907C9E2378
#define patch_func2_offset                          0x2C
#define user_thread_prio_patch                      0x21EAC // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21EB8
#elif defined(FIRMWARE_4_70)
#define TOC                                         0x34FB10 //done
#define open_shared_kernel_object_symbol            0x1240C // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x11A2C // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x64820 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229EC8E86900004BFFFEB8
#define dealloc_symbol                              0x64C5C // bytes matched: 0x50  E9229EC87C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xF868 // bytes matched: 0x80  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0xFA84 // bytes matched: 0x80  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xF920 // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xF730 // bytes matched: 0x74  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x60390 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x5FDF4 // bytes matched: 0x80  E9629C987C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x6052C // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x5FCE8 // bytes matched: 0x80  E8630030480110882BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol               0x70148 // bytes matched: 0x80  E922A1787C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x77268 // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A3A8FB0100E07C781B78
#define memcpy_symbol                               0x7E928 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x4D668 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x4C978 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x270634
#define printfnull_symbol                           0x2750A8
#define sprintf_symbol                              0x4EA90 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
#define snprintf_symbol                             0x4E9FC // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x4D814 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x4D8DC // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x4D83C // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x4D744 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x4D7C0 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x4D868 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x4D77C // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x26D720 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x26D6F4 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x13EC4 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x13F7C // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480122598003009054000462
#define ppu_thread_join_symbol                      0x13FD0 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x287A0 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x2507C // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x23D48 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x23578 // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x2678D4 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x2680BC // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13638 // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x135D0 // bytes matched: 0x5C  F821FF817C0802A6FBE10078F80100907C7F1B78480092352FA300003C008001
#define mutex_lock_symbol                           0x135C8 // bytes matched: 0x64  38A000004800A58CF821FF817C0802A6FBE10078F80100907C7F1B7848009235
#define mutex_unlock_symbol                         0x135C0 // bytes matched: 0x6C  48009CD44800990C38A000004800A58CF821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x13074 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x134DC // bytes matched: 0x4C  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x13554 // bytes matched: 0x80  F821FF617C0802A6FB610078EB62859038A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13480 // bytes matched: 0x80  F821FF717C0802A6FB810070EB82859038800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x1306C // bytes matched: 0x34  38E0000148018190F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x1337C // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13304 // bytes matched: 0x4C  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x13148 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x297888 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x2976F0 // bytes matched: 0x10  F821FF617C0802A6FBC10090EBC225B0
#define cellFsRead_symbol                           0x29782C // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x297798 // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x296E20 // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x2970A4 // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x19C644 // bytes matched: 0x80  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x296C00 // bytes matched: 0x1C  F821FED17C0802A6FBA101183BA10080FAE100E8FBC101207C972378
#define cellFsUtilUmount_symbol                     0x296BD4 // wrong: 0x296B88 // bytes matched: 0x20** 7C8023787CA62B787C641B787C05037838E00000E93E80B0EBC1FFF0E8690000
#define pathdup_from_user_symbol                    0x29C86C // bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol                            0x2975C0 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x18A968 // bytes matched: 0x80  7D800026F821FF31FBC100C0EBC2FD98FB010090FB210098FB4100A0FB6100A8
#define close_fs_object_symbol                      0x1898A4 // bytes matched: 0x80  7C83237838A00000388000004BFDE180E80300F82FA000004D9E002038000000
#define storage_get_device_info_symbol              0x279A88 // bytes matched: 0x34*  7C0802A6F821FF71F80100A0FBE10088F86100C0EBE90000FB810070FBC10080
#define storage_open_symbol                         0x279498 // bytes matched: 0x40*  7C0802A6F821FF11F8010100FBA100D8F8610120EBA90000FB4100C07C9A2378
#define storage_close_symbol                        0x279288 // bytes matched: 0x38*  7C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B7838800000
#define storage_read_symbol                         0x2787F8 // bytes matched: 0x80  F821FF017C0802A6FBE100F83BE10070FBA100E8787D00207FE3FB78F8010110
#define storage_send_device_command_symbol          0x278384 // bytes matched: 0x80*  7C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FBA100F8FBC10100
#define storage_map_io_memory_symbol                0x279944 // bytes matched: 0x38*  7C0802A6F821FF61F80100B0FBE10098FB810080EBE900007C9C2378FBC10090
#define storage_unmap_io_memory_symbol              0x279810 // bytes matched: 0x38*  7C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378FBC10080
#define storage_internal_get_device_object_symbol   0x277E3C // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x3496C // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x4EEA4 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x58AB4 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE962991878891788
#define prx_load_module_symbol                      0x88C00 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x878CC // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x88CA4 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x87600 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x87088 // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x87108 // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x700A0 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
#define get_pseudo_random_number_symbol             0x228178 // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x363B60 //done
#define syscall_call_offset                         0x275B8C // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1A4614 // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1A6240 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1B33F8 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x28962C // bytes matched: 0x10*  F821FF617C0802A6FBC10090F80100B0
#define process_map_caller_call                     0x4D24 // bytes matched: 0x80  480145F52F8300007C7D1B78419EFF1C807B0000480149ADE80100D0EB010080
#define fsloop_open_call                            0x297A20 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x297A70 // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x297AB0 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             0x25B0 // Wrong-> -0xDA50 //found at 0x299A17 25B0E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x164B7F 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x66A0 //found at 0x598AF 99604BFFBC25392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x1DD0 //found at 0x277F0B 1DD07C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x2040 //found at 0x281FDF 204078050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x7800 //found at 0x1A153 88003FC0800163DE0005E87D0000
#define patch_func2                                 0x59D80 // bytes matched: 0x2C  F821FF617C0802A6FBC100907C9E2378E862995838810070FBA10088FBE10098
#define patch_func2_offset                          0x2C
#define user_thread_prio_patch                      0x203F8
#define user_thread_prio_patch2                     0x20404
#elif defined(FIRMWARE_4_70DEX) // Ported by Joonie, special thanks to @aldostools for his awesome Getsymbol tool!!!!
#define TOC                                         0x375850 //done
#define open_shared_kernel_object_symbol            0x12A54 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x12074 // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x681F0 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229FA8E86900004BFFFEB8
#define dealloc_symbol                              0x6862C // bytes matched: 0x50  E9229FA87C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xFEB0 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0x100CC // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xFF68 // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xFD78 // bytes matched: 0x74  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x63D60 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x637C4 // bytes matched: 0x80  E9629D787C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x63EFC // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x636B8 // bytes matched: 0x80  E8630030480113482BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol               0x73C98 // bytes matched: 0x80  E922A2587C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x7B344 // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A488FB0100E07C781B78
#define memcpy_symbol                               0x82A04 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x51010 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x50320 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x278900 //  IDA
#define printfnull_symbol                           0x27D388 // IDA
#define sprintf_symbol                              0x52438 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A29688F8C100C8F8610078
#define snprintf_symbol                             0x523A4 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x511BC // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x51284 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x511E4 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x510EC // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x51168 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x51210 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x51124 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x2755F8 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x2755CC // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x145F8 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x146B0 // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480139258003009054000462
#define ppu_thread_join_symbol                      0x14704 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x2A6E4 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x26D2C // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x25864 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x25028 // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x26E1F8 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x26E9E0 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13C88 // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13C20 // bytes matched: 0x5C  F821FF817C0802A6FBE10078F80100907C7F1B784800A6952FA300003C008001
#define mutex_lock_symbol                           0x13C18 // bytes matched: 0x64  38A000004800B9ECF821FF817C0802A6FBE10078F80100907C7F1B784800A695
#define mutex_unlock_symbol                         0x13C10 // bytes matched: 0x6C  4800B1344800AD6C38A000004800B9ECF821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x136C4 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13B2C //  Verified with IDA by Joonie
#define event_port_connect_symbol                   0x13BA4 // bytes matched: 0x80  F821FF617C0802A6FB610078EB6285A838A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13AD0 // bytes matched: 0x80  F821FF717C0802A6FB810070EB8285A838800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x136BC // bytes matched: 0x34  38E0000148019C04F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x139CC // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13954 // bytes matched: 0x4C  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x13798 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2B2748 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x2B25B0 //  Verified with IDA by Joonie
#define cellFsRead_symbol                           0x2B26EC // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2B2658 // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x2B1EAC // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x2B1F64 // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x1A29D0 // bytes matched: 0x80  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2B1C20 // bytes matched: 0x1C  F821FED17C0802A6FB2100F83B210080FAA100D8FBC101207C952378
#define cellFsUtilUmount_symbol                     0x2B1BF4 //  Verified with IDA by Joonie
#define pathdup_from_user_symbol                    0x2B7A0C // bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol                            0x2B2480 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x190CF4 // bytes matched: 0x58  7D800026F821FF31FBC100C0EBC2FEC8FB010090FB210098FB4100A0FB6100A8
#define close_fs_object_symbol                      0x18FC30 // bytes matched: 0x80  7C83237838A00000388000004BFDE180E80300F82FA000004D9E002038000000
#define storage_get_device_info_symbol              0x28C988 // bytes matched: 0x30  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_open_symbol                         0x28CBB0 // bytes matched: 0x40  F821FF117C0802A6F861012038610120FB0100B0FB2100B8FB4100C0FB8100D0
#define storage_close_symbol                        0x28B39C // fixed old:0x2A5AE4 // bytes matched: 0x10*  7C0802A6F821FF51F80100C0FBE100A8
#define storage_read_symbol                         0x28A318 // bytes matched: 0x70  F821FF017C0802A6FB8100E03B810070FBE100F8787F00207F83E378FAE100B8
#define storage_send_device_command_symbol          0x289E38 // bytes matched: 0x80*  7C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FB6100E8FBC10100
#define storage_map_io_memory_symbol                0x28C834 // bytes matched: 0x34  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_unmap_io_memory_symbol              0x28C6F0 // bytes matched: 0x2C  F821FF717C0802A6F86100C0386100C0FB810070FBA10078FBC10080FBE10088
#define decrypt_func_symbol                         0x3828C // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x5284C // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x5C484 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE96299F878891788
#define prx_load_module_symbol                      0x8D304 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x8BFD0 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8D3A8 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x8BD04 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x8B6FC // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x8B77C // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x73BF0 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
#define get_pseudo_random_number_symbol             0x22E654 // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x38A368 //done
#define syscall_call_offset                         0x27DE6C // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1AAAC4 // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1AC6F0 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1B98A8 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define storage_internal_get_device_object_symbol   0x2898F0 //   Verified with IDA by Joonie
#define device_event_port_send_call                 0x296B84 //   Verified with IDA by Joonie
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x2B28E0 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2B2930 // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2B2970 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             0x2EB8 // Wrong-> -0xD148 //found at 0x2B4BB7 2EB8E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x16AF0B 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x65C0 //found at 0x5D27F 9A404BFFBC25392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x22A8 //found at 0x289B7B 22A87C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x2630 //found at 0x296B6F 263078050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x77A0 //found at 0x1BC03 88603FC0800163DE0005E87D0000
#define patch_func2                                 0x5D750 // bytes matched: 0x2C  F821FF617C0802A6FBC100907C9E2378E8629A3838810070FBA10088FBE10098
#define patch_func2_offset                          0x2C
#define user_thread_prio_patch                      0x21EA8 // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21EB4 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_75)
#define TOC                                         0x34FBB0 //done
#define open_shared_kernel_object_symbol            0x12410 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x11A30 // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x64824 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229EC8E86900004BFFFEB8
#define dealloc_symbol                              0x64C60 // bytes matched: 0x80  E9229EC87C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xF86C // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0xFA88 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xF924 // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xF734 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x60394 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x5FDF8 // bytes matched: 0x80  E9629C987C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x60530 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x5FCEC // bytes matched: 0x80  E8630030480110882BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol               0x7014C // bytes matched: 0x80  E922A1787C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x7726C // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A3A8FB0100E07C781B78
#define memcpy_symbol                               0x7E92C // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x4D66C // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x4C97C // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x2706AC // bytes matched: 0x34****  FBA100987C7D1B787F63DB78F8E10100F9010108F9210110F9410118FB810090
#define printfnull_symbol					0x275120 // bytes matched: 0x24  386000004E800020F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78
#define sprintf_symbol                              0x4EA94 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
#define snprintf_symbol                             0x4EA00 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x4D818 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x4D8E0 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x4D840 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x4D748 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x4D7C4 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x4D86C // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x4D780 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x26D798 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x26D76C // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x13EC8 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x13F80 // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480122598003009054000462
#define ppu_thread_join_symbol                      0x13FD4 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x287A4 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x25080 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x23D4C // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x2357C // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x26794C // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x268134 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x1363C // bytes matched: 0x80  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x135D4 // bytes matched: 0x80  F821FF817C0802A6FBE10078F80100907C7F1B78480092352FA300003C008001
#define mutex_lock_symbol                           0x135CC // bytes matched: 0x80  38A000004800A58CF821FF817C0802A6FBE10078F80100907C7F1B7848009235
#define mutex_unlock_symbol                         0x135C4 // bytes matched: 0x80  48009CD44800990C38A000004800A58CF821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x13078 // bytes matched: 0x80  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x134E0 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x13558 // bytes matched: 0x80  F821FF617C0802A6FB610078EB62859038A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13484 // bytes matched: 0x80  F821FF717C0802A6FB810070EB82859038800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x13070 // bytes matched: 0x80  38E0000148018190F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x13380 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13308 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x1314C // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x297900 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x297768 // old: 0x296B18
#define cellFsRead_symbol                           0x2978A4 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x297810 // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x296E98 // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x29711C // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x19C64C // bytes matched: 0x80  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x296C78 // bytes matched: 0x1C  F821FED17C0802A6FBA101183BA10080FAE100E8FBC101207C972378
#define cellFsUtilUmount_symbol                     0x296C4C //old: 0x296C00
#define pathdup_from_user_symbol                    0x29C8E4 // bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol                            0x297638 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x18A970 // bytes matched: 0x58  7D800026F821FF31FBC100C0EBC2FD98FB010090FB210098FB4100A0FB6100A8
#define close_fs_object_symbol                      0x1898AC // bytes matched: 0x80  7C83237838A00000388000004BFDE180E80300F82FA000004D9E002038000000
#define storage_get_device_info_symbol              0x279B00 // bytes matched: 0x34*  7C0802A6F821FF71F80100A0FBE10088F86100C0EBE90000FB810070FBC10080
#define storage_open_symbol                         0x279510 // bytes matched: 0x40*  7C0802A6F821FF11F8010100FBA100D8F8610120EBA90000FB4100C07C9A2378
#define storage_close_symbol                        0x279300 // bytes matched: 0x38*  7C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B7838800000
#define storage_read_symbol                         0x278870 // bytes matched: 0x80  F821FF017C0802A6FBE100F83BE10070FBA100E8787D00207FE3FB78F8010110
#define storage_send_device_command_symbol          0x2783FC // bytes matched: 0x80*  7C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FBA100F8FBC10100
#define storage_map_io_memory_symbol                0x2799BC // bytes matched: 0x38*  7C0802A6F821FF61F80100B0FBE10098FB810080EBE900007C9C2378FBC10090
#define storage_unmap_io_memory_symbol              0x279888 // bytes matched: 0x38*  7C0802A6F821FF71F80100A0FBE10088FB810070EBE900007C9C2378FBC10080
#define storage_internal_get_device_object_symbol   0x277EB4 // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x34970 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x4EEA8 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x58AB8 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE962991878891788
#define prx_load_module_symbol                      0x88C04 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x878D0 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x88CA8 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x87604 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x8708C // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x8710C // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x700A4 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB6131E922A138
#define get_pseudo_random_number_symbol             0x228180 // bytes matched: 0x48  7C601B78E86203A07C8523787C04037848000404480001E4F821FF717C0802A6
#define syscall_table_symbol                        0x363BE0 //done
#define syscall_call_offset                         0x275C04 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1A461C // bytes matched: 0x80  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1A6248 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1B3400 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x2896A4 // bytes matched: 0x80  4E800020F821FF617C0802A6FBC10090F80100B0800300F07C7E1B78FBE10098
#define process_map_caller_call                     0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call                            0x297A98 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x297AE8 // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x297B28 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             0x25B8 // Wrong-> -0xDA48 //found at 0x299A8F 25B8E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x164B87 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x66A0 //found at 0x598B3 99604BFFBC25392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x1DD8 //found at 0x277F83 1DD87C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x2048 //found at 0x282057 204878050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x7800 //found at 0x1A157 88003FC0800163DE0005E87D0000
#define patch_func2                                 0x59D84 // bytes matched: 0x80  F821FF617C0802A6FBC100907C9E2378E862995838810070FBA10088FBE10098
#define patch_func2_offset                          0x2C //
#define user_thread_prio_patch                      0x203FC // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x20408 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_75DEX) // Ported by Joonie, special thanks to @aldostools for his awesome Getsymbol tool!!!!
#define TOC                                         0x3758E0 //done
#define open_shared_kernel_object_symbol            0x12A58 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol           0x12078 // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol                                0x681F4 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229FA8E86900004BFFFEB8
#define dealloc_symbol                              0x68630 // bytes matched: 0x50  E9229FA87C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol                         0xFEB4 // bytes matched: 0x80  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol                       0x100D0 // bytes matched: 0x80  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol                      0xFF6C // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol                    0xFD7C // bytes matched: 0x74  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol                        0x63D64 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol                            0x637C8 // bytes matched: 0x80  E9629D787C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol                  0x63F00 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol              0x636BC // bytes matched: 0x80  E8630030480113482BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol               0x73C9C // bytes matched: 0x80  E922A2587C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol                   0x7B348 // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A488FB0100E07C781B78
#define memcpy_symbol                               0x82A08 // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol                               0x51014 // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol                               0x50324 // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define printf_symbol                               0x278978 // Verified with IDA by Joonie
#define printfnull_symbol				0x27D400 // Verified with IDA by Joonie
#define sprintf_symbol                              0x5243C // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A29688F8C100C8F8610078
#define snprintf_symbol                             0x523A8 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol                               0x511C0 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol                              0x51288 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol                               0x511E8 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol                               0x510F0 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol                               0x5116C // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol                              0x51214 // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol                               0x51128 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol                 0x275670 // bytes matched: 0x80  7D0000A6550004202FA00000419E006C380000027C0101643D60ABAD616BCAFE
#define spin_unlock_irqrestore_ex_symbol            0x275644 // bytes matched: 0x80  7C2004AC2F850000380000003920000090030000409E000C7C8101644E800020
#define load_process_symbol                         0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol                    0x145FC // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol                      0x146B4 // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480139258003009054000462
#define ppu_thread_join_symbol                      0x14708 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol                     0x2A6E8 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol                  0x26D30 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol                         0x25868 // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol                           0x2502C // bytes matched: 0x30  7C641B78E863004848003200F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol                      0x26E270 // bytes matched: 0x80  7D800026F821FF712C240000FBC10080FBE10088FBA100787C9F23787C7E1B78
#define allocate_user_stack_symbol                  0x26EA58 // bytes matched: 0x50  F821FF617C0802A6FBA10088F80100B0E803003038C10070FBC100902FA00000
#define mutex_create_symbol                         0x13C8C // bytes matched: 0x7C  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol                        0x13C24 // bytes matched: 0x5C  F821FF817C0802A6FBE10078F80100907C7F1B784800A6952FA300003C008001
#define mutex_lock_symbol                           0x13C1C // bytes matched: 0x64  38A000004800B9ECF821FF817C0802A6FBE10078F80100907C7F1B784800A695
#define mutex_unlock_symbol                         0x13C14 // bytes matched: 0x6C  4800B1344800AD6C38A000004800B9ECF821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol                    0x136C8 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol                   0x13B30 // bytes matched: 0x4C  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_port_connect_symbol                   0x13BA8 // bytes matched: 0x80  F821FF617C0802A6FB610078EB6285A838A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol                0x13AD4 // bytes matched: 0x80  F821FF717C0802A6FB810070EB8285A838800000F80100A0FBA1007838A00000
#define event_port_send_symbol                      0x136C0 // bytes matched: 0x34  38E0000148019C04F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol                   0x139D0 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol                  0x13958 // bytes matched: 0x4C  F821FF717C0802A6FBC10080EBC285A838800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol                  0x1379C // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol                           0x2B27C0 // bytes matched: 0x1C  F821FF517C0802A6FB010070FB610088FBA10098FBC100A07C7D1B78
#define cellFsClose_symbol                          0x2B2628
#define cellFsRead_symbol                           0x2B2764 // bytes matched: 0x34  2C2600007C0802A63D208001F821FF71FBE10080F80100A07CDF33786129000D
#define cellFsWrite_symbol                          0x2B26D0 // bytes matched: 0x24****  FB410080FB6100887CDA33787CBB2B78FB810090FBA100987C9C2378F80100C0
#define cellFsLseek_symbol                          0x2B1F24 // bytes matched: 0x24****  FB410080FB6100887CDA33787C9B2378FB810090FBA100987CBC2B78F80100C0
#define cellFsStat_symbol                           0x2B1FDC // bytes matched: 0x18  F821FF617C0802A6FB610078FBA10088FBC100907C7D1B78
#define cellFsUnlink_internal_symbol                0x1A29D8 // bytes matched: 0x80  F821FEF17C0802A62C240000FBE101083FE08001FB8100F0FBA100F8FBC10100
#define cellFsUtilMount_symbol                      0x2B1C98 // bytes matched: 0x1C  F821FED17C0802A6FB2100F83B210080FAA100D8FBC101207C952378
#define cellFsUtilUmount_symbol                     0x2B1C6C // fixed by Joonie. Old 0x2B1C20 // bytes matched: 0x20**  7C8023787CA62B787C641B787C05037838E00000E93E80B0EBC1FFF0E8690000
#define pathdup_from_user_symbol                    0x2B7A84 // bytes matched: 0x18  F821FF517C0802A6FB210078FB410080FBC100A07C7A1B78
#define open_path_symbol                            0x2B24F8 // bytes matched: 0x28  F821FF617C0802A6FB810080FBA10088FBE10098FB410070FB610078F80100B0
#define open_fs_object_symbol                       0x190CFC // bytes matched: 0x58  7D800026F821FF31FBC100C0EBC2FEC8FB010090FB210098FB4100A0FB6100A8
#define close_fs_object_symbol                      0x18FC38 // bytes matched: 0x80  7C83237838A00000388000004BFDE180E80300F82FA000004D9E002038000000
#define storage_get_device_info_symbol              0x28CA00 // bytes matched: 0x54  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_open_symbol                         0x28CC28 // bytes matched: 0x58  F821FF117C0802A6F861012038610120FB0100B0FB2100B8FB4100C0FB8100D0
#define storage_close_symbol                        0x28B414 // bytes matched: 0x3C  E92222B07C0802A6F821FF51F80100C0FBE100A8FB810090EBE900007C7C1B78
#define storage_read_symbol                         0x28A390 // bytes matched: 0x80  F821FF017C0802A6FB8100E03B810070FBE100F8787F00207F83E378FAE100B8
#define storage_send_device_command_symbol          0x289EB0 // bytes matched: 0x80  E96222B07C0802A6F821FEF1F8010120FBE101087C7F1B78E86B0000FB6100E8
#define storage_map_io_memory_symbol                0x28C8AC // bytes matched: 0x54  F821FF617C0802A6F86100D0386100D0FB610078FB810080FBA10088FBC10090
#define storage_unmap_io_memory_symbol              0x28C768 // bytes matched: 0x4C  F821FF717C0802A6F86100C0386100C0FB810070FBA10078FBC10080FBE10088
#define storage_internal_get_device_object_symbol   0x289968 // bytes matched: 0x80  F821FF717C0802A6FBA10078F80100A0E80300007CBD2B78FBC100802FA00000
#define decrypt_func_symbol                         0x38290 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol                  0x52850 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol                 0x5C488 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE96299F878891788
#define prx_load_module_symbol                      0x8D308 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol                     0x8BFD4 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol                      0x8D3AC // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol                    0x8BD08 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol                  0x8B700 // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol                  0x8B780 // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol                        0x73BF4 // bytes matched: 0x18  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B78
#define get_pseudo_random_number_symbol             0x22E65C // bytes matched: 0x40**  7C8523787C04037848000404480001E4F821FF717C0802A6FB810070FBC10080
#define syscall_table_symbol                        0x38A3E8 //done
#define syscall_call_offset                         0x27DEE4 // bytes matched: 0x34  4E80002138210070F821FFB1F8610008F8810010F8A10018F8C10020F8E10028
#define read_bdvd0_symbol                           0x1AAACC // bytes matched: 0x20  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol                           0x1AC6F8 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol                           0x1B98B0 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call                 0x29E2F0 // bytes matched: 0x10*  F821FF617C0802A6FBC10090F80100B0
#define process_map_caller_call                     0x4D24 // bytes matched: 0x80  480160A92F8300007C7D1B78419EFF1C807B000048016461E80100D0EB010080
#define fsloop_open_call                            0x2B2958 // bytes matched: 0x80  4BFFFE697C6307B44BFFFFC08063000880AA00187C6307B4E8CA00207CA507B4
#define fsloop_close_call                           0x2B29A8 // bytes matched: 0x68  4BFFFC817C6307B44BFFFF7080630008E8CA00207C6307B4E88A0010E8AA0018
#define fsloop_read_call                            0x2B29E8 // bytes matched: 0x28  4BFFFD7D7C6307B44BFFFF30F821FF317C0802A6FB010090FB6100A8FBA100B8
#define io_rtoc_entry_1                             0x2EC0 // Wrong-> -0xD140 //found at 0x2B4C2E 2EC0E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1                         -0x7EA0 //found at 0x16AF12 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2                        -0x65C0 //found at 0x5D282 9A404BFFBC25392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1                        0x22B0 //found at 0x289BF2 22B07C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1                   0x2638 //found at 0x296BE6 263878050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1                        -0x77A0 //found at 0x1BC06 88603FC0800163DE0005E87D0000
#define patch_func2                                 0x5D754 // bytes matched: 0x2C  F821FF617C0802A6FBC100907C9E2378E8629A3838810070FBA10088FBE10098
#define patch_func2_offset                          0x2C
#define user_thread_prio_patch                      0x21EAC // bytes matched: 0x58  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2                     0x21EB8 // bytes matched: 0x4C  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6

#elif defined(FIRMWARE_4_76) 
#define TOC							0x34FBB0 //done
#define open_shared_kernel_object_symbol		0x12410 // bytes matched: 0x80  F821FF317C0802A6FB8100B0FBC100C0FBE100C8F80100E0789C84027CE03B78
#define close_kernel_object_handle_symbol		0x11A30 // bytes matched: 0x44  F821FF517C0802A6FBA10098FBE100A8FB410080FB610088FB810090FBC100A0
#define alloc_symbol					0x64824 // bytes matched: 0x80  2C2300007C85237838C000007C641B784D820020E9229EC8E86900004BFFFEB8
#define dealloc_symbol					0x64C60 // bytes matched: 0x80  E9229EC87C85237838C000007C641B78E86900004BFFFBD0F821FF717C0802A6
#define copy_to_user_symbol				0xF86C // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE100887C7E1B78FB810070
#define copy_from_user_symbol				0xFA88 // bytes matched: 0x64  2C2500007C0802A6F821FF71FBA10078FBC10080FBE10088FB8100707C7F1B78
#define copy_to_process_symbol				0xF924 // bytes matched: 0x80  F821FF317C0802A62C250000FB6100A83F608001FB210098FB8100B0FAE10088
#define copy_from_process_symbol			0xF734 // bytes matched: 0x80  F821FF417C0802A62C240000FB6100983F608001FB210088FB8100A0FB010080
#define page_allocate_symbol				0x60394 // bytes matched: 0x60  7C8023787CA92B787CCB33787CE83B787C641B787C0503787D264B787D675B78
#define page_free_symbol				0x5FDF8 // bytes matched: 0x80  E9629C987C0802A6F821FF61F80100B0FBC10090FBE10098E92B00007C7F1B78
#define page_export_to_proc_symbol			0x60530 // bytes matched: 0x80  F821FF717C0802A63D20000CF80100A054A0031AFBE100887FA048003D208001
#define page_unexport_from_proc_symbol		        0x5FCEC // bytes matched: 0x80  E8630030480110882BA3003C7C0802A6F821FF91F80100807C8B23787C601B78
#define kernel_ea_to_lpar_addr_symbol			0x7014C // bytes matched: 0x80  E922A1787C0802A6F821FF51F80100C0FBC100A0FB610088EBC900007C9B2378
#define map_process_memory_symbol			0x7726C // bytes matched: 0x7C  7D800026F821FEE1FAC100D07CF63B78FB810100EB82A3A8FB0100E07C781B78
#define memcpy_symbol					0x7E92C // bytes matched: 0x80  2BA500077C6B1B78419D002C2C2500007C691B784D8200207CA903A688040000
#define memset_symbol					0x4D66C // bytes matched: 0x80  2BA500177C6A1B78419D00242FA500004D9E00207C8023787CA903A6980A0000
#define memcmp_symbol					0x4C97C // bytes matched: 0x80  38A500017CA903A642400030880300003863000189240000388400017F890000
#define sprintf_symbol					0x4EA94 // bytes matched: 0x80  F821FF817C0802A6F8A100C0F8010090380100C0E8A295A8F8C100C8F8610078
#define snprintf_symbol					0x4EA00 // bytes matched: 0x80  F821FF717C0802A6F8C100D8F80100A0380100D8F8610078908100807CA32B78
#define strcpy_symbol					0x4D818 // bytes matched: 0x80  880400002F800000980300004D9E00207C691B788C0400012F8000009C090001
#define strncpy_symbol					0x4D8E0 // bytes matched: 0x80  2C2500004D820020880400007C6B1B78394000002F80000098030000419E0034
#define strlen_symbol					0x4D840 // bytes matched: 0x80  7C691B7838600000880900002F8000004D9E00207D234B788C0300012F800000
#define strcat_symbol					0x4D748 // bytes matched: 0x80  880300007C691B782F800000419E00108C0900012F800000409EFFF888040000
#define strcmp_symbol					0x4D7C4 // bytes matched: 0x80  880300007C691B78896400007F8B00007C0B0050409E002C2F8B0000409E000C
#define strncmp_symbol					0x4D86C // bytes matched: 0x80  2C2500004182005089640000892300005560063E7F895800409E00482F800000
#define strchr_symbol					0x4D780 // bytes matched: 0x80  880300002F800000419E00247F802000409E000C48000024419A00208C030001
#define spin_lock_irqsave_ex_symbol			0x26D798 // Confirmed
#define spin_unlock_irqrestore_ex_symbol		0x26D76C // Confirmed
#define load_process_symbol				0x5004 // bytes matched: 0x80  7D800026F821FF11FAC100A0FB6100C8FB8100D07C7B1B787CB62B787C9C2378
#define ppu_thread_create_symbol			0x13EC8 // bytes matched: 0x80  7D800026F821FF81FBC10070FBE100787C7E1B787CDF3378918100887C0802A6
#define ppu_thread_exit_symbol				0x13F80 // bytes matched: 0x44  F821FF817C0802A6FBE10078F80100907C7F1B78480122598003009054000462
#define ppu_thread_join_symbol				0x13FD4 // bytes matched: 0x80  F821FF617C0802A6FB810080F80100B0FBA10088FBC100907C7D1B78FBE10098
#define ppu_thread_delay_symbol				0x287A4 // bytes matched: 0x64  F821FF017C0802A6FAC100B0FAE100B8FB6100D8FBA100E8FBC100F0FB0100C0
#define create_user_thread2_symbol			0x25080 // bytes matched: 0x80  F821FEF17C0802A6FA8100B0F8010120800900287CD43378FAA100B8FAC100C0
#define start_thread_symbol				0x23D4C // bytes matched: 0x80  7D800026F821FF61FB410070FB610078FB810080FBA10088FBC10090FBE10098
#define run_thread_symbol				0x2357C // bytes matched: 0x30  7C641B78E863004848002EB0F821FF717C0802A6FBC100807C7E1B78FBA10078
#define register_thread_symbol				0x26794C // Confirmed
#define allocate_user_stack_symbol			0x268134 // Confirmed
#define mutex_create_symbol				0x1363C // bytes matched: 0x80  2F8500207C0802A6F821FF71FBA10078FBC10080FBE10088F80100A07CBF2B78
#define mutex_destroy_symbol				0x135D4 // bytes matched: 0x80  F821FF817C0802A6FBE10078F80100907C7F1B78480092352FA300003C008001
#define mutex_lock_symbol				0x135CC // bytes matched: 0x80  38A000004800A58CF821FF817C0802A6FBE10078F80100907C7F1B7848009235
#define mutex_unlock_symbol				0x135C4 // bytes matched: 0x80  48009CD44800990C38A000004800A58CF821FF817C0802A6FBE10078F8010090
#define event_port_create_symbol			0x13078 // bytes matched: 0x80  F821FF717C0802A6FBA10078FBC1008038A000007C7E1B787C9D237838600020
#define event_port_destroy_symbol			0x134E0 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_port_connect_symbol			0x13558 // bytes matched: 0x80  F821FF617C0802A6FB610078EB62859038A00000F80100B0FB810080FBA10088
#define event_port_disconnect_symbol			0x13484 // bytes matched: 0x80  F821FF717C0802A6FB810070EB82859038800000F80100A0FBA1007838A00000
#define event_port_send_symbol				0x13070 // bytes matched: 0x80  38E0000148018190F821FF717C0802A6FBA10078FBC1008038A000007C7E1B78
#define event_queue_create_symbol			0x13380 // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B03806FFFF3FE080012B80007E3804FFFF
#define event_queue_destroy_symbol			0x13308 // bytes matched: 0x80  F821FF717C0802A6FBC10080EBC2859038800000F80100A0FBA1007838A00000
#define event_queue_receive_symbol			0x1314C // bytes matched: 0x80  F821FF617C0802A6FBE10098F80100B0812300883FE08001380000002F890001
#define cellFsOpen_symbol				0x297900 // Confirmed
#define cellFsClose_symbol				0x297768 // Confirmed
#define cellFsRead_symbol				0x2978A4 // Confirmed
#define cellFsWrite_symbol				0x297810 // Confirmed
#define cellFsLseek_symbol				0x296E98 // Confirmed
#define cellFsStat_symbol				0x29711C // Confirmed
#define cellFsUnlink_internal_symbol			0x19C64C // Confirmed
#define cellFsUtilMount_symbol				0x296C78 // Confirmed
#define cellFsUtilUmount_symbol 			0x296C4C // Confirmed
#define pathdup_from_user_symbol			0x29C8E4 // Confirmed
#define	open_path_symbol				0x297638 // Confirmed
#define open_fs_object_symbol				0x18A970 //  Confirmed
#define close_fs_object_symbol				0x1898AC // Confirmed
#define storage_get_device_info_symbol			0x279B00 // Confirmed
#define storage_open_symbol				0x279510 //Confirmed
#define storage_close_symbol				0x279300 // Confirmed
#define storage_read_symbol				0x278870 //Confirmed
#define storage_send_device_command_symbol		0x2783FC // Confirmed
#define storage_map_io_memory_symbol			0x2799BC // Confirmed
#define storage_unmap_io_memory_symbol		        0x279888 // Confirmed
#define storage_internal_get_device_object_symbol	0x277EB4 // Confirmed
#define decrypt_func_symbol				0x34970 // bytes matched: 0x64  F821FF717C0802A6FB810070FBA100787C7C1B787C9D2378F80100A04BFFFF95
#define lv1_call_99_wrapper_symbol			0x4EEA8 // bytes matched: 0x64  F821FF717C0802A6FBA100787C7D1B78FB810070386300807C9C2378F80100A0
#define modules_verification_symbol			0x58AB8 // bytes matched: 0x80  3884FFFA7C0802A6F821FF912B840036F8010080419D00FCE962991878891788
#define prx_load_module_symbol				0x88C04 // bytes matched: 0x80  F821FF717C0802A6FB8100707CBC2B7838A00001FBA10078FBC10080FBE10088
#define prx_start_module_symbol				0x878D0 // bytes matched: 0x80  7D800026F821FEF1FB2100D8FB4100E07C7907B47C9A2378FB0100D0FB8100F0
#define prx_stop_module_symbol				0x88CA8 // bytes matched: 0x80  F821FF617C0802A6FBA10088FBC100907C7D1B787C9E2378FB810080F80100B0
#define prx_unload_module_symbol			0x87604 // bytes matched: 0x80  F821FF617C0802A6FB810080FBC100907C7C07B47C9E2378FBA10088FBE10098
#define prx_get_module_info_symbol			0x8708C // bytes matched: 0x80  F821FF517C0802A6FB210078FB410080FB610088FB810090FBA100987CBB2B78
#define prx_get_module_list_symbol			0x8710C // bytes matched: 0x80  F821FF517C0802A6FB010070FB210078FB410080FB610088FB810090FBA10098
#define extend_kstack_symbol				0x700A4 // bytes matched: 0x44  F821FF717C0802A6FB810070F80100A0FBA100787C7D1B784BFB6131E922A138
#define get_pseudo_random_number_symbol		0x228180 // Confirmed
#define syscall_table_symbol				0x363BE0 // Confirmed
#define syscall_call_offset				0x275C04 // Confirmed
#define read_bdvd0_symbol				0x1A461C // bytes matched: 0x80  F821FEB17C0802A6FB0101107C781B78F8010160F9C100C0FBC101407C8E2378
#define read_bdvd1_symbol				0x1A6248 // bytes matched: 0x80  F821FF317C0802A6FB8100B0F80100E0EB8300207CA02B78FAE100882FBC0000
#define read_bdvd2_symbol				0x1B3400 // bytes matched: 0x80  F821FF517C0802A6FBE100A8F80100C07C7F1B78E8630090FB610088FB810090
#define device_event_port_send_call			0x28206C // Confirmed
#define process_map_caller_call				0x4D24 // bytes matched: 0x10*  2F8300007C7D1B78419EFF1C807B0000
#define fsloop_open_call					0x297A98 // Confirmed
#define fsloop_close_call					0x297AE8 //  Confirmed
#define fsloop_read_call					0x297B28 //  Confirmed
#define io_rtoc_entry_1					0x25B8 // Fixed!
#define io_sub_rtoc_entry_1				-0x7EA0 //found at 0x164B87 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2 				-0x66A0 //found at 0x598B3 99604BFFBC25392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1				0x1DD8 //found at 0x277F83 1DD87C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1			0x2048 //found at 0x282057 204878050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1				-0x7800 //found at 0x1A157 88003FC0800163DE0005E87D0000
#define patch_func2 					0x59D84 // Confirmed
#define patch_func2_offset 				0x2C 
#define user_thread_prio_patch				0x203FC // bytes matched: 0x34  419DFF842B9E0BFF900100D0419D02587B8007A03FE080012FA0000363FF0009
#define user_thread_prio_patch2				0x20408 // bytes matched: 0x28  419D02587B8007A03FE080012FA0000363FF0009419EFF64FB4100B87D3042A6
#elif defined(FIRMWARE_4_76DEX) // Ported by Joonie, special thanks to @aldostools for his awesome Getsymbol tool!!!!
#define TOC						0x3758E0 //Verified with IDA by Joonie
#define open_shared_kernel_object_symbol		0x12A58 // Verified with IDA by Joonie
#define close_kernel_object_handle_symbol		0x12078 // Verified with IDA by Joonie
#define alloc_symbol					0x681F4 // Verified with IDA by Joonie
#define dealloc_symbol					0x68630 // Verified with IDA by Joonie
#define copy_to_user_symbol				0xFEB4 // Verified with IDA by Joonie
#define copy_from_user_symbol				0x100D0 //Verified with IDA by Joonie
#define copy_to_process_symbol				0xFF6C // Verified with IDA by Joonie
#define copy_from_process_symbol			0xFD7C // Verified with IDA by Joonie
#define page_allocate_symbol				0x63D64 // Verified with IDA by Joonie
#define page_free_symbol				0x637C8 // Verified with IDA by Joonie
#define page_export_to_proc_symbol			0x63F00 // Verified with IDA by Joonie
#define page_unexport_from_proc_symbol			0x636BC // Verified with IDA by Joonie
#define kernel_ea_to_lpar_addr_symbol			0x73C9C // Verified with IDA by Joonie
#define map_process_memory_symbol			0x7B348 // Verified with IDA by Joonie
#define memcpy_symbol					0x82A08 // Verified with IDA by Joonie
#define memset_symbol					0x51014 // Verified with IDA by Joonie
#define memcmp_symbol					0x50324 // Verified with IDA by Joonie
#define sprintf_symbol					0x5243C // Verified with IDA by Joonie
#define snprintf_symbol					0x523A8 // Verified with IDA by Joonie
#define strcpy_symbol					0x511C0 // Verified with IDA by Joonie
#define strncpy_symbol					0x51288 // Verified with IDA by Joonie
#define strlen_symbol					0x511E8 // Verified with IDA by Joonie
#define strcat_symbol					0x510F0 // Verified with IDA by Joonie
#define strcmp_symbol					0x5116C // Verified with IDA by Joonie
#define strncmp_symbol					0x51214 // Verified with IDA by Joonie
#define strchr_symbol					0x51128 // Verified with IDA by Joonie
#define spin_lock_irqsave_ex_symbol			0x275670 // Verified with IDA by Joonie
#define spin_unlock_irqrestore_ex_symbol		0x275644 // Verified with IDA by Joonie
#define load_process_symbol				0x5004 // Verified with IDA by Joonie
#define ppu_thread_create_symbol			0x145FC // Verified with IDA by Joonie
#define ppu_thread_exit_symbol                          0x146B4 // Verified with IDA by Joonie
#define ppu_thread_join_symbol				0x14708 // Verified with IDA by Joonie
#define ppu_thread_delay_symbol				0x2A6E8 // Verified with IDA by Joonie
#define create_user_thread2_symbol			0x26D30 // Verified with IDA by Joonie
#define start_thread_symbol				0x25868 // Verified with IDA by Joonie
#define run_thread_symbol				0x2502C // Verified with IDA by Joonie
#define register_thread_symbol				0x26E270 // Verified with IDA by Joonie
#define allocate_user_stack_symbol			0x26EA58 // Verified with IDA by Joonie
#define mutex_create_symbol				0x13C8C // Verified with IDA by Joonie
#define mutex_destroy_symbol                            0x13C24 // Verified with IDA by Joonie
#define mutex_lock_symbol				0x13C1C // Verified with IDA by Joonie
#define mutex_unlock_symbol                             0x13C14 // Verified with IDA by Joonie
#define event_port_create_symbol			0x136C8 //  Verified with IDA by Joonie
#define event_port_destroy_symbol                       0x13B30 // Verified with IDA by Joonie
#define event_port_connect_symbol			0x13BA8 // Verified with IDA by Joonie
#define event_port_disconnect_symbol			0x13AD4 // Verified with IDA by Joonie
#define event_port_send_symbol				0x136C0 // Verified with IDA by Joonie
#define event_queue_create_symbol			0x139D0 // Verified with IDA by Joonie
#define event_queue_destroy_symbol                      0x13958 // Verified with IDA by Joonie
#define event_queue_receive_symbol			0x1379C // Verified with IDA by Joonie
#define cellFsOpen_symbol				0x2B27C0 // Verified with IDA by Joonie
#define cellFsClose_symbol                              0x2B2628 // Verified with IDA by Joonie
#define cellFsRead_symbol				0x2B2764 // Verified with IDA by Joonie
#define cellFsWrite_symbol				0x2B26D0 // Verified with IDA by Joonie
#define cellFsLseek_symbol				0x2B1F24 // Verified with IDA by Joonie
#define cellFsStat_symbol				0x2B1FDC // Verified with IDA by Joonie
#define cellFsUnlink_internal_symbol			0x1A29D8 // Verified with IDA by Joonie
#define cellFsUtilMount_symbol				0x2B1C98 // Verified with IDA by Joonie
#define cellFsUtilUmount_symbol				0x2B1C6C // Verified with IDA by Joonie
#define pathdup_from_user_symbol			0x2B7A84 // Verified with IDA by Joonie
#define open_path_symbol                                0x2B24F8 // Verified with IDA by Joonie
#define open_fs_object_symbol                           0x190CFC // Verified with IDA by Joonie
#define close_fs_object_symbol				0x18FC38 // Verified with IDA by Joonie
#define storage_get_device_info_symbol			0x28CA00 // Verified with IDA by Joonie
#define storage_open_symbol                             0x28CC28 // Verified with IDA by Joonie
#define storage_close_symbol                            0x28B414 // Verified with IDA by Joonie
#define storage_read_symbol                             0x28A390 // Verified with IDA by Joonie
#define storage_send_device_command_symbol              0x289EB0 // Verified with IDA by Joonie
#define storage_map_io_memory_symbol                    0x28C8AC // Verified with IDA by Joonie
#define storage_unmap_io_memory_symbol                  0x28C768 // Verified with IDA by Joonie
#define storage_internal_get_device_object_symbol       0x289968 // Verified with IDA by Joonie
#define decrypt_func_symbol				0x38290 // Verified with IDA by Joonie
#define lv1_call_99_wrapper_symbol			0x52850 // Verified with IDA by Joonie
#define modules_verification_symbol			0x5C488 // Verified with IDA by Joonie
#define prx_load_module_symbol				0x8D308 // Verified with IDA by Joonie
#define prx_start_module_symbol				0x8BFD4 // Verified with IDA by Joonie
#define prx_stop_module_symbol				0x8D3AC // Verified with IDA by Joonie
#define prx_unload_module_symbol			0x8BD08 // Verified with IDA by Joonie
#define prx_get_module_info_symbol			0x8B700 // Verified with IDA by Joonie
#define prx_get_module_list_symbol			0x8B780 // Verified with IDA by Joonie
#define extend_kstack_symbol				0x73BF4 // Verified with IDA by Joonie
#define get_pseudo_random_number_symbol                 0x22E65C // Verified with IDA by Joonie
#define syscall_table_symbol				0x38A3E8 //Verified with IDA by Joonie
#define syscall_call_offset				0x27DEE4 // Verified with IDA by Joonie
#define read_bdvd0_symbol				0x1AAACC // Verified with IDA by Joonie
#define read_bdvd1_symbol				0x1AC6F8 // Verified with IDA by Joonie
#define read_bdvd2_symbol				0x1B98B0 // Verified with IDA by Joonie
#define device_event_port_send_call			0x296BFC // Verified with IDA by Joonie
#define process_map_caller_call				0x4D24 // Verified with IDA by Joonie
#define fsloop_open_call				0x2B2958 // Verified with IDA by Joonie
#define fsloop_close_call				0x2B29A8 // Verified with IDA by Joonie
#define fsloop_read_call				0x2B29E8 // Verified with IDA by Joonie
#define io_rtoc_entry_1					0x2EC0 // FIXED!
#define io_sub_rtoc_entry_1				-0x7EA0 //found at 0x16AF13 8160E97E8168EB9E8140EBBE8170
#define decrypt_rtoc_entry_2 				-0x65C0 //found at 0x5D283 9A404BFFBC25392000004BFFFFCC2C2400007C0802A6
#define storage_rtoc_entry_1				0x22B0 //found at 0x289BF3 22B07C0802A6F821FF51F80100C0FBE100A87C9F23
#define device_event_rtoc_entry_1			0x2638 //found at 0x296BE7 263878050620E8CA00387D052B78E92B0000
#define process_rtoc_entry_1				-0x77A0 //found at 0x1BC07 88603FC0800163DE0005E87D0000
#define patch_func2 					0x5D754 // Verified with IDA by Joonie
#define patch_func2_offset 				0x2C
#define user_thread_prio_patch				0x21EAC // Verified with IDA by Joonie
#define user_thread_prio_patch2				0x21EB8 // Verified with IDA by Joonie 
#endif /* FIRMWARE */
#endif /* __FIRMWARE_SYMBOLS_H_S__ */

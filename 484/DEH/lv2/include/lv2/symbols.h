/* Keep this file language agnostic. Only preprocessor here. */

#ifndef __FIRMWARE_SYMBOLS_H_S__
#define __FIRMWARE_SYMBOLS_H_S__

#if defined(FIRMWARE_4_84)

#define TOC 											0x34FBB0

#define create_kernel_object_symbol						0x11FB0
#define destroy_kernel_object_symbol					0x11914
#define destroy_shared_kernel_object_symbol				0x11288
#define open_kernel_object_symbol						0x12600
#define open_shared_kernel_object_symbol				0x12410
#define close_kernel_object_handle_symbol				0x11A30

#define alloc_symbol									0x64824
#define dealloc_symbol									0x64C60
#define copy_to_user_symbol								0xF86C
#define copy_from_user_symbol							0xFA88
#define copy_to_process_symbol							0xF924
#define copy_from_process_symbol						0xF734
#define page_allocate_symbol							0x60394
#define page_free_symbol								0x5FDF8
#define page_export_to_proc_symbol						0x60530
#define page_unexport_from_proc_symbol					0x5FCEC
#define kernel_ea_to_lpar_addr_symbol					0x7014C
#define process_ea_to_lpar_addr_ex_symbol				0x77760
#define set_pte_symbol                      			0x5E390
#define map_process_memory_symbol						0x7726C
#define panic_symbol									0x26D5C8

#define memcpy_symbol									0x7E92C
#define memset_symbol									0x4D66C
#define memcmp_symbol									0x4C97C
#define memchr_symbol									0x4C92C
#define printf_symbol									0x2706AC
#define printfnull_symbol								0x275120
#define sprintf_symbol				    				0x4EA94
#define snprintf_symbol				    				0x4EA00
#define strcpy_symbol									0x4D818
#define strncpy_symbol									0x4D8E0
#define strlen_symbol									0x4D840
#define strcat_symbol									0x4D748
#define strcmp_symbol									0x4D7C4
#define strncmp_symbol									0x4D86C
#define strchr_symbol									0x4D780
#define strrchr_symbol									0x4D950

#define spin_lock_irqsave_ex_symbol						0x26D798
#define spin_unlock_irqrestore_ex_symbol				0x26D76C

#define create_process_common_symbol					0x26B534
#define create_process_base_symbol						0x26ABF0
#define load_process_symbol								0x5004
#define process_kill_symbol								0x26B340

#define ppu_thread_create_symbol						0x13EC8
#define ppu_thread_exit_symbol							0x13F80
#define ppu_thread_join_symbol							0x13FD4
#define ppu_thread_delay_symbol							0x287A4
#define create_kernel_thread_symbol						0x24B20
#define create_user_thread_symbol						0x2525C
#define create_user_thread2_symbol						0x25080
#define start_thread_symbol								0x23D4C
#define run_thread_symbol								0x2357C
#define register_thread_symbol							0x26794C
#define allocate_user_stack_symbol						0x268134
#define deallocate_user_stack_symbol					0x26809C

#define mutex_create_symbol								0x1363C
#define mutex_destroy_symbol							0x135D4
#define mutex_lock_symbol								0x135CC
#define mutex_lock_ex_symbol							0x1DB5C
#define mutex_trylock_symbol							0x135C8
#define mutex_unlock_symbol								0x135C4

#define cond_create_symbol								0x137A8
#define cond_destroy_symbol								0x13758
#define cond_wait_symbol								0x13750
#define cond_wait_ex_symbol								0x1F148
#define cond_signal_symbol								0x1372C
#define cond_signal_all_symbol							0x13708

#define semaphore_initialize_symbol						0x30C54
#define semaphore_wait_ex_symbol						0x3095C
#define semaphore_trywait_symbol						0x30544
#define semaphore_post_ex_symbol						0x30690

#define event_port_create_symbol						0x13078
#define event_port_destroy_symbol						0x134E0
#define event_port_connect_symbol						0x13558
#define event_port_disconnect_symbol					0x13484
#define event_port_send_symbol							0x13070
#define event_port_send_ex_symbol						0x2B204

#define event_queue_create_symbol						0x13380
#define event_queue_destroy_symbol						0x13308
#define event_queue_receive_symbol						0x1314C
#define event_queue_tryreceive_symbol					0x13218

#define cellFsOpen_symbol								0x297900
#define cellFsClose_symbol								0x297768
#define cellFsRead_symbol								0x2978A4
#define cellFsWrite_symbol								0x297810
#define cellFsLseek_symbol								0x296E98
#define cellFsStat_symbol								0x29711C
#define cellFsUtime_symbol 								0x298C08
#define cellFsUnlink_internal_symbol   		 			0x19C64C

#define cellFsUtilMount_symbol							0x296C78
#define cellFsUtilUmount_symbol 						0x296C4C
#define cellFsUtilNewfs_symbol							0x2986A0

#define pathdup_from_user_symbol						0x29C8E4
#define open_path_symbol								0x297638
#define open_fs_object_symbol							0x18A970
#define close_fs_object_symbol							0x1898AC

#define storage_get_device_info_symbol					0x279B00
#define storage_get_device_config_symbol				0x278F90
#define storage_open_symbol								0x279510
#define storage_close_symbol							0x279300
#define storage_read_symbol								0x278870
#define storage_write_symbol							0x278740
#define storage_send_device_command_symbol				0x2783FC
#define storage_map_io_memory_symbol					0x2799BC
#define storage_unmap_io_memory_symbol		    		0x279888
#define new_medium_listener_object_symbol				0x974C4
#define delete_medium_listener_object_symbol			0x98CFC
#define set_medium_event_callbacks_symbol				0x99060

#define cellUsbdRegisterLdd_symbol						0x26027C
#define cellUsbdUnregisterLdd_symbol					0x26022C
#define cellUsbdScanStaticDescriptor_symbol				0x26147C
#define cellUsbdOpenPipe_symbol			        		0x26152C
#define cellUsbdClosePipe_symbol						0x2614DC
#define cellUsbdControlTransfer_symbol					0x2613E0
#define cellUsbdBulkTransfer_symbol						0x261360

#define decrypt_func_symbol								0x34970
#define lv1_call_99_wrapper_symbol						0x4EEA8
#define modules_verification_symbol						0x58AB8
#define authenticate_program_segment_symbol				0x5A910

#define prx_load_module_symbol							0x88C04
#define prx_start_module_symbol							0x878D0
#define prx_stop_module_symbol							0x88CA8
#define prx_unload_module_symbol						0x87604
#define prx_get_module_info_symbol						0x8708C
#define prx_get_module_id_by_address_symbol				0x86F9C
#define prx_get_module_id_by_name_symbol				0x86FEC
#define prx_get_module_list_symbol						0x8710C
#define load_module_by_fd_symbol						0x88234
#define parse_sprx_symbol								0x85FB8
#define open_prx_object_symbol							0x7F4F8
#define close_prx_object_symbol							0x7FE08
#define lock_prx_mutex_symbol							0x86F44
#define unlock_prx_mutex_symbol							0x86F50

#define extend_kstack_symbol							0x700A4

#define get_pseudo_random_number_symbol					0x228180
#define md5_reset_symbol								0x161E20
#define md5_update_symbol								0x1628C0
#define md5_final_symbol								0x162A40
#define ss_get_open_psid_symbol							0x22A668
#define update_mgr_read_eeprom_symbol					0x223A78
#define update_mgr_write_eeprom_symbol					0x2239C0

#define ss_params_get_update_status_symbol				0x50AB4

#define syscall_table_symbol							0x363BE0
#define syscall_call_offset								0x275C04

#define read_bdvd0_symbol								0x1A461C
#define read_bdvd1_symbol								0x1A6248
#define read_bdvd2_symbol								0x1B3400

#define storage_internal_get_device_object_symbol		0x277EB4

#define hid_mgr_read_usb_symbol	    					0x102444
#define hid_mgr_read_bt_symbol							0xFC31C

#define bt_set_controller_info_internal_symbol			0xF0388

/* Calls, jumps */
#define device_event_port_send_call						0x28206C

#define ss_pid_call_1									0x21329C

#define process_map_caller_call							0x4D24

#define read_module_header_call							0x7F3EC
#define read_module_body_call							0x671C
#define load_module_by_fd_call1							0x88AA0

#define shutdown_copy_params_call						0xAACC

#define fsloop_open_call								0x297A98
#define fsloop_close_call								0x297AE8
#define fsloop_read_call								0x297B28

/* Patches */
#define shutdown_patch_offset							0xAAB8
#define module_sdk_version_patch_offset					0x26717C
#define module_add_parameter_to_parse_sprxpatch_offset	0x88310

#define user_thread_prio_patch							0x203FC
#define user_thread_prio_patch2							0x20408

#define lic_patch										0x56230
#define ode_patch										0x2275F4

/* Rtoc entries */

#define io_rtoc_entry_1									0x25B8
#define io_sub_rtoc_entry_1								-0x7EA0
#define decrypt_rtoc_entry_2 							-0x66A0
#define decrypter_data_entry							-0x7F10

#define storage_rtoc_entry_1							0x1DD8

#define device_event_rtoc_entry_1						0x2048

#define time_rtoc_entry_1								-0x7640
#define time_rtoc_entry_2								-0x7648

#define thread_rtoc_entry_1								-0x76C0

#define process_rtoc_entry_1							-0x7800

#define bt_rtoc_entry_1									-0x3680

/* Permissions */
#define permissions_func_symbol							0x3560
#define permissions_exception1							0x25100
#define permissions_exception2							0xC3298
#define permissions_exception3							0x204D0

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset								0x3E2E40
#define patch_func2_offset 								0x59DB0
#define patch_func8_offset1 							0x564B0
#define patch_func8_offset2 							0x56614
#define patch_func9_offset 								0x5A6F8
#define mem_base2										0x3D90

/* vars */
#define thread_info_symbol								0x37DE30


#elif defined(FIRMWARE_4_84DEX)

#define TOC 											0x3759C0

#define create_kernel_object_symbol						0x125F8
#define destroy_kernel_object_symbol					0x11F5C
#define destroy_shared_kernel_object_symbol				0x118D0
#define open_kernel_object_symbol						0x12C48
#define open_shared_kernel_object_symbol				0x12A58
#define close_kernel_object_handle_symbol				0x12078

#define alloc_symbol									0x681F4
#define dealloc_symbol									0x68630
#define copy_to_user_symbol								0xFEB4
#define copy_from_user_symbol							0x100D0
#define copy_to_process_symbol							0xFF6C
#define copy_from_process_symbol						0xFD7C
#define page_allocate_symbol							0x63D64
#define page_free_symbol								0x637C8
#define page_export_to_proc_symbol						0x63F00
#define page_unexport_from_proc_symbol					0x636BC
#define kernel_ea_to_lpar_addr_symbol					0x73C9C
#define process_ea_to_lpar_addr_ex_symbol				0x7B83C
#define set_pte_symbol                      			0x61D60
#define map_process_memory_symbol						0x7B348
#define panic_symbol									0x2754A0

#define memcpy_symbol									0x82A08
#define memset_symbol									0x51014
#define memcmp_symbol									0x50324
#define memchr_symbol									0x502D4
#define printf_symbol									0x278978
#define printfnull_symbol								0x27D400
#define sprintf_symbol				    				0x5243C
#define snprintf_symbol				    				0x523A8
#define strcpy_symbol									0x511C0
#define strncpy_symbol									0x51288
#define strlen_symbol									0x511E8
#define strcat_symbol									0x510F0
#define strcmp_symbol									0x5116C
#define strncmp_symbol									0x51214
#define strchr_symbol									0x51128
#define strrchr_symbol									0x512F8

#define spin_lock_irqsave_ex_symbol						0x275670
#define spin_unlock_irqrestore_ex_symbol				0x275644

#define create_process_common_symbol					0x272468
#define create_process_base_symbol						0x271B00
#define load_process_symbol								0x5004
#define process_kill_symbol								0x272268

#define ppu_thread_create_symbol						0x145FC
#define ppu_thread_exit_symbol							0x146B4
#define ppu_thread_join_symbol							0x14708
#define ppu_thread_delay_symbol							0x2A6E8
#define create_kernel_thread_symbol						0x267D0
#define create_user_thread_symbol						0x26F0C
#define create_user_thread2_symbol						0x26D30
#define start_thread_symbol								0x25868
#define run_thread_symbol								0x2502C
#define register_thread_symbol							0x26E270
#define allocate_user_stack_symbol						0x26EA58
#define deallocate_user_stack_symbol					0x26E9C0

#define mutex_create_symbol								0x13C8C
#define mutex_destroy_symbol							0x13C24
#define mutex_lock_symbol								0x13C1C
#define mutex_lock_ex_symbol							0x1F60C
#define mutex_trylock_symbol							0x13C18
#define mutex_unlock_symbol								0x13C14

#define cond_create_symbol								0x13DF8
#define cond_destroy_symbol								0x13DA8
#define cond_wait_symbol								0x13DA0
#define cond_wait_ex_symbol								0x20BF8
#define cond_signal_symbol								0x13D7C
#define cond_signal_all_symbol							0x13D58

#define semaphore_initialize_symbol						0x34574
#define semaphore_wait_ex_symbol						0x3427C
#define semaphore_trywait_symbol						0x33E64
#define semaphore_post_ex_symbol						0x33FB0

#define event_port_create_symbol						0x136C8
#define event_port_destroy_symbol						0x13B30
#define event_port_connect_symbol						0x13BA8
#define event_port_disconnect_symbol					0x13AD4
#define event_port_send_symbol							0x136C0
#define event_port_send_ex_symbol						0x2D2C8

#define event_queue_create_symbol						0x139D0
#define event_queue_destroy_symbol						0x13958
#define event_queue_receive_symbol						0x1379C
#define event_queue_tryreceive_symbol					0x13868

#define cellFsOpen_symbol								0x2B2898
#define cellFsClose_symbol								0x2B2700
#define cellFsRead_symbol								0x2B283C
#define cellFsWrite_symbol								0x2B27A8
#define cellFsLseek_symbol								0x2B1FFC
#define cellFsStat_symbol								0x2B20B4
#define cellFsUtime_symbol 								0x2B3A24
#define cellFsUnlink_internal_symbol   		 			0x1A29D8

#define cellFsUtilMount_symbol							0x2B1D70
#define cellFsUtilUmount_symbol 						0x2B1D44
#define cellFsUtilNewfs_symbol							0x2B36BC

#define pathdup_from_user_symbol						0x2B7B5C
#define open_path_symbol								0x2B25D0
#define open_fs_object_symbol							0x190CFC
#define close_fs_object_symbol							0x18FC38

#define storage_get_device_info_symbol					0x28CA00
#define storage_get_device_config_symbol				0x28B08C
#define storage_open_symbol								0x28CC28
#define storage_close_symbol							0x28B414
#define storage_read_symbol								0x28A390
#define storage_write_symbol							0x28A260
#define storage_send_device_command_symbol				0x289EB0
#define storage_map_io_memory_symbol					0x28C8AC
#define storage_unmap_io_memory_symbol		    		0x28C768
#define new_medium_listener_object_symbol				0x9CC34
#define delete_medium_listener_object_symbol			0x9E46C
#define set_medium_event_callbacks_symbol				0x9E7D0

#define cellUsbdRegisterLdd_symbol						0x266758
#define cellUsbdUnregisterLdd_symbol					0x266708
#define cellUsbdScanStaticDescriptor_symbol				0x267958
#define cellUsbdOpenPipe_symbol			        		0x267A08
#define cellUsbdClosePipe_symbol						0x2679B8
#define cellUsbdControlTransfer_symbol					0x2678BC
#define cellUsbdBulkTransfer_symbol						0x26783C

#define decrypt_func_symbol								0x38290
#define lv1_call_99_wrapper_symbol						0x52850
#define modules_verification_symbol						0x5C488
#define authenticate_program_segment_symbol				0x5E2E0

#define prx_load_module_symbol							0x8D308
#define prx_start_module_symbol							0x8BFD4
#define prx_stop_module_symbol							0x8D3AC
#define prx_unload_module_symbol						0x8BD08
#define prx_get_module_info_symbol						0x8B700
#define prx_get_module_id_by_address_symbol				0x8B610
#define prx_get_module_id_by_name_symbol				0x8B660
#define prx_get_module_list_symbol						0x8B780
#define load_module_by_fd_symbol						0x8C938
#define parse_sprx_symbol								0x8A62C
#define open_prx_object_symbol							0x835D4
#define close_prx_object_symbol							0x83EE4
#define lock_prx_mutex_symbol							0x8B5B8
#define unlock_prx_mutex_symbol							0x8B5C4

#define extend_kstack_symbol							0x73BF4

#define get_pseudo_random_number_symbol					0x22E65C
#define md5_reset_symbol								0x1681AC
#define md5_update_symbol								0x168C4C
#define md5_final_symbol								0x168DCC
#define ss_get_open_psid_symbol							0x230B44
#define update_mgr_read_eeprom_symbol					0x229F3C
#define update_mgr_write_eeprom_symbol					0x229E70

#define ss_params_get_update_status_symbol				0x5445C

#define syscall_table_symbol							0x38A4E8
#define syscall_call_offset								0x27DEE4

#define read_bdvd0_symbol								0x1AAACC
#define read_bdvd1_symbol								0x1AC6F8
#define read_bdvd2_symbol								0x1B98B0

#define storage_internal_get_device_object_symbol		0x289968

#define hid_mgr_read_usb_symbol	    					0x107F48
#define hid_mgr_read_bt_symbol							0x101E20

#define bt_set_controller_info_internal_symbol			0xF5E8C

/* Calls, jumps */
#define device_event_port_send_call						0x296BFC

#define ss_pid_call_1									0x21974C

#define process_map_caller_call							0x4D24

#define read_module_header_call							0x834C8
#define read_module_body_call							0x671C
#define load_module_by_fd_call1							0x8D1A4

#define shutdown_copy_params_call						0xAB4C

#define fsloop_open_call								0x2B2A30
#define fsloop_close_call								0x2B2A80
#define fsloop_read_call								0x2B2AC0

/* Patches */
#define shutdown_patch_offset							0xAB38
#define module_sdk_version_patch_offset					0x26D898
#define module_add_parameter_to_parse_sprxpatch_offset	0x8CA14

#define user_thread_prio_patch							0x21EAC
#define user_thread_prio_patch2							0x21EB8

#define lic_patch										0x59C00
#define ode_patch										0x22DAD0

/* Rtoc entries */

#define io_rtoc_entry_1									0x2EC0
#define io_sub_rtoc_entry_1								-0x7EA0
#define decrypt_rtoc_entry_2 							-0x65C0
#define decrypter_data_entry							-0x7F10

#define storage_rtoc_entry_1							0x22B0

#define device_event_rtoc_entry_1						0x2638

#define time_rtoc_entry_1								-0x75E0
#define time_rtoc_entry_2								-0x75E8

#define thread_rtoc_entry_1								-0x7660

#define process_rtoc_entry_1							-0x77A0

#define bt_rtoc_entry_1									-0x3558

/* Permissions */
#define permissions_func_symbol							0x3560
#define permissions_exception1							0x26DB0
#define permissions_exception2							0xC8A08
#define permissions_exception3							0x21F80

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset								0x409A40
#define patch_func2_offset 								0x5D780
#define patch_func8_offset1 							0x59E80
#define patch_func8_offset2 							0x59FE4
#define patch_func9_offset 								0x5E0C8
#define mem_base2										0x3D90

/* vars */
#define thread_info_symbol								0x3A4A30

#elif defined(FIRMWARE_4_81DEH) || defined(FIRMWARE_4_84DEH)

#define TOC						0x39D440 //done

#define create_kernel_object_symbol			0x125F8 // 
#define destroy_kernel_object_symbol			0x11F5C //
#define destroy_shared_kernel_object_symbol		0x118D0 // 
#define open_kernel_object_symbol			0x12C48 // 
#define open_shared_kernel_object_symbol		0x12A58 // done
#define close_kernel_object_handle_symbol		0x12078 // 

#define alloc_symbol					0x685DC // 
#define dealloc_symbol					0x68A18 // 
#define copy_to_user_symbol				0xFEB4 // 
#define copy_from_user_symbol				0x100D0 // 
#define copy_to_process_symbol				0xFF6C // 
#define copy_from_process_symbol			0xFD7C // 
#define page_allocate_symbol				0x6414C // 
#define page_free_symbol				0x63BB0 // done 
#define page_export_to_proc_symbol			0x642E8 // 
#define page_unexport_from_proc_symbol			0x63AA4 // 
#define kernel_ea_to_lpar_addr_symbol			0x74084 //
#define process_ea_to_lpar_addr_ex_symbol		0x7BECC // 
#define set_pte_symbol					0x62148 // 
#define map_process_memory_symbol			0x7B9D8 // 
#define panic_symbol					0x276314 // 

#define memcpy_symbol					0x83098 // done 
#define memset_symbol					0x513FC // 
#define memcmp_symbol					0x5070C // 
#define memchr_symbol					0x506BC //
#define printf_symbol					0x281958 // 
#define printfnull_symbol				0x281878 //
#define sprintf_symbol					0x52824 //  done
#define snprintf_symbol					0x52790 // 
#define strcpy_symbol					0x515A8 // 
#define strncpy_symbol					0x51670 // done 
#define strlen_symbol					0x515D0 //  done
#define strcat_symbol					0x514D8 //  done 
#define strcmp_symbol					0x51554 // 
#define strncmp_symbol					0x515FC // 
#define strchr_symbol					0x51510 // 
#define strrchr_symbol					0x516E0 //

#define spin_lock_irqsave_ex_symbol			0x2765F0 // IDA verified
#define spin_unlock_irqrestore_ex_symbol		0x2765C4 // 

#define create_process_common_symbol			0x27311C //
#define create_process_base_symbol			0x272A98 // 
#define load_process_symbol				0x5004 //  done
#define process_kill_symbol				0x272F1C // 

#define ppu_thread_create_symbol			0x1454C //
#define ppu_thread_exit_symbol                          0x14604 //  done
#define ppu_thread_join_symbol				0x14658 // 
#define ppu_thread_delay_symbol				0x2AA28 // 
#define create_kernel_thread_symbol			0x26B10 //
#define create_user_thread_symbol			0x2724C //
#define create_user_thread2_symbol			0x27070 // 
#define start_thread_symbol				0x25BA8 // 
#define run_thread_symbol				0x2536C // 
#define register_thread_symbol				0x26EDB8 // 
#define allocate_user_stack_symbol			0x26F6C0 // 
#define deallocate_user_stack_symbol			0x26F628 //

#define mutex_create_symbol				0x13C8C // Verified with IDA by Joonie
#define mutex_destroy_symbol                            0x13C24 // Verified with IDA by Joonie
#define mutex_lock_symbol				0x13C1C // Verified with IDA by Joonie
#define mutex_lock_ex_symbol				0x1F94C // 
#define mutex_trylock_symbol				0x13C18 // 
#define mutex_unlock_symbol                             0x13C14 // Verified with IDA by Joonie

#define cond_create_symbol				0x13DF8 // bytes matched: 0x2C  F821FF717C0802A6FBA10078FBC100807C9D23787C7E1B783880003638A00000
#define cond_destroy_symbol				0x13DA8 // bytes matched: 0x18  F821FF717C0802A6FBA10078FBE100887C7D1B78F80100A0
#define cond_wait_symbol				0x13DA0 // bytes matched: 0x18**  F821FF717C0802A6FBA10078FBE100887C7D1B78F80100A0
#define cond_wait_ex_symbol				0x20F38 // bytes matched: 0x80  F821FEF17C0802A6FB6100E87C7B1B78FB2100D8FBA100F8FBC10100FBE10108
#define cond_signal_symbol				0x13D7C // bytes matched: 0x18****  E8010080386000007C0803A6382100704E80002038A00000
#define cond_signal_all_symbol				0x13754 // bytes matched: 0x20****  E8010080386000007C0803A6382100704E800020F821FF917C0802A6F8010080
#define semaphore_initialize_symbol			0x32798 // bytes matched: 0x10  F821FF717C0802A6FBA100787C7D1B78
#define semaphore_wait_ex_symbol			0x34664 // bytes matched: 0x38  F821FF117C0802A6FB6100C8FB8100D0FBA100D8FBC100E0FB0100B0FB2100B8
#define semaphore_trywait_symbol			0x3424C // bytes matched: 0x38  F821FF717C0802A6FBC10080FB810070FBA10078FBE10088F80100A07C7E1B78
#define semaphore_post_ex_symbol			0x34398 // bytes matched: 0x80  F821FF417C0802A62F840000FBC100B03FC08001FB8100A0FBE100B8FAC10070

#define event_port_create_symbol			0x136C8 //  Verified with IDA by Joonie
#define event_port_destroy_symbol                       0x13B30 // Verified with IDA by Joonie
#define event_port_connect_symbol			0x13BA8 // Verified with IDA by Joonie
#define event_port_disconnect_symbol			0x13AD4 // Verified with IDA by Joonie
#define event_port_send_symbol				0x136C0 // Verified with IDA by Joonie
#define event_port_send_ex_symbol			0x2D608 // bytes matched: 0x44  F821FF517C0802A6FBE100A87C7F1B78FBC100A03BC30018FB2100787FC3F378

#define event_queue_create_symbol			0x139D0 // Verified with IDA by Joonie
#define event_queue_destroy_symbol                      0x13958 // Verified with IDA by Joonie
#define event_queue_receive_symbol			0x1379C // Verified with IDA by Joonie
#define event_queue_tryreceive_symbol			0x13868 // bytes matched: 0x68  F821FF617C0802A63D208001F80100B038000000FBA10088F801007080030088

#define cellFsOpen_symbol				0x2C8AA8 //
#define cellFsClose_symbol                              0x2C8910 // 
#define cellFsRead_symbol				0x2C8A4C //
#define cellFsWrite_symbol				0x2C89B8 // 
#define cellFsLseek_symbol				0x2C8040 // 
#define cellFsStat_symbol				0x2C82C4 // 
#define cellFsUtime_symbol				0x2C9AA0 //
#define cellFsUnlink_internal_symbol			0x1A3620 // 

#define cellFsUtilMount_symbol				0x2C7D98 // 
#define cellFsUtilUmount_symbol				0x2C7D6C // 
#define cellFsUtilNewfs_symbol				0x2C98CC // 

#define pathdup_from_user_symbol			0x2CDBF8 // 
#define open_path_symbol                                0x2C87E0 //
#define open_fs_object_symbol                           0x191944 // 
#define close_fs_object_symbol				0x190880 // 

#define storage_get_device_info_symbol			0x2A1854 //
#define storage_get_device_config_symbol		0x2A049C // 
#define storage_open_symbol                             0x2A1A7C // 
#define storage_close_symbol                            0x29FD88 // 
#define storage_read_symbol                             0x29F52C // 
#define storage_write_symbol                            0x29F3FC //
#define storage_send_device_command_symbol              0x29F04C // 
#define storage_map_io_memory_symbol                    0x2A1700 // 
#define storage_unmap_io_memory_symbol                  0x2A27A4 // 
#define new_medium_listener_object_symbol		0x9D87C // bytes matched: 0x48****  3880001DF80100A0FBC10080FBA1007838A00000EBDF000038600E002FBE0000
#define delete_medium_listener_object_symbol		0x9F0B4 // bytes matched: 0x40  F821FF817C0802A62C240000FBE100783FE08001FBC10070F80100907C9E2378
#define set_medium_event_callbacks_symbol		0x9F418 // bytes matched: 0x58  F821FF517C0802A6FB410080F80100C038000000FB610088FB8100907C9B2378

#define cellUsbdRegisterLdd_symbol			0x2673A0 //
#define cellUsbdUnregisterLdd_symbol			0x267350 //
#define cellUsbdScanStaticDescriptor_symbol		0x2685A0 // 
#define cellUsbdOpenPipe_symbol			        0x286850 //
#define cellUsbdClosePipe_symbol			0x268600 //
#define cellUsbdControlTransfer_symbol			0x268504 // 
#define cellUsbdBulkTransfer_symbol			0x268484 //

#define decrypt_func_symbol				0x38678 // 
#define lv1_call_99_wrapper_symbol			0x52C38 // 
#define modules_verification_symbol			0x5C870 // 
#define authenticate_program_segment_symbol		0x5E6C8 //

#define prx_load_module_symbol				0x8D998 // 
#define prx_start_module_symbol				0x8C664 //
#define prx_stop_module_symbol				0x8DA3C // 
#define prx_unload_module_symbol			0x8C398 // 
#define prx_get_module_info_symbol			0x8BD90 // 
#define prx_get_module_id_by_address_symbol		0x8BCA0 // bytes matched: 0x80  F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78F80100A04BFFFF8D
#define prx_get_module_id_by_name_symbol		0x8BCF0 // bytes matched: 0x80  F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78F80100A04BFFFF3D
#define prx_get_module_list_symbol			0x8BE10 // 
#define load_module_by_fd_symbol			0x8CFC8 // bytes matched: 0x64  7D800026F821FF11FAE100A8FB0100B0FB6100C8FAC100A0FB2100B8FB4100C0
#define parse_sprx_symbol				0x8ACBC // bytes matched: 0x80  F821FF517C0802A6FB810090FBE100A87C7C1B787C9F23783860002038800000
#define open_prx_object_symbol				0x83C64 // bytes matched: 0x18  F821FF917C0802A678840020F8010080E863020838E00023
#define close_prx_object_symbol				0x84574 // bytes matched: 0x80**  2C2300007C0802A6F821FF81FBC10070FBE10078F80100907C7F1B787C9E2378
#define lock_prx_mutex_symbol				0x8BC48 // bytes matched: 0x80****  E86900004BFF808CF821FF717C0802A6FBA100787C7D1B78F80100A04BFFFFD5
#define unlock_prx_mutex_symbol				0x8BC54 // bytes matched: 0x80*  E86900004BFF808CF821FF717C0802A6FBA100787C7D1B78F80100A04BFFFFD5

#define extend_kstack_symbol				0x73FDC // 

#define get_pseudo_random_number_symbol                 0x22F2A4 //
#define md5_reset_symbol				0x168DF4 // bytes matched: 0x80  3D2067453D60EFCD3D4098BA3C0010323900000061292301616BAB89614ADCFE
#define md5_update_symbol				0x169894 // bytes matched: 0x80  F821FF517C0802A654AB1838F80100C080030010FBC100A07D205A147C7E1B78
#define md5_final_symbol				0x169A14 // bytes matched: 0x54  F821FF617C0802A6FBE100987C9F2378FBC100903BC10070FBA1008838A00008
#define ss_get_open_psid_symbol				0x23178C // bytes matched: 0x80  F821FF717C0802A6FB810070FBA100787C9C23787C7D1B78F80100A0480000F5
#define update_mgr_read_eeprom_symbol			0x22AB84 // bytes matched: 0x80  F821FF317C0802A6FBE100C83BE10070FB8100B0FBA100B87C7C1B787CBD2B78
#define update_mgr_write_eeprom_symbol			0x22AAB8 // bytes matched: 0x80  F821FF217C0802A6FBE100D83BE10070FB6100B8FBA100C87C7B1B787CBD2B78

#define ss_params_get_update_status_symbol		0x54844 // bytes matched: 0x80  3CA070617C0802A63CC075703CE0737460A5726160C6646160E761742C230000

#define syscall_table_symbol				0x3B28F8 //done
#define syscall_call_offset				0x285E70 //

#define read_bdvd0_symbol				0x1AB714 //
#define read_bdvd1_symbol				0x1AD340 // 
#define read_bdvd2_symbol				0x1BA4F8 // 

#define storage_internal_get_device_object_symbol       0x29E8C8 // 

#define hid_mgr_read_usb_symbol				0x108B90 // 
#define hid_mgr_read_bt_symbol				0x102A68 // 

#define bt_set_controller_info_internal_symbol		0xF6AD4 // bytes matched: 0x80  F821FF417C0802A62F85054CF80100D054C0043EFB410090FBA100A8FBC100B0

/* Calls, jumps */
#define device_event_port_send_call			0x2ABCFC // 

#define ss_pid_call_1					0x21A394 // bytes matched: 0x14*  906100703881007838A1008038C100A038610070

#define process_map_caller_call				0x4D24 // 

#define read_module_header_call				0x83B58 // bytes matched: 0x50*  2F8300007C6307B4409E0008E8610070E8010090382100807C0803A64E800020
#define read_module_body_call				0x671C // bytes matched: 0x80*  2F8300007C7F1B7840DE013CE80100887FBE000040DE0160FBDD0010E81C0018
#define load_module_by_fd_call1				0x8D834 // bytes matched: 0x80  4BFFF795801B000C7C7D1B78E87B00102F800000409DFFBC3BE300183BC00000

#define shutdown_copy_params_call			0xAB4C // bytes matched: 0x1C  480055852F830000409E005C7FC6F3787FA3EB78388000017F65DB78

#define fsloop_open_call				0x2C8C40 //
#define fsloop_close_call				0x2C8C90 // 
#define fsloop_read_call				0x2C8CD0 // 

/* Patches */
#define shutdown_patch_offset				0xAB38 // bytes matched: 0x30  600000044182FEFC7F83E3787F64DB787FC5F378480055852F830000409E005C
#define module_sdk_version_patch_offset			0x26E560 // bytes matched: 0x78  419D0008386000007C6307B44E800020800400047F804800409EFFEC80040008
#define module_add_parameter_to_parse_sprxpatch_offset	0x8D0A4 // bytes matched: 0x80  90030198FB4301A8FB4301A0934301B8FB4301C8FB4301C04BFFDC012F830000

#define user_thread_prio_patch				0x221EC // 
#define user_thread_prio_patch2				0x221F8 // 
// ODE Protection Removal patches
#define lic_patch					0x59FE8 // 
#define ode_patch					0x22E718 // 

/* Rtoc entries */

#define io_rtoc_entry_1					0x3800 //found at 0x2CADA2 3800E97E8038EBC1FFF0F9630000
#define io_sub_rtoc_entry_1				-0x7EA0 //found at 0x16BB5A 8160E97E8168EB9E8140EBBE8170

#define decrypt_rtoc_entry_2 				-0x6578 //found at 0x5D66A 9A884BFFBC25392000004BFFFFCC2C2400007C0802A6
#define decrypter_data_entry				-0x7F10 //Verified with IDA by Joonie  //UNTOUCHED

#define storage_rtoc_entry_1				0x2C10 //found at 0x29ED1E 2C107C0802A6F821FF51F80100C0FBE100A87C9F23

#define device_event_rtoc_entry_1			0x2F98 //found at 0x2ABCE6 2F9878050620E8CA00387D052B78E92B0000

#define time_rtoc_entry_1				-0x75E0 //Verified with IDA by Joonie  //NOT FOUND
#define time_rtoc_entry_2				-0x75E8 //Verified with IDA by Joonie  //NOT FOUND

#define thread_rtoc_entry_1				-0x7618 //found at 0x21B76 89E880090000900100704BFFFFE0

#define process_rtoc_entry_1				-0x7758 //found at 0x1BF46 88A83FC0800163DE0005E87D0000

#define bt_rtoc_entry_1					-0x34E8 //found at 0xF54DE CB1838A0000048001F617FA4EB78

/* Permissions */
#define permissions_func_symbol				0x3560 // bytes matched: 0x6C  E92280087C0802A6F821FF21FBA100C8FBC100D0FBE100D8E8E900187C9F2378
#define permissions_exception1 				0x26D30 // 
#define permissions_exception2				0xC96C8 // 
#define permissions_exception3				0x222C0 //

/* Legacy patches with no names yet */
/* Kernel offsets */
#define patch_data1_offset				0x4326C0 // Right below IDPS on LV2 dump
#define patch_func2 					0x5DB3C // 
#define patch_func2_offset 				0x2C
#define patch_func8 					0x5A1C4 //
#define patch_func8_offset1 				0xA4 // bytes matched: 0x68  0000000000000000000000000000000000000000000000000000000000000000
#define patch_func8_offset2 				0x208 // bytes matched: 0x80  4800000000000000000000000000000000000000000000000000000000000000
#define patch_func9 					0x5DFF8 // 
#define patch_func9_offset 				0x4B8 // bytes matched: 0x7C****  0000000000000000000000000000000000000000000000000000000000000000
#define mem_base2					0x3D90 // bytes matched: 0x24  F821FEB17C0802A6FB8101307C9C2378388100D8FBE10148FBA10138FBC10140

/* vars */
#define thread_info_symbol                      0x3D1900 //

#endif /* FIRMWARE */

#endif /* __FIRMWARE_SYMBOLS_H_S__ */

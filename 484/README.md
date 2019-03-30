[Supported CFW]

* REBUG 4.84.1 CEX LITE (LITE)
* REBUG 4.84.1 DECR LITE (DEH)
* REBUG 4.84.1 REX/D-REX (REX)
* PASTA 4.84 V2 (DEX)

COBRA 8.1 Source

[ Joonie's Changes ]

* Firmware spoofing is disabled due to the changes of PSN Auth since 4.60
* PLS3 patches are removed from modulespatch.c since this is one of those pre-applied patches on 4.xx CFW
* unknown E3 patches are removed to fix an issue with XMB, [Originally found by rancid-0, from his PS3ITA 4.50 COBRA]
* Dual VSH supported for REBUG REX / D-REX CFW, with the proper hash check code was developed by habib and Nzv recently. 
* NPDRM Fself fix is no longer used due to improved fself patches hard coded within the firmware modules on REX/D-REX 

[ Habib's changes ]

* Stage0 and stage0 base are merged, (Optimization on stage0 and stage1)
* Syscall 11 is added to support full lv1 peek.
* Syscall 15 is added to allow execution of any lv2 internal function.
* Allow Syscall 11 to gain full access to syscall 6/7/9/10 to prevent modification from homebrews like multiMAN.
* PS2 Launcher is no longer needed due to new codes in storage_ext, now COBRA can behave the same way that VSH does to apply configuration of DS3 controllers. 
* PS2 Launcher can still be used, which allows PS2ISO with netemu on backward compatible consoles.
* PS2 Netemu toggle is added for Backward compatible consoles, it is very useful for those units with broken EE/GS chips as well.
* PS2 Netemu can now use decrypted CONFIG, place the game config file in the same game path for ex) 
		dev_hdd0/PS2ISO/GOW.ISO
		dev_hdd0/PS2ISO/GOW.ISO.CONFIG 
* HASH calculation algorithm is changed, now it uses static hashes, so the hashes will not be changed unless modules have major changes.
* Stealth extension support to disable Syscall 15
* Allows temporary LV1 peek from syscall 8 when "disabling COBRA" is not used
* Run payload with Kernel privileges - Added option to run payload with kernel privileges like ps vita skprx. this is a big thing! one can make hooks, printf to socat, do whatever they feel like they need to do. at the current time only one payload is supported at a time. in the future i might increase this 
* Boot times speed improved - as there is no stage1.
* PS2 bc and semi bc consoles wont load iso when cobra disabled - disable cobra using opcode)
* Added support for dynamic memory payloads, 5 of them can be started from "/dev_hdd0/boot_plugins_kernel.txt"
* Toolchain updated to support dynamic address loading.
* For applications, you can also mount em, and unmount em separately
* Stage0 now supports kernel & vsh plugins without Stage2
	Cobra mode
	- dev_hdd0/boot_plugins_kernel.txt* required for kernel plugin
	- dev_hdd0/boot_plugins.txt* required for VSH boot plugin

	non-Cobra mode
	- dev_hdd0/boot_plugins_kernel_nocobra(_dex).txt* required for kernel plugin
	- dev_hdd0/boot_plugins_nocobra(_dex).txt* required for VSH boot plugin
* loadoptical flag will be created to ensure optical ps2 media would be played on bc/semi-bc models at all times

Please review this post for further detail via http://www.psx-place.com/threads/update-4-84-1-starbuged-cfw-includes-new-cobra-8-00-payload-by-habib.22810/

[ KW's changes ]

* webMAN integration on boot. Also disables external webMAN plugin located in dev_hdd0 (Disabled for REBUG 4.82.1 LITE)
* PSN Patch stealth mode, it remove custom syscall from the ps3
* Homebrew blocker added, when Syscalls are disabled by plugins or homebrews, it will prevent homebrews from being launched, and it will return as 80010006 on XMB.

[ Dean's changes ] 

* Improved map_path, to fix the issue with games like Shadow of Mordor
* Permission protection is disabled to increase game compatiblity and full DEX support.[no more issue with Target Manager or CCAPI]
* 80010017 / 8001002B Error fix is added since 4.60, this was developed to prevent issues with games when game disc is inserted in BD Drive.
* LIC.DAT check is patched to fix the issue with launching homebrew since 4.60
* Full burned optical media support for PS3 Games. (CD-R, DVD-R SL/DL, BD-R SL/DL, BD-RE)

[ Nzv's changes]

* PS3MAPI 1.2.2 support, it is similar feature comparing to CCAPI, but open sourced project and also can unload vsh plugins , attatch process on all type of EBOOT.
One of those great debugging features.
* Partial disable syscall8 and unhooks all cobra hooks (Part of PS3MAPI)
* Block update from disc

[ Aldo's changes ]

* Improved PSX media type support, now it supports following disc types
* 2048 // 2352 // 2336 // 2448 *
* Improved Video mode patch with proper region detection
Original COBRA payload was relying on ps1emu's detection method, now COBRA has extra pre-processing that can detect region properly and force apply correct refresh rate depending on the game's region.
(Improved PS3MAPI functions)
* Added PEEK/POKE (LV1/LV2) as PS3MAPI opcodes (syscall8)
* Added option to block access and request access to syscall8 using a key
(also as PS3MAPI opcodes)
* Added temporary disablement of Cobra syscall8 to allow dumpers peek 0x1000 to 0x9800
* BASIC_PLUGIN hash is commented.
* 80010006 Error fix when trying to install a game update with syscall disabled. Fix & Research @Joonie @Alexander @Aldo

[ Alexander's changes ]

* Fixed data corruption if you uninstall game/game update/homebrew with syscall disabled

[ Haxxxen's changes ]

* Extra patch for PSP SAVE DATA is disabled by default to improve compatibility, however can be toggled by CROSS+R1 when launching PSP launcher.

[Evilnat's changes]

* Updated KW's code to search webMAN in flash and load it firstly if it's found in /dev_hdd0, will search in the following paths:
	- /dev_flash/vsh/module/webftp_server.sprx
	- /dev_flash/ps3ita/webftp_server.sprx
	- /dev_flash/webman/webftp_server.sprx 
	- /dev_flash/dragon/web.sprx

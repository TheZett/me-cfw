#ifndef __vshctrl_patch_list__
#define __vshctrl_patch_list__


struct Loadexec_patch_list {
	u32 VshCommonCallPatchAddr[2];
	u32 VshCommonCallPatchAddr_05g[4];
};

struct IoFileMgr_patch_list {
	u32 Io_open_offset;
	u32 Io_close_offset;
	u32 Io_read_offset;
	u32 Io_lseek_offset;
	u32 Io_lseek32_offset;
	u32 Io_getstat_offset;
	u32 Io_chstat_offset;
	u32 Io_remove_offset;
	u32 Io_dopen_offset;
	u32 Io_dread_offset;
	u32 Io_dclose_offset;
	u32 Io_rmdir_offset;
	u32 Io_mkdir_offset;
};

#if _PSP_FW_VERSION == 620
//info
#define CFW_VER		"6.20"
#define CFW_NAME	"6XX"

//video
#define MSVM_RES_PATCH1_ADDR 			0x0003AB2C//
#define MSVM_RES_PATCH2_ADDR 			0x0003ABB4//
#define MSVM_RES_PATCH3_ADDR 			0x0003D3AC//
#define MSVM_RES_PATCH4_ADDR 			0x0003D608//
#define MSVM_RES_PATCH5_ADDR 			0x00043B98//
#define MSVM_RES_PATCH6_ADDR 			0x00073A84//
#define MSVM_RES_PATCH7_ADDR 			0x000880A0//
#define MSVM_BR_PATCH1_ADDR  			0x0003D324//
#define MSVM_BR_PATCH2_ADDR  			0x0003D36C//
#define MSVM_BR_PATCH3_ADDR  			0x00042C40//

//gameplugin
#define GP_PATCH_ADDR1					0x0001EB08//
#define GP_PATCH_ADDR2					0x0001F41C//
#define MULTI_DISC_PSX_PATCH_ADDR		0x00013850//
#define RIF_CHECK_PATCH_ADDR			0x0001EC00//
#define HIDE_PNG_PATCH1 				0x0001C098//
#define HIDE_PNG_PATCH2 				0x0001C0A4//
#define SKIP_GAMEBOOT_PATCH_ADDR 		0x00017E5C//
#define SKIP_GAMEBOOT_FUNC_ADDR 		0x000181BC//

//loadexec
//#define LE_VSH_COMMON_CALL1_ADDR		0x00001AD8//
//#define LE_VSH_COMMON_CALL2_ADDR		0x00001B00//
//#define LE_VSH_COMMON_CALL3_ADDR		0x00001D68//
#define LE_VSH_COMMON_CALL4_ADDR  		0x00001D90//
#define LE_VSH_COMMON_CALL5_ADDR		0x00001B88//
#define LE_VSH_COMMON_CALL6_ADDR		0x00001BB0//

//#define LE_VSH_COMMON_CALL1_ADDR_05g	0x00001F9C//
#define LE_VSH_COMMON_CALL2_ADDR_05g	0x00001FC4//
//#define LE_VSH_COMMON_CALL3_ADDR_05g	0x0000208C//
#define LE_VSH_COMMON_CALL4_ADDR_05g	0x000020B4//
#define LE_VSH_COMMON_CALL5_ADDR_05g	0x00001DBC//
#define LE_VSH_COMMON_CALL6_ADDR_05g	0x00001DE4//
#define LE_VSH_COMMON_CALL7_ADDR_05g	0x00001E0C//
#define LE_VSH_COMMON_CALL8_ADDR_05g	0x00001E34//

//update dl lib
#define UPDATE_LIB_DEST_PATCH_ADDR1 	0x000005C0//
#define UPDATE_LIB_DEST_PATCH_ADDR2 	0x000005D8//
#define UPDATE_LIB_STRCAT_PATCH1 		0x00002044//
#define UPDATE_LIB_STRCAT_PATCH2 		0x00002080//
#define UPDATE_LIB_STRCAT_PATCH3 		0x0000208C//
#define UPDATE_LIB_URL_PATCH 			0x000032C4//
#define NET_UPDATE_VERSION_PATCH_OFFSET	0x00008148//

//vsh main
#define PBP_HEADER_PATCH1				0x00011A70//
#define PBP_HEADER_PATCH2 				0x00011A78//
#define PBP_HEADER_PATCH3 				0x00011D84//
//#define VSH_UMD_CALLBACK_PATCH_ADDR	0x0003EFA4//
#define VSH_DISC_VERSION_PATCH_ADDR		0x0001136C//
#define VSH_DISC_VERSION_FUNC_ADDR		0x000110F4//
#define VSH_UMDVIDEO_PATCH_ADDR1		0x00006CEC//
#define VSH_UMDVIDEO_PATCH_ADDR2		0x0002CA08//
#define VSH_UPDATE_TYPECHECK_PACH_ADDR	0x0001226C//
#define VSH_HIB_BLOCK_PATCH_ADDR		0x000050F8//
#define VSH_READ_KEY_PATCH_ADDR			0x0000025C//
#define VSH_SKIP_GAMEBOOT_PATCH_ADDR	0x00001A14//
//#define VSH_DEVCTRL_PATCH_ADDR		0x000006E8//

//syscon patch
#define SP_MODULE_NAME  				0x000298AC//
#define SP_PATCH_ADDR   				0x00018920//
#define SYSCON_MAC_PATCH_ADDR 			0x0002DB90//
#define SYSCON_COLOR_PATCH_ADDR 		0x00007494//

#elif _PSP_FW_VERSION == 639
//info
#define CFW_VER		"6.39"
#define CFW_NAME	"6XX"

//video
#define MSVM_RES_PATCH1_ADDR			0x0003AED4
#define MSVM_RES_PATCH2_ADDR			0x0003AF5C
#define MSVM_RES_PATCH3_ADDR			0x0003D79C
#define MSVM_RES_PATCH4_ADDR			0x0003D9F8
#define MSVM_RES_PATCH5_ADDR			0x00044150
#define MSVM_RES_PATCH6_ADDR			0x00074550
#define MSVM_RES_PATCH7_ADDR			0x00088BA0
#define MSVM_BR_PATCH1_ADDR				0x0003D714
#define MSVM_BR_PATCH2_ADDR				0x0003D75C
#define MSVM_BR_PATCH3_ADDR				0x000431F8

//gameplugin
#define GP_PATCH_ADDR1					0x000202A8
#define GP_PATCH_ADDR2					0x00020BC8
#define MULTI_DISC_PSX_PATCH_ADDR		0x00014634
#define RIF_CHECK_PATCH_ADDR			0x000203A0
#define HIDE_PNG_PATCH1					0x0001D5DC
#define HIDE_PNG_PATCH2					0x0001D5E8
#define SKIP_GAMEBOOT_PATCH_ADDR		0x00018F14
#define SKIP_GAMEBOOT_FUNC_ADDR			0x00019294

//loadexec
//#define LE_VSH_COMMON_CALL1_ADDR		0x00001B08
//#define LE_VSH_COMMON_CALL2_ADDR		0x00001B30
//#define LE_VSH_COMMON_CALL3_ADDR		0x00001D98
#define LE_VSH_COMMON_CALL4_ADDR		0x00001DC0
#define LE_VSH_COMMON_CALL5_ADDR		0x00001BB8
#define LE_VSH_COMMON_CALL6_ADDR		0x00001BE0

//#define LE_VSH_COMMON_CALL1_ADDR_05g	0x00001FCC
#define LE_VSH_COMMON_CALL2_ADDR_05g	0x00001FF4
//#define LE_VSH_COMMON_CALL3_ADDR_05g	0x000020BC
#define LE_VSH_COMMON_CALL4_ADDR_05g	0x000020E4
#define LE_VSH_COMMON_CALL5_ADDR_05g	0x00001DEC
#define LE_VSH_COMMON_CALL6_ADDR_05g	0x00001E14
#define LE_VSH_COMMON_CALL7_ADDR_05g	0x00001E3C
#define LE_VSH_COMMON_CALL8_ADDR_05g	0x00001E64

//update dl lib
#define UPDATE_LIB_DEST_PATCH_ADDR1		0x000005C0
#define UPDATE_LIB_DEST_PATCH_ADDR2		0x000005D8
#define UPDATE_LIB_STRCAT_PATCH1		0x00002044
#define UPDATE_LIB_STRCAT_PATCH2		0x00002080
#define UPDATE_LIB_STRCAT_PATCH3		0x0000208C
#define UPDATE_LIB_URL_PATCH			0x000032C4
#define NET_UPDATE_VERSION_PATCH_OFFSET	0x000081B0

//vsh main
#define PBP_HEADER_PATCH1				0x00011FD8
#define PBP_HEADER_PATCH2				0x00011FE0
#define PBP_HEADER_PATCH3				0x00012230
#define VSH_UMD_CALLBACK_PATCH_ADDR		0x0003F850
#define VSH_DISC_VERSION_PATCH_ADDR		0x00011940
#define VSH_DISC_VERSION_FUNC_ADDR		0x000115E8
#define VSH_UMDVIDEO_PATCH_ADDR1		0x00006E58
#define VSH_UMDVIDEO_PATCH_ADDR2		0x0002D278
#define VSH_UPDATE_TYPECHECK_PACH_ADDR	0x00012714
#define VSH_HIB_BLOCK_PATCH_ADDR		0x000051A8
#define VSH_READ_KEY_PATCH_ADDR			0x0000025C
#define VSH_SKIP_GAMEBOOT_PATCH_ADDR	0x00001A14
#define VSH_DEVCTRL_PATCH_ADDR			0x000006E8

//syscon patch
#define SP_MODULE_NAME					0x0002A1FC
#define SP_PATCH_ADDR					0x00018F3C
#define SYSCON_MAC_PATCH_ADDR			0x0002E4D8
#define SYSCON_COLOR_PATCH_ADDR			0x00007660

#elif _PSP_FW_VERSION == 660
//info
#define CFW_VER		"6.60"
#define CFW_NAME	"6XX"

//gameplugin
#define GP_PATCH_ADDR1					0x00020528
#define GP_PATCH_ADDR2					0x00020E6C
#define MULTI_DISC_PSX_PATCH_ADDR		0x00014850
#define RIF_CHECK_PATCH_ADDR			0x00020620
#define HIDE_PNG_PATCH1					0x0001D858
#define HIDE_PNG_PATCH2					0x0001D864
#define SKIP_GAMEBOOT_PATCH_ADDR		0x00019130
#define SKIP_GAMEBOOT_FUNC_ADDR			0x000194B0

//loadexec
//#define LE_VSH_COMMON_CALL1_ADDR		0x00001B08
//#define LE_VSH_COMMON_CALL2_ADDR		0x00001B30
//#define LE_VSH_COMMON_CALL3_ADDR		0x00001D98
#define LE_VSH_COMMON_CALL4_ADDR		0x00001DC0
#define LE_VSH_COMMON_CALL5_ADDR		0x00001BB8
#define LE_VSH_COMMON_CALL6_ADDR		0x00001BE0

//#define LE_VSH_COMMON_CALL1_ADDR_05g	0x00001FCC
#define LE_VSH_COMMON_CALL2_ADDR_05g	0x00001FF4
//#define LE_VSH_COMMON_CALL3_ADDR_05g	0x000020BC
#define LE_VSH_COMMON_CALL4_ADDR_05g	0x000020E4
#define LE_VSH_COMMON_CALL5_ADDR_05g	0x00001DEC
#define LE_VSH_COMMON_CALL6_ADDR_05g	0x00001E14
#define LE_VSH_COMMON_CALL7_ADDR_05g	0x00001E3C
#define LE_VSH_COMMON_CALL8_ADDR_05g	0x00001E64

//vsh main
#define PBP_HEADER_PATCH1				0x00012058//0x00011FD8
#define PBP_HEADER_PATCH2				0x00012060//0x00011FE0
#define PBP_HEADER_PATCH3				0x000122B0//0x00012230
#define VSH_UMD_CALLBACK_PATCH_ADDR		0x0003F8E4//0x0003F850
#define VSH_DISC_VERSION_PATCH_ADDR		0x000119C0//0x00011940
#define VSH_DISC_VERSION_FUNC_ADDR		0x00011668//0x000115E8
#define VSH_UMDVIDEO_PATCH_ADDR1		0x00006E58//0x00006E58
#define VSH_UMDVIDEO_PATCH_ADDR2		0x0002D304//0x0002D278
#define VSH_UPDATE_TYPECHECK_PACH_ADDR	0x00012794//0x00012714
#define VSH_HIB_BLOCK_PATCH_ADDR		0x000051C8//0x000051A8
#define VSH_READ_KEY_PATCH_ADDR			0x0000025C//0x0000025C
#define VSH_SKIP_GAMEBOOT_PATCH_ADDR	0x00001A34
#define VSH_DEVCTRL_PATCH_ADDR			0x000006E8//0x000006E8

//video
#define MSVM_RES_PATCH1_ADDR			0x0003AF24
#define MSVM_RES_PATCH2_ADDR			0x0003AFAC
#define MSVM_RES_PATCH3_ADDR			0x0003D7EC
#define MSVM_RES_PATCH4_ADDR			0x0003DA48
#define MSVM_RES_PATCH5_ADDR			0x000441A0
#define MSVM_RES_PATCH6_ADDR			0x000745A0
#define MSVM_RES_PATCH7_ADDR			0x00088BF0
#define MSVM_BR_PATCH1_ADDR				0x0003D764
#define MSVM_BR_PATCH2_ADDR				0x0003D7AC
#define MSVM_BR_PATCH3_ADDR				0x00043248

//update dl lib
#define UPDATE_LIB_DEST_PATCH_ADDR1		0x000005C0
#define UPDATE_LIB_DEST_PATCH_ADDR2		0x000005D8
#define UPDATE_LIB_STRCAT_PATCH1		0x00002044
#define UPDATE_LIB_STRCAT_PATCH2		0x00002080
#define UPDATE_LIB_STRCAT_PATCH3		0x0000208C
#define UPDATE_LIB_URL_PATCH			0x000032C4
#define NET_UPDATE_VERSION_PATCH_OFFSET	0x000082A0//0x000081B0

//syscon patch
#define SP_MODULE_NAME					0x0002A62C
#define SP_PATCH_ADDR					0x000192E0
#define SYSCON_MAC_PATCH_ADDR			0x0002E9A0
#define SYSCON_COLOR_PATCH_ADDR			0x000076EC

#else
#error patch_addr.h
#endif

#endif
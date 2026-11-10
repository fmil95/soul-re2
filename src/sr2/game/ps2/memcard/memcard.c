/* Original path: C:\sr2\game\ps2\memcard\memcard.c */
/* .text 0x001C8790, .data 0x002A65E8, .rodata 0x002B7890, .bss 0x01E9B308 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 2a65e8 */ extern int mcport;
/* data 2a65ec */ extern int mcslot;
/* data 2a65f0 */ extern unsigned char *iconName[3];
/* data 2a6600 */ extern short unsigned int ascii_special[33][2];
/* data 2a6688 */ extern short unsigned int ascii_table[3][2];
/* data 2a6698 */ extern localstr_t save_name[0];
/* data 2a66a8 */ extern int frame;
/* bss 1e9b308 */ extern char dirBaseName[20];
/* bss 1e9b31c */ extern int gMemcardSaveSize;

// /* 001c8790 0000010c */ uint16 Ascii2Sjis(/* a2 6 */ unsigned char ascii_code) {
//     /* v0 2 */ uint16 sjis_code;
//     /* a0 4 */ unsigned char stmp;
//     /* v1 3 */ unsigned char stmp2;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", Ascii2Sjis);

// /* 001c88a0 00000098 */ void AsciiString2Sjis(/* s3 19 */ uint8 *input, /* s4 20 */ uint16 *output) {
//     /* s0 16 */ int i;
//     /* s2 18 */ int len;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", AsciiString2Sjis);

// /* 001c8938 000000d0 */ static int MEMCARD_CreateFile(/* s1 17 */ MemCardInfo *mcard, /* a1 5 */ int init) {
//     /* 0x0(sp) */ int ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARD_CreateFile);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7890);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B78A0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B78B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B78C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B78D8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B78E0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B78F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7900);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7918);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7930);

// /* 001c8a08 00000198 */ static int MEMCARD_WriteFile(/* s0 16 */ MemCardInfo *mcard) {
//     /* s1 17 */ int done;
//     /* 0x0(sp) */ int ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARD_WriteFile);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7970);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7980);

// /* 001c8ba0 00000198 */ static int MEMCARD_ReadFile(/* s0 16 */ MemCardInfo *mcard) {
//     /* s1 17 */ int done;
//     /* 0x0(sp) */ int ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARD_ReadFile);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B79C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B79D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B79D8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B79E8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B79F8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7A00);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7A10);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7A40);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7A70);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7A80);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7A90);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7A98);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7AA8);

// /* 001c8d38 000004cc */ static int MEMCARD_WriteIcon(/* fp 30 */ MemCardInfo *mcard) {
//     /* 0xf0(sp) */ int done;
//     /* 0x0(sp) */ char name[60];
//     /* data 2a6694 */ static int state;
//     {
//         /* 0x40(sp) */ sceVu0IVECTOR bgcolor[4];
//         /* 0x80(sp) */ Vector4f lightdir[3];
//         /* 0xb0(sp) */ Vector4f lightcol[3];
//         /* 0xe0(sp) */ Vector4f ambient;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARD_WriteIcon);

// /* 001c9208 0000010c */ void MEMCARD_Init() {
//     /* 0x0(sp) */ char name[64];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARD_Init);

// /* 001c9318 00000008 */ void MEMCARD_DisplayInfo(/* a0 4 */ MemCardInfo *mcard) {}
void MEMCARD_DisplayInfo(void) {
}

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7AE0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7AF0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7B10);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7B18);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7B40);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7B60);

// /* 001c9320 00000454 */ void MEMCARD_Process(/* s1 17 */ MemCardInfo *mcard) {
//     /* 0x0(sp) */ int result;
//     {
//         /* s0 16 */ int i;
//         {
//             /* v1 3 */ int index;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARD_Process);

// /* 001c9778 00000038 */ static int MEMCARDMENU_DoPushMenu(/* a0 4 */ int param, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_DoPushMenu);

// /* 001c97b0 00000030 */ static int MEMCARDMENU_ClearError(/* a0 4 */ int param, /* a1 5 */ menu_ctrl_t ctrl) {
//     {
//         /* v0 2 */ MemCardInfo *mcard;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_ClearError);

// /* 001c97e0 0000004c */ static int MEMCARDMENU_DoPopMenu(/* a0 4 */ int param, /* a1 5 */ menu_ctrl_t ctrl) {
//     {
//         /* a0 4 */ MemCardInfo *mcard;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_DoPopMenu);

// /* 001c9830 00000008 */ static int MEMCARDMENU_InvalidFile(/* a0 4 */ int param, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_InvalidFile);

// /* 001c9838 000000e8 */ int MEMCARDMENU_WaitExitLoad(/* s1 17 */ int32 param) {
//     /* a0 4 */ MemCardInfo *mcard;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_WaitExitLoad);

// /* 001c9920 000000b8 */ int MEMCARDMENU_WaitExitSave(/* s1 17 */ int32 param) {
//     /* a0 4 */ MemCardInfo *mcard;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_WaitExitSave);

// /* 001c99d8 0000003c */ static int MEMCARDMENU_ExitLoad(/* a0 4 */ int param, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_ExitLoad);

// /* 001c9a18 0000000c */ static int MEMCARDMENU_ExitSave(/* a0 4 */ int param, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_ExitSave);

// /* 001c9a28 0000009c */ int MEMCARDMENU_WaitLoadFile(/* a0 4 */ int32 param) {
//     /* a0 4 */ MemCardInfo *mcard;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_WaitLoadFile);

// /* 001c9ac8 00000030 */ static int MEMCARDMENU_LoadFile(/* a2 6 */ int param, /* a1 5 */ menu_ctrl_t ctrl) {
//     {
//         /* v1 3 */ MemCardInfo *mcard;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_LoadFile);

// /* 001c9af8 000003f0 */ static int MEMCARDMENU_LoadMenu(/* fp 30 */ int index) {
//     /* s1 17 */ MemCardInfo *mcard;
//     {
//         /* s0 16 */ int i;
//         /* a1 5 */ int numfiles;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_LoadMenu);

// /* 001c9ee8 0000007c */ int do_memcard_load_menu(/* a0 4 */ int32 param, /* a1 5 */ menu_ctrl_t ctrl) {
//     {
//         /* s0 16 */ MemCardInfo *mcard;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", do_memcard_load_menu);

// /* 001c9f68 00000080 */ int wait_memcard_load_menu(/* a0 4 */ int32 param) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", wait_memcard_load_menu);

// /* 001c9fe8 00000050 */ static int MEMCARDMENU_SaveFile(/* s1 17 */ int param, /* a1 5 */ menu_ctrl_t ctrl) {
//     {
//         /* s0 16 */ MemCardInfo *mcard;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_SaveFile);

// /* 001ca038 00000064 */ static int MEMCARDMENU_OverwriteFile(/* s2 18 */ int param, /* a1 5 */ menu_ctrl_t ctrl) {
//     {
//         /* s1 17 */ MemCardInfo *mcard;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_OverwriteFile);

// /* 001ca0a0 00000140 */ static int MEMCARDMENU_SaveComplete(/* s3 19 */ int index) {
//     /* s0 16 */ MemCardInfo *mcard;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_SaveComplete);

// /* 001ca1e0 00000058 */ int MEMCARDMENU_WaitSaveFile(/* a0 4 */ int32 param) {
//     /* a0 4 */ MemCardInfo *mcard;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_WaitSaveFile);

// /* 001ca238 00000028 */ static int MEMCARDMENU_FormatCard(/* a0 4 */ int param, /* a1 5 */ menu_ctrl_t ctrl) {
//     {
//         /* v1 3 */ MemCardInfo *mcard;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_FormatCard);

// /* 001ca260 0000006c */ static int MEMCARDMENU_WaitFormatCard(/* a0 4 */ int32 param) {
//     /* a0 4 */ MemCardInfo *mcard;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_WaitFormatCard);

// /* 001ca2d0 000001bc */ static int MEMCARDMENU_FormatMenu(/* s3 19 */ int index) {
//     /* s0 16 */ MemCardInfo *mcard;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_FormatMenu);

// /* 001ca490 0000013c */ static int MEMCARDMENU_OverwriteMenu(/* s4 20 */ int index) {
//     /* s3 19 */ MemCardInfo *mcard;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_OverwriteMenu);

// /* 001ca5d0 00000048 */ static int MEMCARDMENU_DoOverwriteMenu(/* a0 4 */ int param, /* a1 5 */ menu_ctrl_t ctrl) {
//     {
//         /* v1 3 */ MemCardInfo *mcard;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_DoOverwriteMenu);

// /* 001ca618 000003cc */ int MEMCARDMENU_SaveMenu(/* 0x0(sp) */ int index) {
//     /* s3 19 */ MemCardInfo *mcard;
//     {
//         /* s5 21 */ int used;
//         /* s0 16 */ int i;
//         /* s4 20 */ int firstunused;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_SaveMenu);

// /* 001ca9e8 00000058 */ void MEMCARDMENU_InitSaveMenu() {
//     /* s0 16 */ MemCardInfo *mcard;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", MEMCARDMENU_InitSaveMenu);

// /* 001caa40 00000030 */ int do_memcard_save_menu(/* a0 4 */ int32 param, /* a1 5 */ menu_ctrl_t ctrl) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", do_memcard_save_menu);

// /* 001caa70 00000040 */ int wait_memcard_save_menu(/* a0 4 */ int32 param) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/memcard/memcard", wait_memcard_save_menu);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7BB0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7BC8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7BE0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7C00);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7C28);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/memcard/memcard", D_002B7C30);

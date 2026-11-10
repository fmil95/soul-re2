/* Original path: C:\sr2\game\Main.c */
/* .text 0x0010AF20, .data 0x00229E60, .rodata 0x002B2800, .bss 0x0030DC00 */
/* Code from other files was inlined here: math3d.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 229e60 */ extern int nosound;
/* data 229e64 */ extern int nomusic;
/* data 229e68 */ extern int spectralStart;
/* data 229e70 */ extern InterfaceItem InterfaceItems[6];
/* data 229ff0 */ extern int32 DoMainMenu;
/* data 229ff4 */ extern int32 mainMenuMode;
/* data 229ff8 */ extern int32 *controlsScreen;
/* data 229ffc */ extern int16 mainMenuFadeInTime;
/* data 229ffe */ extern int16 mainMenuFading;
/* data 22a000 */ extern int gReaverDiags;
/* data 22a004 */ extern int gUseRealFont;
/* data 22a008 */ extern int gDebugHealthOn;
/* data 22a00c */ extern int32 gTextureArtistSwitch;
/* data 22a020 */ extern GameTracker gameTrackerX;
/* data 22a260 */ extern MainTracker mainTrackerX;
/* bss 30de08 */ extern char startUnit[32];
/* bss 30de28 */ extern int mainMenuSfx;

// /* 0010af20 00000010 */ void InitMainTracker(/* a0 4 */ MainTracker *mainTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", InitMainTracker);

// /* 0010af30 00000078 */ char* FindTextInLine(/* a0 4 */ char *search_match, /* a1 5 */ char *search_str) {
//     /* a2 6 */ char *match_pos;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", FindTextInLine);

// /* 0010afa8 00000054 */ void ExtractWorldName(/* a0 4 */ char *worldName, /* a1 5 */ char *levelName) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", ExtractWorldName);

// /* 0010b000 00000078 */ void ExtractLevelNum(/* a0 4 */ char *levelNum, /* a1 5 */ char *levelName) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", ExtractLevelNum);

// /* 0010b078 000000c0 */ static void GetArgParameter(/* v0 2 */ char *argData, /* a1 5 */ char *arg, /* s0 16 */ char *output) {
//     /* a1 5 */ char *ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", GetArgParameter);

// /* 0010b138 0000082c */ int ProcessArgs(/* s4 20 */ char *baseAreaName, /* s3 19 */ GameTracker *gameTracker) {
//     /* 0x0(sp) */ char levelNum[32];
//     /* 0x20(sp) */ char worldName[32];
//     /* s2 18 */ char *argData;
//     {
//         /* t0 8 */ char tz;
//     }
//     {
//         /* a1 5 */ int count;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", ProcessArgs);

// /* 0010b968 00000110 */ void MAIN_DoMainInit() {
//     /* 0x0(sp) */ char streamdir[256];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", MAIN_DoMainInit);

// /* 0010ba78 00000074 */ void MAIN_ResetGame() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", MAIN_ResetGame);

// /* 0010baf0 0000006c */ void MAIN_FailAbort(/* a0 4 */ char *fmt) {
//     /* bss 30dc00 */ static char error[256];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", MAIN_FailAbort);

// /* 0010bb60 00000058 */ void MAIN_ImportantWarning(/* v0 2 */ char *fmt) {
//     /* bss 30dd00 */ static char error[256];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", MAIN_ImportantWarning);

// /* 0010bbb8 00000064 */ void MAIN_MainMenuInit() {
//     {
//         /* 0x0(sp) */ char sfxFileName[64];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", MAIN_MainMenuInit);

// /* 0010bc20 0000002c */ void MAIN_FreeMainMenuStuff() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", MAIN_FreeMainMenuStuff);

// /* 0010bc50 00000288 */ void MAIN_ImageItemDisplay(/* s2 18 */ InterfaceItem *item) {
//     /* s4 20 */ IMAGEHANDLE image;
//     /* f22 60 */ float fadeval;
//     /* s5 21 */ int fadingout;
//     /* f20 58 */ float timemult;
//     /* s3 19 */ uint32 framestarttime;
//     /* v0 2 */ uint32 frameendtime;
//     /* f23 61 */ float timer;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", MAIN_ImageItemDisplay);

// /* 0010bed8 00000310 */ void MAIN_DoMainMenu(/* a0 4 */ MainTracker *mainTracker) {
//     /* s7 23 */ IMAGEHANDLE startScreen;
//     /* s6 22 */ IMAGEHANDLE optionsScreen;
//     /* s5 21 */ IMAGEHANDLE loadScreen;
//     /* s4 20 */ IMAGEHANDLE extrasScreen;
//     /* s3 19 */ uint32 starttime;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", MAIN_DoMainMenu);

// /* 0010c1e8 00000074 */ void MAIN_DoAttractMode(/* s1 17 */ MainTracker *mainTracker) {
//     /* bss 30de00 */ static int movienum;
//     /* data 22a010 */ static char *moviearray[4];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", MAIN_DoAttractMode);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2800);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2808);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2810);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2820);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2828);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2830);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2838);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2850);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2860);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2868);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2878);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2888);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2898);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B28A8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B28C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B28D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B28E0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B28F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2908);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2920);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2938);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2948);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2960);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2978);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2988);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2998);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B29A0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B29B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B29C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B29D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B29E0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B29F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2A00);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2A10);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2A20);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2A30);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2A40);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2A50);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2A60);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2A70);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2A80);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2A90);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2A98);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2AA8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2AB8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2AC8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2AD8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2AE0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2AE8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2AF8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2B08);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2B10);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2B18);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2B28);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2B40);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2B68);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2B70);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2B80);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2B90);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2BA0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2BA8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2BB0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2BB8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2BC0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Main", D_002B2BD0);

// /* 0010c260 00000568 */ int MainG2(/* 0x0(sp) */ G2AppData *appData) {
//     /* s2 18 */ MainTracker *mainTracker;
//     /* s6 22 */ GameTracker *gameTracker;
//     {
//         /* s0 16 */ InterfaceItem *item;
//     }
//     {
//         /* s0 16 */ InterfaceItem *item;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", MainG2);

// /* 0010c7c8 00000014 */ int32 MainTracker_IsGamePlaying() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", MainTracker_IsGamePlaying);

// /* 0010c7e0 00000014 */ int32 MainTracker_IsGamePaused() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Main", MainTracker_IsGamePaused);

/* Original path: C:\sr2\game\map.c */
/* .text 0x0016E4A8, .data 0x002A4460, .rodata 0x002B5E18, .bss 0x01E97190 */

#include "map.h"

// /* 0016e4a8 000000f0 */ void MAP_MatchColors(/* a0 4 */ IMAGEHANDLE image) {
//     /* v1 3 */ int i;
//     /* a1 5 */ int j;
//     /* a2 6 */ uint16 gcol;
//     /* a0 4 */ uint16 bcol;
//     /* a3 7 */ uint16 pcol;
//     /* t4 12 */ uint16 *palette;
//     {
//         /* v0 2 */ uint16 col16;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/map", MAP_MatchColors);

// /* 0016e598 00000050 */ void MAP_DimAllColors(/* s1 17 */ IMAGEHANDLE image) {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/map", MAP_DimAllColors);

// /* 0016e5e8 00000064 */ void MAP_ShowVisitedRegions(/* s2 18 */ IMAGEHANDLE image) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/map", MAP_ShowVisitedRegions);

// /* 0016e650 00000424 */ void MAP_Display() {
//     /* s2 18 */ IMAGEHANDLE image;
//     /* 0x0(sp) */ IMAGEHANDLE backdrop;
//     /* a0 4 */ int curPlayerRegion;
//     /* s3 19 */ int curRegion;
//     /* s6 22 */ int playerFadeValue;
//     /* 0x4(sp) */ int playerFadeStep;
//     /* s5 21 */ int borderFadeValue;
//     /* fp 30 */ int borderFadeStep;
//     /* s4 20 */ int goalFadeValue;
//     /* s7 23 */ int goalFadeStep;
//     /* s0 16 */ uint8 *tempbuf;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/map", MAP_Display);

// /* 0016ea78 00000010 */ void MAP_SetGoal(/* a0 4 */ int region) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/map", MAP_SetGoal);

// /* 0016ea88 00000020 */ void MAP_SetVisited(/* a0 4 */ int region) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/map", MAP_SetVisited);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/map", D_002B5E18);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/map", D_002B5E20);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/map", D_002B5E30);

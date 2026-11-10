/* Original path: C:\sr2\game\undrwrld.c */
/* .text 0x001C13D8, .rodata 0x002B7208 */
/* Code from other files was inlined here: math3d.h */

#include "common.h"

// /* 001c13d8 00000078 */ void UNDERWORLD_StartProcess(/* s0 16 */ char *baseAreaName) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/undrwrld", UNDERWORLD_StartProcess);

// /* 001c1450 00000148 */ StreamUnit* UNDERWORLD_LoadLevel(/* s0 16 */ char *baseAreaName, /* s4 20 */ GameTracker *gameTracker) {
//     /* 0x0(sp) */ Vector4f offset;
//     /* s1 17 */ StreamUnit *streamUnit;
//     /* s2 18 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/undrwrld", UNDERWORLD_LoadLevel);

// /* 001c1598 00000034 */ void UNDERWORLD_UpdatePlayer(/* a0 4 */ Intro *playerIntro, /* a1 5 */ Instance *instance) {
//     /* 0x0(sp) */ Vector4f offset;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/undrwrld", UNDERWORLD_UpdatePlayer);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/undrwrld", D_002B7208);

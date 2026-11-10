/* Original path: C:\sr2\game\ps2\ps2_g2\MainVM.c */
/* .text 0x0019B980, .rodata 0x002B67B8, .bss 0x01E99200 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 202b58 */ extern uint64 pad_nop;
/* bss 1e99200 */ extern G2AppDataVM _appDataVM;

// /* 0019b980 00000128 */ void PrintDefs() {
//     /* a1 5 */ unsigned int a;
//     /* s0 16 */ unsigned int b;
//     /* s1 17 */ unsigned int c;
//     /* s2 18 */ unsigned int d;
//     /* s3 19 */ unsigned int e;
//     /* s4 20 */ unsigned int f;
//     /* s5 21 */ unsigned int g;
//     /* s6 22 */ unsigned int h;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", PrintDefs);

// /* 0019baa8 000003c4 */ int main(/* s1 17 */ int argc, /* s0 16 */ char **argv) {
//     {
//         /* v1 3 */ int disk_type;
//         /* s0 16 */ int bDVD;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", main);

// /* 0019be70 00000068 */ G2Bool MainG2_UpdateLoop() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", MainG2_UpdateLoop);

// /* 0019bed8 00000058 */ void DBG_Print(/* a0 4 */ char *fmt) {
//     /* 0x0(sp) */ char msgstr[256];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", DBG_Print);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B67B8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B67D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B67E8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6800);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6818);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6830);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6848);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6860);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6878);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6898);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B68B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B68D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B68F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6918);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6938);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6960);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6978);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6990);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B69A0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B69B8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B69D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B69F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6A10);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6A30);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6A50);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6A70);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6A90);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6AB0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6AD0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/MainVM", D_002B6AF0);

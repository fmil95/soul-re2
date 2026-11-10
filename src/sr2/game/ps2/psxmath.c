/* Original path: C:\sr2\game\ps2\psxmath.c */
/* .text 0x0010C7F8, .data 0x0022A278 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 22a278 */ extern int _rsin_tbl[1025];
/* data 22b280 */ extern float _fsin_tbl[1025];
/* data 22c288 */ extern short int ratan_tbl[0];

// /* 0010c7f8 0000008c */ int rcos(/* a0 4 */ int a) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/psxmath", rcos);

// /* 0010c888 00000090 */ int rsin(/* a0 4 */ int a) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/psxmath", rsin);

// /* 0010c918 000000b8 */ float fcos(/* f12 50 */ float a) {
//     /* a0 4 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/psxmath", fcos);

// /* 0010c9d0 000000b4 */ float fsin(/* f12 50 */ float a) {
//     /* a0 4 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/psxmath", fsin);

// /* 0010ca88 00000110 */ int32 ratan2(/* a2 6 */ int y, /* a1 5 */ int x) {
//     /* a3 7 */ int xp;
//     /* t0 8 */ int yp;
//     /* a0 4 */ int r;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/psxmath", ratan2);

/* Original path: C:\sr2\game\ps2\psxmath.c */
/* .text 0x0010C7F8, .data 0x0022A278 */

#include "ps2/psxmath.h"

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

/* Original path: C:\sr2\game\weather.c */
/* .text 0x0016EAA8 */

#include "common.h"

// /* 0016eaa8 0000010c */ int Weather_GetHeight(/* a0 4 */ Level *level, /* a1 5 */ Vector4f *pos) {
//     /* t1 9 */ Vector4f *globalOffset;
//     /* a0 4 */ short int *grid_ptr;
//     /* t0 8 */ int x;
//     /* a3 7 */ int y;
//     /* a3 7 */ int xg;
//     /* a1 5 */ int yg;
//     /* a0 4 */ int z;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/weather", Weather_GetHeight);

// /* 0016ebb8 000000b8 */ int Weather_GetHeight_All(/* s3 19 */ Level *level, /* s2 18 */ Vector4f *pos) {
//     /* s1 17 */ int d;
//     /* v1 3 */ int result;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/weather", Weather_GetHeight_All);

// /* 0016ec70 000000c4 */ int Weather_GetHeight_Drawn(/* s3 19 */ Level *level, /* s2 18 */ Vector4f *pos) {
//     /* s1 17 */ int d;
//     /* v1 3 */ int result;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/weather", Weather_GetHeight_Drawn);

// /* 0016ed38 000000e8 */ int Weather_GetHeight_DrawnShort(/* s2 18 */ Level *level, /* a1 5 */ SVector *pos) {
//     /* s1 17 */ int d;
//     /* v1 3 */ int result;
//     /* 0x0(sp) */ Vector4f posf;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/weather", Weather_GetHeight_DrawnShort);

// /* 0016ee20 00000040 */ void Weather_RelocatePtrs(/* a0 4 */ Level *level, /* a1 5 */ int offset) {
//     /* a2 6 */ int n;
//     /* v0 2 */ short int *grid_ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/weather", Weather_RelocatePtrs);

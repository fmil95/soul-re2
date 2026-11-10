/* Original path: C:\sr2\game\ps2\movie\vobuf.c */
/* .text 0x001C6520, .rodata 0x002B7780 */

#include "common.h"

// /* 001c6520 0000009c */ void voBufCreate(/* s2 18 */ VoBuf *f, /* s0 16 */ VoData *data, /* s1 17 */ VoTag *tag, /* s3 19 */ int size) {
//     /* a2 6 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufCreate);

// /* 001c65c0 00000008 */ void voBufDelete(/* a0 4 */ VoBuf *f) {}
void voBufDelete(void) {
}

// /* 001c65c8 00000010 */ void voBufReset(/* a0 4 */ VoBuf *f) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufReset);

// /* 001c65d8 00000014 */ int voBufIsFull(/* a0 4 */ VoBuf *f) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufIsFull);

// /* 001c65f0 0000007c */ void voBufIncCount(/* a2 6 */ VoBuf *f) {
//     {
//         /* v0 2 */ u_int stat;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufIncCount);

// /* 001c6670 00000044 */ VoData* voBufGetData(/* s0 16 */ VoBuf *f) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufGetData);

// /* 001c66b8 0000000c */ int voBufIsEmpty(/* a0 4 */ VoBuf *f) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufIsEmpty);

// /* 001c66c8 00000064 */ VoTag* voBufGetTag(/* s0 16 */ VoBuf *f) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufGetTag);

// /* 001c6730 00000020 */ void voBufDecCount(/* a0 4 */ VoBuf *f) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vobuf", voBufDecCount);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/vobuf", D_002B7780);

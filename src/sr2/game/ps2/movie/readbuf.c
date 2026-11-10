/* Original path: C:\sr2\game\ps2\movie\readbuf.c */
/* .text 0x001C4B78 */

#include "common.h"

// /* 001c4b78 00000018 */ void readBufCreate(/* a0 4 */ ReadBuf *b) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/readbuf", readBufCreate);

// /* 001c4b90 00000008 */ void readBufDelete(/* a0 4 */ ReadBuf *b) {}
void readBufDelete(void) {
}

// /* 001c4b98 00000030 */ int readBufBeginPut(/* a0 4 */ ReadBuf *b, /* a1 5 */ u_char **ptr) {
//     /* v1 3 */ int size;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/readbuf", readBufBeginPut);

// /* 001c4bc8 00000044 */ int readBufEndPut(/* a0 4 */ ReadBuf *b, /* a1 5 */ int size) {
//     /* v0 2 */ int size_ok;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/readbuf", readBufEndPut);

// /* 001c4c10 00000048 */ int readBufBeginGet(/* a3 7 */ ReadBuf *b, /* a1 5 */ u_char **ptr) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/readbuf", readBufBeginGet);

// /* 001c4c58 00000024 */ int readBufEndGet(/* a0 4 */ ReadBuf *b, /* a1 5 */ int size) {
//     /* v0 2 */ int size_ok;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/readbuf", readBufEndGet);

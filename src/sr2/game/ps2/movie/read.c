/* Original path: C:\sr2\game\ps2\movie\read.c */
/* .text 0x001C4848, .rodata 0x002B76E0 */

#include "common.h"

// /* 001c4848 00000124 */ int videoCallback(/* a0 4 */ sceMpeg *mp, /* s4 20 */ sceMpegCbDataStr *str, /* s2 18 */ void *data) {
//     /* s3 19 */ u_char *ps0;
//     /* s0 16 */ int s0;
//     /* s1 17 */ int s1;
//     /* 0x0(sp) */ u_char *pd0;
//     /* 0x8(sp) */ u_char *pd1;
//     /* 0x4(sp) */ int d0;
//     /* 0xc(sp) */ int d1;
//     /* s0 16 */ int len;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/read", videoCallback);

// /* 001c4970 000000d4 */ int pcmCallback(/* a0 4 */ sceMpeg *mp, /* a1 5 */ sceMpegCbDataStr *str, /* a2 6 */ void *data) {
//     /* s3 19 */ ReadBuf *rb;
//     /* s2 18 */ u_char *ps0;
//     /* s0 16 */ int s0;
//     /* s1 17 */ int s1;
//     /* 0x0(sp) */ u_char *pd0;
//     /* 0x8(sp) */ u_char *pd1;
//     /* 0x4(sp) */ int d0;
//     /* 0xc(sp) */ int d1;
//     /* s1 17 */ int len;
//     /* s0 16 */ int ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/read", pcmCallback);

// /* 001c4a48 00000130 */ static int copy2area(/* s3 19 */ u_char *pd0, /* s0 16 */ int d0, /* s6 22 */ u_char *pd1, /* a3 7 */ int d1, /* s2 18 */ u_char *ps0, /* s1 17 */ int s0, /* s5 21 */ u_char *ps1, /* s7 23 */ int s1) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/read", copy2area);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/read", D_002B76E0);

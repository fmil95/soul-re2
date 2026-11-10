/* Original path: C:\sr2\game\ps2\movie\videodec.c */
/* .text 0x001C5C38, .rodata 0x002B7710, .bss 0x01E9B300 */

#include "ps2/movie/videodec.h"

// /* 001c5c38 00000100 */ int videoDecCreate(/* s0 16 */ VideoDec *vd, /* a1 5 */ u_char *mpegWork, /* a2 6 */ int mpegWorkSize, /* s1 17 */ u_long128 *data, /* s2 18 */ u_long128 *tag, /* s3 19 */ int tagSize, /* s4 20 */ TimeStamp *pts, /* s5 21 */ int n_pts) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecCreate);

// /* 001c5d38 0000001c */ void videoDecSetDecodeMode(/* a0 4 */ VideoDec *vd, /* a1 5 */ int ni, /* a2 6 */ int np, /* a3 7 */ int nb) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecSetDecodeMode);

// /* 001c5d58 00000020 */ int videoDecSetStream(/* a0 4 */ VideoDec *vd, /* a1 5 */ int strType, /* a2 6 */ int ch, /* a3 7 */ sceMpegCallback cb, /* t0 8 */ void *data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecSetStream);

// /* 001c5d78 0000001c */ void videoDecBeginPut(/* a0 4 */ VideoDec *vd, /* a1 5 */ u_char **ptr0, /* a2 6 */ int *len0, /* a3 7 */ u_char **ptr1, /* t0 8 */ int *len1) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecBeginPut);

// /* 001c5d98 0000001c */ void videoDecEndPut(/* a0 4 */ VideoDec *vd, /* a1 5 */ int size) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecEndPut);

// /* 001c5db8 00000008 */ void videoDecReset(/* a0 4 */ VideoDec *vd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecReset);

// /* 001c5dc0 00000034 */ int videoDecDelete(/* s0 16 */ VideoDec *vd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecDelete);

// /* 001c5df8 0000000c */ void videoDecAbort(/* a0 4 */ VideoDec *vd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecAbort);

// /* 001c5e08 00000008 */ u_int videoDecGetState(/* a0 4 */ VideoDec *vd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecGetState);

// /* 001c5e10 0000000c */ u_int videoDecSetState(/* a0 4 */ VideoDec *vd, /* a1 5 */ u_int state) {
//     /* v0 2 */ u_int old;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecSetState);

// /* 001c5e20 0000003c */ int videoDecPutTs(/* a0 4 */ VideoDec *vd, /* a1 5 */ long int pts_val, /* a2 6 */ long int dts_val, /* a3 7 */ u_char *start, /* t0 8 */ int len) {
//     /* 0x0(sp) */ TimeStamp ts;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecPutTs);

// /* 001c5e60 0000001c */ int videoDecInputCount(/* a0 4 */ VideoDec *vd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecInputCount);

// /* 001c5e80 00000034 */ int videoDecInputSpaceCount(/* a0 4 */ VideoDec *vd) {
//     /* 0x0(sp) */ u_char *ptr0;
//     /* 0x8(sp) */ u_char *ptr1;
//     /* 0x4(sp) */ int len0;
//     /* 0xc(sp) */ int len1;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecInputSpaceCount);

// /* 001c5eb8 000000cc */ int videoDecFlush(/* s0 16 */ VideoDec *vd) {
//     /* 0x10(sp) */ u_char *pd0;
//     /* 0x18(sp) */ u_char *pd1;
//     /* 0x0(sp) */ u_char seq_end_code[4];
//     /* 0x14(sp) */ int d0;
//     /* 0x1c(sp) */ int d1;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecFlush);

// /* 001c5f88 00000048 */ int videoDecIsFlushed(/* s0 16 */ VideoDec *vd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecIsFlushed);

// /* 001c5fd0 0000000c */ void videoDecStart(/* a0 4 */ VideoDec *vd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecStart);

// /* 001c5fe0 00000088 */ void videoDecMain(/* s0 16 */ VideoDec *vd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecMain);

// /* 001c6068 0000001c */ void videoDecStep(/* a0 4 */ VideoDec *vd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", videoDecStep);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/videodec", D_002B7710);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/videodec", D_002B7718);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/videodec", D_002B7730);

// /* 001c6088 00000278 */ int decBs0(/* s1 17 */ VideoDec *vd) {
//     /* v0 2 */ VoData *voData;
//     /* s2 18 */ int ret;
//     /* 0x0(sp) */ int status;
//     {
//         /* v1 3 */ int vf;
//     }
//     {
//         /* s2 18 */ int i;
//         /* s6 22 */ int image_w;
//         /* s7 23 */ int image_h;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", decBs0);

// /* 001c6300 00000028 */ int mpegError(/* a0 4 */ sceMpeg *mp, /* a1 5 */ sceMpegCbDataError *cberror, /* a2 6 */ void *anyData) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", mpegError);

// /* 001c6328 0000002c */ int mpegNodata(/* a0 4 */ sceMpeg *mp, /* a1 5 */ sceMpegCbData *cbdata, /* a2 6 */ void *anyData) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", mpegNodata);

// /* 001c6358 00000024 */ int mpegStopDMA(/* a0 4 */ sceMpeg *mp, /* a1 5 */ sceMpegCbData *cbdata, /* a2 6 */ void *anyData) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", mpegStopDMA);

// /* 001c6380 00000024 */ int mpegRestartDMA(/* a0 4 */ sceMpeg *mp, /* a1 5 */ sceMpegCbData *cbdata, /* a2 6 */ void *anyData) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", mpegRestartDMA);

// /* 001c63a8 00000044 */ int mpegTS(/* a0 4 */ sceMpeg *mp, /* s0 16 */ sceMpegCbDataTimeStamp *cbts, /* a2 6 */ void *anyData) {
//     /* 0x0(sp) */ TimeStamp ts;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", mpegTS);

// /* 001c63f0 00000130 */ static int cpy2area(/* s3 19 */ u_char *pd0, /* s0 16 */ int d0, /* s6 22 */ u_char *pd1, /* a3 7 */ int d1, /* s2 18 */ u_char *ps0, /* s1 17 */ int s0, /* s5 21 */ u_char *ps1, /* s7 23 */ int s1) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/videodec", cpy2area);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/videodec", D_002B7778);

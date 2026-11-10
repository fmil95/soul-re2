/* Original path: C:\sr2\game\ps2\movie\audiodec.c */
/* .text 0x001C38C8, .rodata 0x002B74C0, .bss 0x01E9AB00 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* bss 1e9ab00 */ extern char _0_buf[2048];

// /* 001c38c8 00000128 */ int audioDecCreate(/* s2 18 */ AudioDec *ad, /* s0 16 */ u_char *buff, /* s1 17 */ int buffSize, /* s3 19 */ int iopBuffSize) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", audioDecCreate);

// /* 001c39f0 0000005c */ int audioDecDelete(/* s0 16 */ AudioDec *ad) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", audioDecDelete);

// /* 001c3a50 00000084 */ void audioDecPause(/* s0 16 */ AudioDec *ad) {
//     /* v0 2 */ int ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", audioDecPause);

// /* 001c3ad8 0000006c */ void audioDecResume(/* s0 16 */ AudioDec *ad) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", audioDecResume);

// /* 001c3b48 0000001c */ void audioDecStart(/* a0 4 */ AudioDec *ad) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", audioDecStart);

// /* 001c3b68 00000044 */ void audioDecReset(/* s0 16 */ AudioDec *ad) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", audioDecReset);

// /* 001c3bb0 000000b0 */ void audioDecBeginPut(/* t1 9 */ AudioDec *ad, /* a1 5 */ u_char **ptr0, /* a2 6 */ int *len0, /* a3 7 */ u_char **ptr1, /* t0 8 */ int *len1) {
//     /* t2 10 */ int len;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", audioDecBeginPut);

// /* 001c3c60 0000011c */ void audioDecEndPut(/* s0 16 */ AudioDec *ad, /* s1 17 */ int size) {
//     {
//         /* s2 18 */ int hdr_add;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", audioDecEndPut);

// /* 001c3d80 00000014 */ int audioDecIsPreset(/* a0 4 */ AudioDec *ad) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", audioDecIsPreset);

// /* 001c3d98 000001b0 */ int audioDecSendToIOP(/* s0 16 */ AudioDec *ad) {
//     /* 0x0(sp) */ int pd0;
//     /* 0x8(sp) */ int pd1;
//     /* 0x4(sp) */ int d0;
//     /* 0xc(sp) */ int d1;
//     /* t0 8 */ u_char *ps0;
//     /* t1 9 */ int s0;
//     /* t3 11 */ int s1;
//     /* s1 17 */ int count_sent;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", audioDecSendToIOP);

// /* 001c3f48 000000a8 */ static void iopGetArea(/* t4 12 */ int *pd0, /* a1 5 */ int *d0, /* a2 6 */ int *pd1, /* a3 7 */ int *d1, /* t2 10 */ AudioDec *ad, /* t1 9 */ int pos) {
//     /* t1 9 */ int len;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", iopGetArea);

// /* 001c3ff0 00000148 */ static int sendToIOP2area(/* s5 21 */ int pd0, /* s1 17 */ int d0, /* s7 23 */ int pd1, /* a3 7 */ int d1, /* s4 20 */ u_char *ps0, /* s0 16 */ int s0, /* s6 22 */ u_char *ps1, /* s2 18 */ int s1) {
//     {
//         /* v1 3 */ int diff;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", sendToIOP2area);

// /* 001c4138 00000074 */ static int sendToIOP(/* v0 2 */ int dst, /* a1 5 */ u_char *src, /* s1 17 */ int size) {
//     /* 0x0(sp) */ sceSifDmaData transData;
//     /* s0 16 */ int did;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", sendToIOP);

// /* 001c41b0 00000068 */ static void changeMasterVolume(/* s1 17 */ u_int val) {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", changeMasterVolume);

// /* 001c4218 00000048 */ static void changeInputVolume(/* s0 16 */ u_int val) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/audiodec", changeInputVolume);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/audiodec", D_002B74C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/audiodec", D_002B74E0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/audiodec", D_002B7510);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/audiodec", D_002B7548);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/audiodec", D_002B7688);

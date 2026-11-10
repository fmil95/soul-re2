/* Original path: C:\sr2\game\ps2\movie\movie.c */
/* .text 0x001C2EB8, .data 0x002A61E0, .rodata 0x002B73A8, .bss 0x01E9AAD4 */

#include "ps2/movie/movie.h"

// /* 001c2eb8 00000280 */ int ps2_play_movie(/* s0 16 */ char *name) {
//     /* fp 30 */ int fh;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", ps2_play_movie);

// /* 001c3138 00000070 */ static u_int movie(/* s0 16 */ int fh) {
//     /* data 2a61e4 */ static int count;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", movie);

// /* 001c31a8 000002fc */ static int readMpeg(/* s4 20 */ VideoDec *vd, /* s3 19 */ ReadBuf *rb, /* s0 16 */ int fh) {
//     /* 0x20(sp) */ u_char *put_ptr;
//     /* 0x24(sp) */ u_char *get_ptr;
//     /* v1 3 */ int putsize;
//     /* a2 6 */ int getsize;
//     /* s6 22 */ int readrest;
//     /* s5 21 */ int writerest;
//     /* s1 17 */ int count;
//     /* v0 2 */ int proceed;
//     /* 0x28(sp) */ int isStarted;
//     /* fp 30 */ u_int button_old;
//     /* v0 2 */ u_int pushed;
//     /* 0x0(sp) */ u_char cdata[32];
//     /* s7 23 */ int stream;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", readMpeg);

// /* 001c34a8 0000001c */ void switchThread() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", switchThread);

// /* 001c34c8 00000020 */ static int isAudioOK() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", isAudioOK);

// /* 001c34e8 00000214 */ static void initAll() {
//     /* 0x0(sp) */ ThreadParam th_param;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", initAll);

// /* 001c3700 000000d4 */ static void termAll(/* s2 18 */ int fh) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", termAll);

// /* 001c37d8 00000018 */ static void defMain() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", defMain);

// /* 001c37f0 00000024 */ void ErrMessage(/* a1 5 */ char *message) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", ErrMessage);

// /* 001c3818 00000020 */ void proceedAudio() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", proceedAudio);

// /* 001c3838 00000008 */ int MOVIE_Open() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", MOVIE_Open);

// /* 001c3840 00000078 */ int MOVIE_Play(/* s0 16 */ char *name) {
//     /* 0x0(sp) */ char fname[256];
//     /* v0 2 */ int played;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", MOVIE_Play);

// /* 001c38b8 00000008 */ void MOVIE_Close() {}
void MOVIE_Close(void) {
}

// /* 001c38c0 00000008 */ int MOVIE_Loaded() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/movie", MOVIE_Loaded);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B73A8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B73B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B73C8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B7410);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B7418);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B7420);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B7430);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B7448);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B7458);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B7468);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B7478);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B7488);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B7498);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/movie", D_002B74B0);

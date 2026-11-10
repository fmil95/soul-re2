/* Original path: C:\sr2\game\ps2\movie\vibuf.c */
/* .text 0x001C4C80, .rodata 0x002B76F8 */

#include "common.h"

// /* 001c4c80 00000044 */ int getFIFOindex(/* a2 6 */ ViBuf *f, /* a1 5 */ void *addr) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", getFIFOindex);

// /* 001c4cc8 0000006c */ void setD3_CHCR(/* t0 8 */ u_int val) {
//     {
//         /* v0 2 */ u_int stat;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", setD3_CHCR);

// /* 001c4d38 0000006c */ void setD4_CHCR(/* t0 8 */ u_int val) {
//     {
//         /* v0 2 */ u_int stat;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", setD4_CHCR);

// /* 001c4da8 00000024 */ void scTag2(/* a0 4 */ QWORD *q, /* a1 5 */ void *addr, /* a2 6 */ u_int id, /* a3 7 */ u_int qwc) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", scTag2);

// /* 001c4dd0 00000078 */ int viBufCreate(/* s0 16 */ ViBuf *f, /* a1 5 */ u_long128 *data, /* a2 6 */ u_long128 *tag, /* a3 7 */ int size, /* t0 8 */ TimeStamp *ts, /* t1 9 */ int n_ts) {
//     /* 0x0(sp) */ SemaParam param;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufCreate);

// /* 001c4e48 00000160 */ int viBufReset(/* s1 17 */ ViBuf *f) {
//     /* s2 18 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufReset);

// /* 001c4fa8 000000f4 */ void viBufBeginPut(/* s0 16 */ ViBuf *f, /* s1 17 */ u_char **ptr0, /* s2 18 */ int *len0, /* s3 19 */ u_char **ptr1, /* s4 20 */ int *len1) {
//     /* a1 5 */ int en;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufBeginPut);

// /* 001c50a0 00000054 */ void viBufEndPut(/* s0 16 */ ViBuf *f, /* s1 17 */ int size) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufEndPut);

// /* 001c50f8 000001fc */ int viBufAddDMA(/* s2 18 */ ViBuf *f) {
//     /* s1 17 */ int i;
//     /* s0 16 */ int index;
//     /* s5 21 */ u_int d4chcr;
//     /* s7 23 */ int isNewData;
//     /* s3 19 */ int read_n;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufAddDMA);

// /* 001c52f8 000000f4 */ int viBufStopDMA(/* s0 16 */ ViBuf *f) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufStopDMA);

// /* 001c53f0 000002f8 */ int viBufRestartDMA(/* s0 16 */ ViBuf *f) {
//     /* s6 22 */ int bp;
//     /* v0 2 */ int fp;
//     /* v1 3 */ int ifc;
//     /* s2 18 */ u_int d4madr_next;
//     /* s5 21 */ u_int d4qwc_next;
//     /* s4 20 */ u_int d4tadr_next;
//     /* s3 19 */ u_int d4chcr_next;
//     /* s1 17 */ int index;
//     /* t6 14 */ int index_next;
//     /* a0 4 */ int id;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufRestartDMA);

// /* 001c56e8 00000058 */ int viBufDelete(/* s0 16 */ ViBuf *f) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufDelete);

// /* 001c5740 00000040 */ int viBufIsActive(/* s0 16 */ ViBuf *f) {
//     /* s1 17 */ int ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufIsActive);

// /* 001c5780 0000004c */ int viBufCount(/* s0 16 */ ViBuf *f) {
//     /* s1 17 */ int ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufCount);

// /* 001c57d0 00000054 */ void viBufFlush(/* s0 16 */ ViBuf *f) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufFlush);

// /* 001c5828 00000154 */ int viBufModifyPts(/* t1 9 */ ViBuf *f, /* t3 11 */ TimeStamp *new_ts) {
//     /* a2 6 */ TimeStamp *ts;
//     /* t2 10 */ int rd;
//     /* t0 8 */ int datasize;
//     /* t5 13 */ int loop;
//     {
//         /* a0 4 */ int tgt;
//         /* a1 5 */ int pos;
//         /* t0 8 */ int size;
//     }
//     {
//         /* v0 2 */ int len;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufModifyPts);

// /* 001c5980 00000110 */ int viBufPutTs(/* s0 16 */ ViBuf *f, /* s1 17 */ TimeStamp *ts) {
//     /* s2 18 */ int ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufPutTs);

// /* 001c5a90 000001a4 */ int viBufGetTs(/* s2 18 */ ViBuf *f, /* s5 21 */ TimeStamp *ts) {
//     /* s0 16 */ u_int d4madr;
//     /* v0 2 */ u_int ipubp;
//     /* s1 17 */ int bp;
//     /* v0 2 */ int fp;
//     /* v1 3 */ int ifc;
//     /* s0 16 */ u_int d4madr_next;
//     /* s3 19 */ int datasize;
//     /* s4 20 */ int isEnd;
//     /* t0 8 */ int tscount;
//     /* a0 4 */ int wt;
//     /* a3 7 */ int i;
//     {
//         /* v1 3 */ int pos;
//         /* a0 4 */ int len;
//         /* s3 19 */ int size;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/vibuf", viBufGetTs);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/vibuf", D_002B76F8);

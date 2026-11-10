/* Original path: C:\sr2\game\ps2\movie\disp.c */
/* .text 0x001C4260, .data 0x002A6560, .rodata 0x002B76C0 */

#include "ps2/movie/disp.h"

// /* 001c4260 00000380 */ void setImageTag(/* a0 4 */ u_int *tags, /* s4 20 */ void *image, /* s1 17 */ int index, /* 0x50(sp) */ int image_w, /* 0x54(sp) */ int image_h) {
//     /* 0x58(sp) */ int mbx;
//     /* 0x5c(sp) */ int mby;
//     /* v1 3 */ int i;
//     /* s1 17 */ int j;
//     /* 0x0(sp) */ Rect tex;
//     /* 0x10(sp) */ Rect poly;
//     /* 0x20(sp) */ sceGifPacket packet;
//     /* 0x30(sp) */ u_long giftag[2];
//     /* 0x40(sp) */ u_long giftag_eop[2];
//     {
//         /* v0 2 */ u_long *tag;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/disp", setImageTag);

// /* 001c45e0 000001cc */ int vblankHandler(/* a0 4 */ int val) {
//     /* s2 18 */ sceDmaChan *dmaGif_loadimage;
//     {
//         /* s0 16 */ VoTag *tag;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/disp", vblankHandler);

// /* 001c47b0 00000048 */ int handler_endimage(/* a0 4 */ int val) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/disp", handler_endimage);

// /* 001c47f8 00000038 */ void startDisplay(/* a0 4 */ int waitEven) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/disp", startDisplay);

// /* 001c4830 00000014 */ void endDisplay() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/movie/disp", endDisplay);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/disp", D_002B76C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/movie/disp", D_002B76D0);

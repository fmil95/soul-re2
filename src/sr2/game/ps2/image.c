/* Original path: C:\sr2\game\ps2\image.c */
/* .text 0x00169670 */

#include "ps2/image.h"

// /* 00169670 00000024 */ static int log2(/* a0 4 */ int in) {
//     /* v0 2 */ int count;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/image", log2);

// /* 00169698 00000080 */ void IMAGE_FreeImage(/* a0 4 */ IMAGEHANDLE hnd) {
//     /* s2 18 */ ImageInfo *image;
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/image", IMAGE_FreeImage);

// /* 00169718 000002ec */ ImageInfo* IMAGE_LoadPreloadedImage(/* s3 19 */ RAWHeader *rawHeader) {
//     /* 0x0(sp) */ VramTextureHeader header;
//     /* fp 30 */ ImageInfo *image;
//     /* s0 16 */ int numImages;
//     /* s4 20 */ int x;
//     /* s7 23 */ int y;
//     /* 0x20(sp) */ int entry;
//     /* 0x24(sp) */ int pixsize;
//     /* 0x28(sp) */ int attr;
//     /* 0x2c(sp) */ uint16 *clut;
//     /* s6 22 */ uint8 *dest;
//     {
//         /* s0 16 */ int w;
//         /* s1 17 */ int h;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/image", IMAGE_LoadPreloadedImage);

// /* 00169a08 00000044 */ IMAGEHANDLE IMAGE_LoadImage(/* a0 4 */ char *name) {
//     /* v0 2 */ ImageInfo *image;
//     /* s0 16 */ RAWHeader *rawHeader;
//     /* 0x0(sp) */ char filename[256];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/image", IMAGE_LoadImage);

// /* 00169a50 00000048 */ IMAGEHANDLE IMAGE_LoadImageToBuffer(/* a0 4 */ char *name, /* s0 16 */ void *buffer) {
//     /* v1 3 */ ImageInfo *image;
//     /* 0x0(sp) */ char filename[256];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/image", IMAGE_LoadImageToBuffer);

// /* 00169a98 0000031c */ void IMAGE_DrawImage(/* t1 9 */ IMAGEHANDLE hnd, /* f12 50 */ float xo, /* f13 51 */ float yo, /* f14 52 */ float wo, /* f15 53 */ float ho, /* f20 58 */ float zplane, /* a1 5 */ unsigned int r, /* a2 6 */ unsigned int g, /* a3 7 */ unsigned int b) {
//     /* s4 20 */ int x;
//     /* a1 5 */ int y;
//     /* 0x40(sp) */ int i;
//     /* 0x44(sp) */ int xcoor;
//     /* 0x48(sp) */ int ycoor;
//     /* fp 30 */ int w;
//     /* t2 10 */ int h;
//     /* 0x4c(sp) */ uint32 color;
//     {
//         /* a1 5 */ int tex;
//         /* 0x0(sp) */ MYPS2VERTEX verts[2];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/image", IMAGE_DrawImage);

// /* 00169db8 00000018 */ uint16* IMAGE_GetPalette(/* a0 4 */ IMAGEHANDLE hnd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/image", IMAGE_GetPalette);

// /* 00169dd0 00000050 */ void IMAGE_RemapPaletteEntry(/* a0 4 */ IMAGEHANDLE hnd, /* a1 5 */ int index, /* a2 6 */ uint16 newCol) {
//     /* t0 8 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/image", IMAGE_RemapPaletteEntry);

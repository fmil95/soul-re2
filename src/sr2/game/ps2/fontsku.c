/* Original path: C:\sr2\game\ps2\fontsku.c */
/* .text 0x00127718, .data 0x00256ED0, .rodata 0x002B45D0, .bss 0x006925AC */

#include "ps2/fontsku.h"

// /* 00127718 0000002c */ void FONTSKU_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/fontsku", FONTSKU_Init);

// /* 00127748 00000008 */ void FONTSKU_DeInit() {}
void FONTSKU_DeInit(void) {
}

// /* 00127750 00000014 */ void FONTSKU_SetRes(/* f12 50 */ float xres, /* f13 51 */ float yres) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/fontsku", FONTSKU_SetRes);

// /* 00127768 00000018 */ float FONTSKU_GetFontHeight() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/fontsku", FONTSKU_GetFontHeight);

// /* 00127780 00000098 */ float FONTSKU_GetTextWidth(/* a0 4 */ char *text, /* a1 5 */ int len) {
//     /* a1 5 */ int i;
//     /* v1 3 */ int width;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/fontsku", FONTSKU_GetTextWidth);

// /* 00127818 00000220 */ float FONTSKU_DrawChar(/* f12 50 */ float x, /* f13 51 */ float y, /* a0 4 */ unsigned char c, /* f14 52 */ float yscale) {
//     /* 0x0(sp) */ MYPS2VERTEX verts[2];
//     /* v0 2 */ int ix0;
//     /* v1 3 */ int iy0;
//     /* a0 4 */ int ix1;
//     /* a1 5 */ int iy1;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/fontsku", FONTSKU_DrawChar);

// /* 00127a38 00000008 */ void FONTSKU_InitFlush() {}
void FONTSKU_InitFlush(void) {
}

// /* 00127a40 00000008 */ void FONTSKU_DeInitFlush() {}
void FONTSKU_DeInitFlush(void) {
}

// /* 00127a48 0000008c */ void FONTSKU_ChangeColor(/* a0 4 */ unsigned char r, /* v1 3 */ unsigned char g, /* a2 6 */ unsigned char b, /* a3 7 */ unsigned char alpha) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/fontsku", FONTSKU_ChangeColor);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/fontsku", D_002B45D0);

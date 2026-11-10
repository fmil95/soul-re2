/* Original path: C:\sr2\game\font.c */
/* .text 0x00126FC0, .data 0x00256E90, .bss 0x0068E1A8 */

#include "font.h"

// /* 00126fc0 00000044 */ static void* FONTMEM_Alloc(/* a0 4 */ int32 size) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONTMEM_Alloc);

// /* 00127008 0000000c */ static void FONTMEM_FreeAll() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONTMEM_FreeAll);

// /* 00127018 0000003c */ static void FONT_ConvertCursor(/* a0 4 */ int x, /* a1 5 */ int y, /* a2 6 */ float *cursx, /* a3 7 */ float *cursy) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_ConvertCursor);

// /* 00127058 00000028 */ static void FONT_AddEntry(/* a0 4 */ TextEntry *entry) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_AddEntry);

// /* 00127080 00000120 */ void FONT_PrintFormatted(/* s2 18 */ char *formatted) {
//     /* s1 17 */ int i;
//     /* s3 19 */ int len;
//     /* 0x0(sp) */ int32 x;
//     /* 0x4(sp) */ int32 y;
//     /* s0 16 */ TextEntry *newEntry;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_PrintFormatted);

// /* 001271a0 00000028 */ void FONT_SetCursor(/* a0 4 */ int32 x, /* a1 5 */ int32 y) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_SetCursor);

// /* 001271c8 00000040 */ void FONT_GetCursor(/* a0 4 */ int32 *x, /* a1 5 */ int32 *y) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_GetCursor);

// /* 00127208 000000a8 */ void FONT_Print(/* a0 4 */ char *fmt) {
//     /* s1 17 */ char *hold;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_Print);

// /* 001272b0 00000068 */ void FONT_Print2(/* a0 4 */ char *fmt) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_Print2);

// /* 00127318 00000028 */ float FONT_GetHeight() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_GetHeight);

// /* 00127340 00000164 */ void FONT_Flush() {
//     /* s2 18 */ TextEntry *entry;
//     {
//         /* f20 58 */ float curx;
//         /* f21 59 */ float cury;
//         /* s1 17 */ int len;
//         /* s1 17 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_Flush);

// /* 001274a8 000000a8 */ void FONT_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_Init);

// /* 00127550 0000000c */ void FONT_SetColorIndex(/* a0 4 */ int color) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_SetColorIndex);

// /* 00127560 0000002c */ void FONT_SetColorIndexCol(/* a0 4 */ int color, /* a1 5 */ int r, /* a2 6 */ int g, /* a3 7 */ int b) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_SetColorIndexCol);

// /* 00127590 0000000c */ void FONT_SetAlpha(/* a0 4 */ int a) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_SetAlpha);

// /* 001275a0 0000000c */ void FONT_SetYScale(/* f12 50 */ float scale) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_SetYScale);

// /* 001275b0 00000008 */ void FONT_ReloadFont() {}
void FONT_ReloadFont(void) {
}

// /* 001275b8 00000044 */ int FONT_GetStringWidth(/* s0 16 */ char *str) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_GetStringWidth);

// /* 00127600 00000118 */ void FONT_PrintCentered(/* a0 4 */ char *text, /* s3 19 */ int32 y) {
//     /* s1 17 */ char *start;
//     /* s2 18 */ char *end;
//     /* 0x0(sp) */ char temp[80];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/font", FONT_PrintCentered);

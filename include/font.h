#ifndef FONT_H
#define FONT_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 256e90 */ extern float cursorX;
/* data 256e94 */ extern float cursorY;
/* data 256e98 */ extern int curColorIndex;
/* data 256e9c */ extern float curYScale;
/* data 256ea0 */ extern TextEntry *entryList;
/* data 256ea4 */ extern TextEntry *topEntry;
/* data 256ea8 */ extern FontColor fontColors[7];
/* data 256ec0 */ extern int curalpha;
/* data 256ec4 */ extern float TargetXRes;
/* data 256ec8 */ extern float TargetYRes;
/* bss 68e1a8 */ extern char formattedMsg[1024];
/* bss 68e5a8 */ extern char fontMem[16384];
/* bss 6925a8 */ extern int curMemPtr;

/* Non-static functions of this unit (STABS signatures). */
void FONT_PrintFormatted(char *formatted);
void FONT_SetCursor(int32 x, int32 y);
void FONT_GetCursor(int32 *x, int32 *y);
void FONT_Print(char *fmt);
void FONT_Print2(char *fmt);
float FONT_GetHeight(void);
void FONT_Flush(void);
void FONT_Init(void);
void FONT_SetColorIndex(int color);
void FONT_SetColorIndexCol(int color, int r, int g, int b);
void FONT_SetAlpha(int a);
void FONT_SetYScale(float scale);
void FONT_ReloadFont(void);
int FONT_GetStringWidth(char *str);
void FONT_PrintCentered(char *text, int32 y);

#endif /* FONT_H */

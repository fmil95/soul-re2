#ifndef PS2_FONTSKU_H
#define PS2_FONTSKU_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 256ed0 */ extern uint32 font_tpageid;
/* data 256ed4 */ extern uint32 textColor;
/* data 256ed8 */ extern FontPos fontPos[0];
/* bss 6925ac */ extern float targetXRes;
/* bss 6925b0 */ extern float targetYRes;

/* Non-static functions of this unit (STABS signatures). */
void FONTSKU_Init(void);
void FONTSKU_DeInit(void);
void FONTSKU_SetRes(float xres, float yres);
float FONTSKU_GetFontHeight(void);
float FONTSKU_GetTextWidth(char *text, int len);
float FONTSKU_DrawChar(float x, float y, unsigned char c, float yscale);
void FONTSKU_InitFlush(void);
void FONTSKU_DeInitFlush(void);
void FONTSKU_ChangeColor(unsigned char r, unsigned char g, unsigned char b, unsigned char alpha);

#endif /* PS2_FONTSKU_H */

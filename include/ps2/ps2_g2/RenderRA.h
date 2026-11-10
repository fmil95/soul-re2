#ifndef PS2_PS2_G2_RENDERRA_H
#define PS2_PS2_G2_RENDERRA_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a6040 */ extern int32 gFrameBlendEnabled;
/* data 2a6044 */ extern int32 gFrameBlendAlpha;
/* data 2a6048 */ extern int32 gFrameBlendTimeout;
/* data 2a604c */ extern float gFrameBlendAlphaStep;
/* data 2a6050 */ extern sceDmaChan *dmaGif;
/* data 2a6054 */ extern sceDmaChan *dmaFromIPU;
/* data 2a6058 */ extern int PS2_fogstart;
/* data 2a605c */ extern int PS2_fogend;
/* data 2a6060 */ extern int PS2_fognear;
/* data 2a6064 */ extern int PS2_fogfar;
/* data 2a6068 */ extern int PS2_fogmult;
/* data 2a606c */ extern int PS2_fogColorR;
/* data 2a6070 */ extern int PS2_fogColorG;
/* data 2a6074 */ extern int PS2_fogColorB;
/* data 2a6078 */ extern int blitRed;
/* data 2a607c */ extern int blitGreen;
/* data 2a6080 */ extern int blitBlue;
/* data 2a6090 */ extern Vector4f PS2_Fog;
/* data 2a60a0 */ extern sceGsDispEnv disp_ps2;
/* data 2a60c8 */ extern int32 gFrameBlendAlphaTarget;
/* data 2a60cc */ extern float gFrameBlendAlphaf;
/* bss 1e992c0 */ extern BackBufferCopy backBufferPacket;

/* Non-static functions of this unit (STABS signatures). */
void Gs_Initialize(void);
G2Bool RenderG2_Init(G2AppData *appData);
void RenderG2_ShutDown(G2AppData *appData);
void RenderG2_GetBlitTag(DmaTag *tag);
void RenderG2_SetHalfOffset(void);
void RenderG2_BeginScene(void);
void RenderG2_EndScene(void);
void RenderG2_SetFog(int r, int g, int b, int fognear, int fogfar);
void RenderG2_SetBGColor(int r, int g, int b);
void RenderG2_SetBlitColor(int r, int g, int b);
void RenderG2_MotionBlur(int blur, int time, int timeout);
void RenderG2_Message(char *str);
int RenderG2_SetupDevCons(void);
void RenderG2_ClearBuffer(int r, int g, int b, int disp_width, int disp_height);
void RenderG2_InitSpecialTextures(TexEnvTranslucent *texEnv);

#endif /* PS2_PS2_G2_RENDERRA_H */

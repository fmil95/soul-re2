/* Original path: C:\sr2\game\ps2\ps2_g2\RenderRA.c */
/* .text 0x0019BF30, .data 0x002A6040, .rodata 0x002B6B10, .bss 0x01E99240 */
/* Code from other files was inlined here: mempack.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
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

// /* 0019bf30 000001e4 */ static void InitBlit() {
//     /* t8 24 */ int x;
//     /* v0 2 */ TexEnvTranslucent *texEnv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", InitBlit);

// /* 0019c118 00000404 */ void Gs_Initialize() {
//     /* 0x20(sp) */ sceVif1Packet packet[2];
//     /* 0x60(sp) */ sceDmaEnv env;
//     /* s5 21 */ sceDmaChan *p1;
//     /* 0x80(sp) */ uint64 giftagAD[2];
//     {
//         /* bss 1e99240 */ static DmaTag init[3];
//         /* v1 3 */ DmaTag *tag;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", Gs_Initialize);

// /* 0019c520 00000044 */ G2Bool RenderG2_Init(/* a0 4 */ G2AppData *appData) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_Init);

// /* 0019c568 00000008 */ void RenderG2_ShutDown(/* a0 4 */ G2AppData *appData) {}
void RenderG2_ShutDown(void) {
}

// /* 0019c570 00000030 */ void RenderG2_GetBlitTag(/* a0 4 */ DmaTag *tag) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_GetBlitTag);

// /* 0019c5a0 00000044 */ void RenderG2_SetHalfOffset() {
//     /* a1 5 */ uint32 *ptr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_SetHalfOffset);

// /* 0019c5e8 00000044 */ void RenderG2_BeginScene() {
//     {
//         /* v1 3 */ void *ret;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_BeginScene);

// /* 0019c630 00000290 */ void RenderG2_EndScene() {
//     /* bss 1e99270 */ static uint32 cpuStartTime;
//     /* v1 3 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_EndScene);

// /* 0019c8c0 000001cc */ void RenderG2_SetFog(/* a0 4 */ int r, /* a1 5 */ int g, /* a2 6 */ int b, /* a3 7 */ int fognear, /* t0 8 */ int fogfar) {
//     /* f5 43 */ float start;
//     /* f1 39 */ float end;
//     /* f3 41 */ float mult;
//     /* bss 1e99280 */ static QWdata qwfa;
//     /* bss 1e99290 */ static QWdata qwfb;
//     /* bss 1e992a0 */ static QWdata qwaa;
//     /* bss 1e992b0 */ static QWdata qwab;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_SetFog);

// /* 0019ca90 00000018 */ void RenderG2_SetBGColor(/* a0 4 */ int r, /* a1 5 */ int g, /* a2 6 */ int b) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_SetBGColor);

// /* 0019caa8 0000001c */ void RenderG2_SetBlitColor(/* a0 4 */ int r, /* a1 5 */ int g, /* a2 6 */ int b) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_SetBlitColor);

// /* 0019cac8 000000d8 */ void RenderG2_MotionBlur(/* a3 7 */ int blur, /* a1 5 */ int time, /* a2 6 */ int timeout) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_MotionBlur);

// /* 0019cba0 000000a8 */ void RenderG2_Message(/* s1 17 */ char *str) {
//     /* s0 16 */ int cd;
//     /* s0 16 */ sceDmaChan *dmaGif;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_Message);

// /* 0019cc48 000000fc */ int RenderG2_SetupDevCons() {
//     /* s0 16 */ sceDmaChan *dmaGif;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_SetupDevCons);

// /* 0019cd48 00000214 */ void RenderG2_ClearBuffer(/* s6 22 */ int r, /* s1 17 */ int g, /* s2 18 */ int b, /* s4 20 */ int disp_width, /* s3 19 */ int disp_height) {
//     /* 0x0(sp) */ u_long giftag_clear[2];
//     /* 0x10(sp) */ sceGifPacket packet;
//     /* 0x20(sp) */ uint128 packetBase[6];
//     /* 0x80(sp) */ sceGsDBuff db;
//     /* s5 21 */ sceDmaChan *dmaGif;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_ClearBuffer);

// /* 0019cf60 000000b0 */ void RenderG2_InitSpecialTextures(/* a0 4 */ TexEnvTranslucent *texEnv) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", RenderG2_InitSpecialTextures);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2_g2/RenderRA", D_002B6B10);

/* Original path: C:\sr2\game\spiral.c */
/* .text 0x0016D160, .data 0x002A4444, .rodata 0x002B5E00, .bss 0x01E96860 */
/* Code from other files was inlined here: fx.h, mempack.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 2a4444 */ extern int16 Spiral_Number;
/* data 2a4446 */ extern int16 Spiral_Degrees;
/* data 2a4448 */ extern int32 Spiral_Current;
/* data 2a444c */ extern int32 Spiral_Max;
/* data 2a4450 */ extern float RvrMeter_Current;
/* data 2a4454 */ extern float RvrMeter_Max;
/* bss 1e96860 */ extern int Spiral_Glow_X;
/* bss 1e96864 */ extern int Spiral_Glow_Y;
/* bss 1e96868 */ extern int Spiral_Glow_Size;
/* bss 1e9686c */ extern int Spiral_Mod;
/* bss 1e96870 */ extern DWVECTOR RvrMeter_Array[33];
/* bss 1e96978 */ extern DWVECTOR RvrMeter_OffsetP[33];
/* bss 1e96a80 */ extern DWVECTOR RvrMeter_OffsetM[33];
/* bss 1e96b88 */ extern DWVECTOR Spiral_Array[65];
/* bss 1e96d90 */ extern DWVECTOR Spiral_OffsetP[64];
/* bss 1e96f90 */ extern DWVECTOR Spiral_OffsetM[64];

// /* 0016d160 0000010c */ static void FX_GetSpiralPoint(/* f20 58 */ float radius, /* f21 59 */ float deg, /* s0 16 */ int *x, /* s1 17 */ int *y) {
//     /* f1 39 */ float prevx;
//     /* f1 39 */ float prevy;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/spiral", FX_GetSpiralPoint);

// /* 0016d270 000000c8 */ static void FX_GetLinePoint(/* f12 50 */ float radius, /* f21 59 */ float next_radius, /* f14 52 */ float deg, /* f20 58 */ float next_deg, /* s1 17 */ int *pntx, /* s2 18 */ int *pnty, /* s0 16 */ int part) {
//     /* 0x0(sp) */ int x1;
//     /* 0x4(sp) */ int y1;
//     /* 0x8(sp) */ int x2;
//     /* 0xc(sp) */ int y2;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/spiral", FX_GetLinePoint);

// /* 0016d338 0000052c */ static void SPIRAL_CalcSpiral(/* a0 4 */ int indegchange) {
//     /* s3 19 */ int n;
//     /* f26 64 */ float degchange;
//     /* f21 59 */ float deg;
//     /* f24 62 */ float next_deg;
//     /* 0x0(sp) */ int pntx;
//     /* 0x4(sp) */ int pnty;
//     /* 0x8(sp) */ int px;
//     /* 0xc(sp) */ int py;
//     /* 0x10(sp) */ int mx;
//     /* 0x14(sp) */ int my;
//     /* s0 16 */ int mod;
//     /* s5 21 */ int x_offset;
//     /* s4 20 */ int y_offset;
//     /* f20 58 */ float small_radius;
//     /* f22 60 */ float radius;
//     /* f25 63 */ float next_radius;
//     /* s4 20 */ int minx;
//     /* s2 18 */ int maxx;
//     /* 0x18(sp) */ int miny;
//     /* 0x1c(sp) */ int maxy;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/spiral", SPIRAL_CalcSpiral);

// /* 0016d868 0000051c */ static void SPIRAL_ReaverMeter() {
//     /* s3 19 */ int prevx;
//     /* s0 16 */ int prevy;
//     /* t3 11 */ int offpx;
//     /* t4 12 */ int offpy;
//     /* s1 17 */ int offmx;
//     /* s2 18 */ int offmy;
//     /* t1 9 */ int n;
//     /* fp 30 */ int meter_mod;
//     /* 0x0(sp) */ int rvrmax;
//     /* f0 38 */ float frvrmax;
//     /* 0x4(sp) */ uint32 RvrMtr_Color;
//     /* 0x8(sp) */ uint32 RvrMtr_Side_Color;
//     /* f20 58 */ float intensity;
//     /* s7 23 */ uint32 color;
//     /* s6 22 */ uint32 side_color;
//     {
//         /* s5 21 */ void *ret;
//     }
//     {
//         /* fp 30 */ int32 p1;
//     }
//     {
//         /* fp 30 */ int32 p1;
//     }
//     {
//         /* v0 2 */ int crap;
//         {
//             /* v0 2 */ int32 p0;
//         }
//         {
//             /* v0 2 */ int32 p0;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/spiral", SPIRAL_ReaverMeter);

// /* 0016dd88 0000054c */ void SPIRAL_DrawSpirals() {
//     /* s3 19 */ int prevx;
//     /* s2 18 */ int prevy;
//     /* fp 30 */ int offpx;
//     /* s7 23 */ int offpy;
//     /* s5 21 */ int offmx;
//     /* s4 20 */ int offmy;
//     /* s6 22 */ int n;
//     /* 0x30(sp) */ int32 no_color;
//     /* s1 17 */ int32 color;
//     /* data 2a4458 */ static int16 cnt;
//     /* 0x34(sp) */ int current_cnt;
//     /* a0 4 */ int max64;
//     /* 0x38(sp) */ uint32 SPIRAL_COLOR;
//     /* t9 25 */ uint32 SPIRAL_COLOR2;
//     /* 0x3c(sp) */ uint32 SPIRAL_COLOR3;
//     /* t7 15 */ uint32 SPIRAL_COLOR_END;
//     /* a3 7 */ uint32 SPIRAL_NOCOLOR;
//     {
//         /* s0 16 */ void *ret;
//     }
//     {
//         /* v1 3 */ int tmp;
//     }
//     {
//         /* 0x30(sp) */ uint32 col1;
//     }
//     {
//         /* 0x0(sp) */ MYPS2VERTEX vert;
//         /* data 2a445a */ static int16 deg;
//         /* 0x20(sp) */ Vector f1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/spiral", SPIRAL_DrawSpirals);

// /* 0016e2d8 0000017c */ void SPIRAL_ProcessSpiral(/* a3 7 */ int number, /* s0 16 */ int current_health, /* s1 17 */ int max_health) {
//     /* a2 6 */ int degchange;
//     /* v0 2 */ ReaverData *data;
//     /* v0 2 */ Instance *ReaverInstance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/spiral", SPIRAL_ProcessSpiral);

// /* 0016e458 0000004c */ void SPIRAL_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/spiral", SPIRAL_Init);

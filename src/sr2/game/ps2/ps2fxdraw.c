/* Original path: C:\sr2\game\ps2\ps2fxdraw.c */
/* .text 0x0014F1D0 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, fx.h, math3d.h, mempack.h, ps2/drawlist.h, ps2/ps2dma.h, types.h */

#include "ps2/ps2fxdraw.h"

// /* 0014f1d0 0000010c */ void FXDRAW_DrawScreenPoly(/* t2 10 */ int transtype, /* t1 9 */ uint32 color, /* a2 6 */ int zdepth) {
//     /* 0x0(sp) */ MYPS2VERTEX verts[4];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FXDRAW_DrawScreenPoly);

// /* 0014f2e0 00000198 */ void FXDRAW_SetupPolyGT4(/* f12 50 */ float x, /* f13 51 */ float y, /* f2 40 */ float size_x, /* f15 53 */ float size_y, /* a0 4 */ int z, /* a0 4 */ int32 tpageid, /* t2 10 */ uint32 color0, /* a3 7 */ uint32 color1, /* t0 8 */ uint32 color2, /* t1 9 */ uint32 color3) {
//     /* 0x0(sp) */ MYPS2VERTEX verts[4];
//     /* f2 40 */ float x1;
//     /* f13 51 */ float y1;
//     /* f3 41 */ float x2;
//     /* f1 39 */ float y2;
//     /* t4 12 */ uint32 attr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FXDRAW_SetupPolyGT4);

// /* 0014f478 00000254 */ void FXDRAW_SetupPolyGT4Rot(/* f25 63 */ float sx, /* f24 62 */ float sy, /* f22 60 */ float width, /* f21 59 */ float height, /* a0 4 */ int z, /* s2 18 */ int32 tpageid, /* a2 6 */ uint32 color0, /* a3 7 */ uint32 color1, /* t0 8 */ uint32 color2, /* t1 9 */ uint32 color3, /* f23 61 */ float angle) {
//     /* 0x0(sp) */ MYPS2VERTEX verts[4];
//     /* f20 58 */ float sa;
//     /* f0 38 */ float ca;
//     /* f22 60 */ float widthca;
//     /* f10 48 */ float widthsa;
//     /* f9 47 */ float heightca;
//     /* f21 59 */ float heightsa;
//     /* s1 17 */ uint32 attr;
//     /* f0 38 */ float aspectratio;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FXDRAW_SetupPolyGT4Rot);

// /* 0014f6d0 00000164 */ static void FX_AddQuad(/* s3 19 */ int32 tex, /* s0 16 */ MYPS2VERTEX *verts, /* s2 18 */ int z, /* s4 20 */ int attr) {
//     /* a3 7 */ int j;
//     /* a2 6 */ PS2Vertex *ps2vert;
//     {
//         /* t1 9 */ void *ptr;
//     }
//     {
//         /* t2 10 */ void *ptr;
//     }
//     {
//         /* f2 40 */ float zf;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FX_AddQuad);

// /* 0014f838 00000130 */ static void FX_AddQuadNoTex(/* s0 16 */ MYPS2VERTEX *verts, /* s2 18 */ int z, /* s3 19 */ int attr) {
//     /* a3 7 */ int j;
//     /* a2 6 */ PS2VertexNoTex *ps2vert;
//     {
//         /* t1 9 */ void *ptr;
//     }
//     {
//         /* t2 10 */ void *ptr;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FX_AddQuadNoTex);

// /* 0014f968 00000eb0 */ void DRAW_FXDrawList(/* 0xc0(sp) */ _FXTracker *fxTracker) {
//     /* s3 19 */ int32 tpageid;
//     /* s5 21 */ Matrixf *wcTransform;
//     /* s2 18 */ FX_PRIM *fxPrim;
//     /* s7 23 */ FX_PRIM *nextFXPrim;
//     /* 0xc4(sp) */ int matrix_wc;
//     /* 0x0(sp) */ Matrixf lcTransform;
//     /* s0 16 */ int realz;
//     /* 0xc8(sp) */ int particleCount;
//     /* 0xcc(sp) */ int dmaSize;
//     /* f24 62 */ float projection_distance;
//     /* f25 63 */ float projection_distance_aspect;
//     /* 0xd0(sp) */ int fogstart;
//     /* 0xd4(sp) */ int addNumZSortedTextures;
//     /* 0xd8(sp) */ int localZSortedItemFlag;
//     /* 0xdc(sp) */ TextureItem *drawList;
//     /* 0xe0(sp) */ uint128 fogAdditive;
//     /* 0xf0(sp) */ uint128 fogBlend;
//     /* 0x100(sp) */ uint128 alphaAdditive;
//     /* 0x110(sp) */ uint128 alphaBlend;
//     {
//         /* s6 22 */ void *ret;
//     }
//     {
//         /* s1 17 */ uint32 flags;
//         /* a0 4 */ uint32 oroutcode;
//         /* v1 3 */ uint32 andoutcode;
//         /* 0x40(sp) */ MYPS2VERTEX verts[4];
//         {
//             /* s5 21 */ float *m1[4];
//             /* v0 2 */ float *m2[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp23;
//                 /* BADREGISTER -1 */ Vector4fr temp22;
//                 /* BADREGISTER -1 */ Vector4fr temp21;
//                 /* BADREGISTER -1 */ Vector4fr temp20;
//                 /* BADREGISTER -1 */ Vector4fr temp13;
//                 /* BADREGISTER -1 */ Vector4fr temp12;
//                 /* BADREGISTER -1 */ Vector4fr temp11;
//                 /* BADREGISTER -1 */ Vector4fr temp10;
//             }
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr temp3;
//             /* BADREGISTER -1 */ Vector4fr temp2;
//             /* BADREGISTER -1 */ Vector4fr temp1;
//         }
//         {
//             /* t0 8 */ PS2Line *line;
//             /* a1 5 */ PS2Line *line_mem;
//             /* s4 20 */ uint32 attr;
//             /* s3 19 */ uint32 black;
//             {
//                 /* t0 8 */ void *ptr;
//             }
//             {
//                 /* a1 5 */ void *ptr;
//             }
//         }
//         {
//             /* a1 5 */ uint32 col;
//             {
//                 /* v1 3 */ uint32 col;
//             }
//             {
//                 /* a0 4 */ uint32 col;
//             }
//             {
//                 /* a2 6 */ uint32 col;
//             }
//         }
//     }
//     {
//         /* s3 19 */ uint32 flags;
//         {
//             /* f4 42 */ float x;
//             /* f22 60 */ float z;
//             /* f20 58 */ float ooz;
//             /* f21 59 */ float sx;
//             /* f23 61 */ float sy;
//             /* f2 40 */ float ps_z;
//             /* BADREGISTER -1 */ Vector4fr posv;
//             /* s1 17 */ Vector4fr outv4fr;
//             {
//                 /* s1 17 */ Vector4fr vec;
//             }
//             {
//                 /* s1 17 */ Vector4fr vec;
//                 {
//                     /* v0 2 */ int64 temp;
//                     /* f5 43 */ float ret;
//                 }
//             }
//             {
//                 /* s1 17 */ Vector4fr vec;
//                 {
//                     /* v0 2 */ int64 temp;
//                     /* f3 41 */ float ret;
//                 }
//             }
//             {
//                 /* s1 17 */ Vector4fr vec;
//                 {
//                     /* v0 2 */ int64 temp;
//                 }
//             }
//             {
//                 /* a1 5 */ int nz;
//                 /* f1 39 */ float fog;
//                 /* 0x120(sp) */ Vector4fr svxy;
//                 /* 0x130(sp) */ Vector4fr sv0;
//                 /* 0x140(sp) */ Vector4fr sv1;
//                 /* s5 21 */ ZBucket *zbucket;
//                 {
//                     /* a3 7 */ void *ptr;
//                 }
//                 {
//                     /* 0x150(sp) */ void *ptr;
//                 }
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp;
//                 }
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp;
//                 }
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp;
//                 }
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp;
//                 }
//                 {
//                     /* s1 17 */ int texture;
//                     /* a1 5 */ TextureItem *texitem;
//                     /* s0 16 */ int currentTexture;
//                     /* s2 18 */ DmaTag *drawItemList;
//                     /* a2 6 */ uint128 *spad_ptr;
//                     {
//                         /* s3 19 */ int flush;
//                         {
//                             /* a2 6 */ void *ptr;
//                         }
//                         {
//                             /* a3 7 */ void *ptr;
//                         }
//                         {
//                             /* a3 7 */ void *ptr;
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", DRAW_FXDrawList);

// /* 00150818 0000106c */ void FXDRAW_Lightning(/* 0x170(sp) */ FXLightning *zap, /* 0x174(sp) */ float *wcTransform[4], /* 0x178(sp) */ float *mat[4], /* s2 18 */ Vector4f *start, /* s3 19 */ Vector4f *end) {
//     /* 0x17c(sp) */ int n;
//     /* s1 17 */ int rsin_nd2;
//     /* 0x180(sp) */ uint32 orig_color;
//     /* 0x184(sp) */ uint32 orig_endcolor;
//     /* 0x188(sp) */ uint32 orig_glow_color;
//     /* 0x18c(sp) */ uint32 orig_glow_endcolor;
//     /* 0x190(sp) */ uint32 color;
//     /* 0x194(sp) */ uint32 glow_color;
//     /* 0x198(sp) */ int start_width;
//     /* 0x19c(sp) */ int end_width;
//     /* 0x1a0(sp) */ int start_small_width;
//     /* 0x1a4(sp) */ int end_small_width;
//     /* 0x1a8(sp) */ int width;
//     /* 0x1ac(sp) */ int small_width;
//     /* 0x1b0(sp) */ int segs;
//     /* 0x1b4(sp) */ int deg;
//     /* 0x1b8(sp) */ int beamflag;
//     /* 0x1bc(sp) */ int sine_size;
//     /* 0x1c0(sp) */ int variation;
//     /* 0x0(sp) */ MYPS2VERTEX vert0;
//     /* 0x20(sp) */ MYPS2VERTEX vert1;
//     /* 0x40(sp) */ MYPS2VERTEX inner[4];
//     /* 0xc0(sp) */ MYPS2VERTEX glow[4];
//     /* 0x140(sp) */ SVECTOR starti;
//     /* 0x150(sp) */ SVECTOR endi;
//     /* 0x1c4(sp) */ int realz;
//     /* 0x1c8(sp) */ int last_ok;
//     /* 0x1cc(sp) */ int set_beam_startwidths;
//     /* f21 59 */ float projDistDiv2;
//     /* 0x1d0(sp) */ uint32 attr;
//     /* s0 16 */ int fade;
//     {
//         /* s0 16 */ int fade;
//         /* s1 17 */ int spfade;
//     }
//     {
//         /* a0 4 */ int face_fade;
//     }
//     {
//         /* s0 16 */ int32 fade;
//     }
//     {
//         /* s0 16 */ int32 fade;
//     }
//     {
//         /* s0 16 */ int32 fade;
//     }
//     {
//         /* s0 16 */ int32 fade;
//     }
//     {
//         /* s0 16 */ int fade;
//         {
//             /* 0x160(sp) */ CVECTOR cvec;
//         }
//     }
//     {
//         /* s0 16 */ int fade;
//         {
//             /* 0x160(sp) */ CVECTOR cvec;
//         }
//     }
//     {
//         /* s0 16 */ int fade;
//         {
//             /* 0x160(sp) */ CVECTOR cvec;
//         }
//     }
//     {
//         /* s0 16 */ int fade;
//         {
//             /* 0x160(sp) */ CVECTOR cvec;
//         }
//     }
//     {
//         /* 0x160(sp) */ SVECTOR point;
//         {
//             /* 0x184(sp) */ uint32 col1;
//             /* 0x17c(sp) */ int32 p1;
//         }
//         {
//             /* 0x18c(sp) */ uint32 col1;
//             /* 0x17c(sp) */ int32 p1;
//         }
//         {
//             /* v0 2 */ int rsin_n4;
//             {
//                 /* a1 5 */ uint32 newSeed;
//             }
//             {
//                 /* t0 8 */ uint32 newSeed;
//             }
//             {
//                 /* a1 5 */ uint32 newSeed;
//             }
//         }
//         {
//             {
//                 /* a2 6 */ uint32 newSeed;
//             }
//             {
//                 /* a1 5 */ uint32 newSeed;
//             }
//             {
//                 /* a1 5 */ uint32 newSeed;
//             }
//         }
//         {
//             /* s1 17 */ int fx;
//             /* s0 16 */ int fy;
//             /* f20 58 */ float length;
//             {
//                 /* a0 4 */ int ix;
//                 /* v1 3 */ int iy;
//                 {
//                     /* a1 5 */ int t;
//                 }
//             }
//             {
//                 /* v0 2 */ int x;
//                 /* v1 3 */ int y;
//             }
//             {
//                 /* v0 2 */ int x;
//                 /* v1 3 */ int y;
//             }
//             {
//                 /* a3 7 */ int x;
//                 /* t0 8 */ int y;
//             }
//         }
//         {
//             {
//                 /* t0 8 */ int y;
//                 /* t1 9 */ int x;
//             }
//             {
//                 /* a2 6 */ int y;
//                 /* a3 7 */ int x;
//             }
//             {
//                 /* a0 4 */ int y;
//                 /* a1 5 */ int x;
//             }
//             {
//                 /* v0 2 */ int y;
//                 /* v1 3 */ int x;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FXDRAW_Lightning);

// /* 00151888 000009a4 */ void FXDRAW_Draw_Particle_Ribbon(/* a0 4 */ float *wcTransform[4], /* s5 21 */ FXParticleGen *pgen, /* 0xf0(sp) */ FXTracker *fxTracker) {
//     /* 0xf4(sp) */ int n;
//     /* 0x0(sp) */ MYPS2VERTEX vert0;
//     /* 0x20(sp) */ MYPS2VERTEX vert1;
//     /* 0x40(sp) */ MYPS2VERTEX vxy;
//     /* s0 16 */ int realz;
//     /* 0xf8(sp) */ int last_ok;
//     /* 0xfc(sp) */ int has_endseg;
//     /* fp 30 */ uint32 color1;
//     /* 0x100(sp) */ uint32 flags;
//     /* 0x104(sp) */ FX_PRIM *prev;
//     /* s3 19 */ FX_PRIM *prim;
//     /* s6 22 */ FX_PRIM *next;
//     /* f22 60 */ float projDistDiv2;
//     /* 0x108(sp) */ int predator_offset;
//     /* 0x10c(sp) */ uint32 attr;
//     {
//         /* s1 17 */ void *ret;
//     }
//     {
//         /* a1 5 */ int startSegment;
//         /* s6 22 */ Matrixf *swTransform;
//         /* 0x60(sp) */ Matrixf MBirthTransform;
//         /* s4 20 */ Instance *instance;
//         {
//             /* s2 18 */ Matrixf *swTransformEnd;
//             /* 0xa0(sp) */ Matrixf MBirthTransformEnd;
//             /* 0xe0(sp) */ Vector4f startPos;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr startPos;
//             /* BADREGISTER -1 */ Vector4fr offset;
//         }
//     }
//     {
//         /* t1 9 */ MYPS2VERTEX *vert;
//         {
//             /* v1 3 */ int y;
//             /* v0 2 */ int x;
//         }
//     }
//     {
//         /* a3 7 */ MYPS2VERTEX *vert;
//         /* 0x108(sp) */ int offset;
//         {
//             /* v0 2 */ int y;
//             /* v1 3 */ int x;
//         }
//     }
//     {
//         /* f3 41 */ float width;
//         /* BADREGISTER -1 */ Vector4fr position;
//         {
//             /* BADREGISTER -1 */ Vector4fr v1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* t0 8 */ int fx;
//             /* a3 7 */ int fy;
//             /* f2 40 */ float length;
//             {
//                 /* a0 4 */ int ix;
//                 /* v1 3 */ int iy;
//                 {
//                     /* a1 5 */ int t;
//                 }
//             }
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr v1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* v0 2 */ int x1;
//             /* a1 5 */ int x2;
//             /* a0 4 */ int y1;
//             /* v1 3 */ int y2;
//             /* v0 2 */ int cross;
//             /* v0 2 */ int swapflag;
//             {
//                 /* v1 3 */ int tmpz;
//             }
//         }
//         {
//             /* v0 2 */ int y;
//             /* v1 3 */ int x;
//         }
//         {
//             /* 0x108(sp) */ int offset;
//             {
//                 /* v0 2 */ int y;
//                 /* v1 3 */ int x;
//             }
//         }
//         {
//             /* v0 2 */ int32 oroutcode;
//             /* a2 6 */ int32 andoutcode;
//             {
//                 /* v0 2 */ int sp;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FXDRAW_Draw_Particle_Ribbon);

// /* 00152230 00000038 */ void FXDRAW_DrawRing(/* a0 4 */ float *wcTransformf[4], /* a1 5 */ Vector4f *position, /* a2 6 */ float *matrix[4], /* a3 7 */ int radius, /* t0 8 */ int radius2, /* t1 9 */ int radius3, /* t2 10 */ int z1, /* t3 11 */ int z2, /* 0x40(sp) */ int z3, /* 0x48(sp) */ int32 color, /* 0x50(sp) */ int sortInWorld) {
//     /* v0 2 */ int z3;
//     /* t4 12 */ int32 color;
//     /* v1 3 */ int sortInWorld;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FXDRAW_DrawRing);

// /* 00152268 0000070c */ void FXDRAW_DrawRing2(/* 0xd0(sp) */ float *wcTransformf[4], /* a1 5 */ Vector4f *position, /* a2 6 */ float *matrix[4], /* fp 30 */ int r0, /* 0xd4(sp) */ int r1, /* s7 23 */ int r2, /* s3 19 */ int z1, /* 0xd8(sp) */ int z2, /* 0x1b0(sp) */ int z3, /* 0x1b8(sp) */ int32 offset, /* 0x1c0(sp) */ int sortInWorld, /* 0x1c8(sp) */ int32 color, /* 0x1d0(sp) */ int32 tpageid) {
//     /* s4 20 */ int z3;
//     /* s6 22 */ int32 offset;
//     /* s0 16 */ int32 color;
//     /* 0x0(sp) */ Vector4f output;
//     /* 0xdc(sp) */ int n;
//     /* 0xe0(sp) */ int degrees;
//     /* s1 17 */ int cval;
//     /* s0 16 */ int sval;
//     /* a1 5 */ int x;
//     /* v0 2 */ int y;
//     /* 0xe4(sp) */ int predator_flag;
//     /* 0x10(sp) */ MYPS2VERTEX verts[6];
//     {
//         /* 0xd0(sp) */ float *matrix[4];
//     }
//     {
//         /* a0 4 */ int y;
//         /* a1 5 */ int x;
//     }
//     {
//         /* s6 22 */ int offset;
//         {
//             /* v1 3 */ int y;
//             /* v0 2 */ int x;
//         }
//     }
//     {
//         /* s0 16 */ int realz0;
//         {
//             /* a0 4 */ int y;
//             /* a1 5 */ int x;
//         }
//         {
//             /* s6 22 */ int offset;
//             {
//                 /* v0 2 */ int y;
//                 /* v1 3 */ int x;
//             }
//         }
//     }
//     {
//         /* s2 18 */ int realz0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FXDRAW_DrawRing2);

// /* 00152978 00000274 */ void PS2_DrawGlow(/* a0 4 */ MYPS2VERTEX *vert, /* f12 50 */ float z2, /* s6 22 */ int realz, /* f23 61 */ float width, /* f24 62 */ float height, /* f22 60 */ float angle, /* a2 6 */ uint32 color, /* s5 21 */ int32 tpageid, /* s0 16 */ int aspectflag) {
//     /* 0x0(sp) */ MYPS2VERTEX verts[4];
//     /* s3 19 */ int sx;
//     /* s4 20 */ int sy;
//     /* f20 58 */ float sa;
//     /* f0 38 */ float ca;
//     /* f28 66 */ float widthca;
//     /* f26 64 */ float widthsa;
//     /* f25 63 */ float heightca;
//     /* f27 65 */ float heightsa;
//     /* s1 17 */ uint32 attr;
//     {
//         /* f0 38 */ float aspectratio;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", PS2_DrawGlow);

// /* 00152bf0 000002b0 */ static void DrawShadowSegment(/* s0 16 */ Vector4f *pos1, /* s1 17 */ Vector4f *pos2, /* s2 18 */ int32 color) {
//     /* 0x0(sp) */ MYPS2VERTEX verts[3];
//     /* f26 64 */ float x;
//     /* f27 65 */ float y;
//     /* f28 66 */ float z;
//     /* f23 61 */ float x1;
//     /* f22 60 */ float y1;
//     /* f21 59 */ float x2;
//     /* f20 58 */ float f;
//     /* f25 63 */ float len;
//     /* f29 67 */ float width;
//     /* f24 62 */ float angle;
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", DrawShadowSegment);

// /* 00152ea0 000000b4 */ void FXDRAW_DrawSegmentShadow(/* s0 16 */ Instance *instance, /* a1 5 */ evShadowSegmentData *segdata, /* a2 6 */ int32 fadeValue) {
//     /* 0x0(sp) */ Vector4f pos1;
//     /* 0x10(sp) */ Vector4f pos2;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FXDRAW_DrawSegmentShadow);

// /* 00152f58 00000160 */ void FXDRAW_DrawShadow(/* a0 4 */ Model *model, /* a1 5 */ int32 fadeValue, /* a2 6 */ float *scTransform[4]) {
//     /* 0x0(sp) */ MYPS2VERTEX verts[3];
//     /* s0 16 */ int i;
//     /* f20 58 */ float f;
//     /* f23 61 */ float x;
//     /* f0 38 */ float z;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FXDRAW_DrawShadow);

// /* 001530b8 000007f0 */ void FXDRAW_DrawSnow() {
//     /* s1 17 */ int32 texture;
//     /* a0 4 */ TextureItem *texitem;
//     /* s4 20 */ int n;
//     /* s5 21 */ int pjd;
//     /* s4 20 */ ZBucket *zbucket;
//     /* s3 19 */ int active;
//     {
//         /* s2 18 */ DmaTag *drawItemList;
//         /* s0 16 */ int currentTexture;
//         /* a2 6 */ uint128 *mem_ptr;
//         /* fp 30 */ int id;
//         /* s6 22 */ uint32 addr;
//         {
//             /* 0x0(sp) */ int flush;
//             {
//                 /* a2 6 */ void *ptr;
//             }
//             {
//                 /* a3 7 */ void *ptr;
//             }
//             {
//                 /* a3 7 */ void *ptr;
//             }
//         }
//         {
//             /* t2 10 */ void *ptr;
//         }
//         {
//             /* t1 9 */ void *ptr;
//         }
//     }
//     {
//         /* s1 17 */ WeatherPrim *wPrim;
//         /* a1 5 */ int x;
//         /* a2 6 */ int y;
//         /* t0 8 */ int z;
//         /* a3 7 */ int size;
//         /* BADREGISTER -1 */ Vector4fr v1;
//         {
//             /* s0 16 */ void *ptr;
//         }
//         {
//             /* a0 4 */ int cos;
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* f1 39 */ float ooz;
//             {
//                 /* BADREGISTER -1 */ Vector4fr tempy;
//                 /* BADREGISTER -1 */ Vector4fr tempz;
//             }
//         }
//         {
//             /* v1 3 */ int lifetime;
//             /* v0 2 */ int floorz;
//             /* a0 4 */ int color;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FXDRAW_DrawSnow);

// /* 001538a8 00000664 */ void FXDRAW_DrawRain() {
//     /* fp 30 */ int32 texture;
//     /* s2 18 */ int n;
//     /* s4 20 */ ZBucket *zbucket;
//     /* s3 19 */ int active;
//     {
//         /* s1 17 */ void *ret;
//     }
//     {
//         /* s2 18 */ DmaTag *drawItemList;
//         /* s0 16 */ int currentTexture;
//         /* a2 6 */ uint128 *mem_ptr;
//         /* s7 23 */ int id;
//         /* s6 22 */ uint32 addr;
//         {
//             {
//                 /* a2 6 */ void *ptr;
//             }
//             {
//                 /* a3 7 */ void *ptr;
//             }
//             {
//                 /* a3 7 */ void *ptr;
//             }
//         }
//         {
//             /* t2 10 */ void *ptr;
//         }
//         {
//             /* t1 9 */ void *ptr;
//         }
//     }
//     {
//         /* s0 16 */ WeatherPrim *wPrim;
//         /* a1 5 */ int x;
//         /* a2 6 */ int y;
//         /* a3 7 */ int z;
//         {
//             /* t0 8 */ void *ptr;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr v0;
//             /* BADREGISTER -1 */ Vector4fr v1;
//             /* BADREGISTER -1 */ Vector4fr out0;
//             /* BADREGISTER -1 */ Vector4fr out1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr tempy;
//                 /* BADREGISTER -1 */ Vector4fr tempz;
//             }
//             {
//                 /* BADREGISTER -1 */ Vector4fr tempy;
//                 /* BADREGISTER -1 */ Vector4fr tempz;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2fxdraw", FXDRAW_DrawRain);

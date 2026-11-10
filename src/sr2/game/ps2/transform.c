/* Original path: C:\sr2\game\ps2\transform.c */
/* .text 0x00167AE8, .data 0x002A4280 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, math3d.h */

#include "ps2/transform.h"

// /* 00167ae8 00000014 */ void TRANS_LoadVUMatrix(/* a0 4 */ float *mat[4]) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_LoadVUMatrix);

// /* 00167b00 0000002c */ void TRANS_LoadVULightColorMatrix(/* a0 4 */ float *lightmat1[4], /* a1 5 */ float *colormat[4]) {
//     /* data 2a4280 */ static Vector4f colorMult;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_LoadVULightColorMatrix);

// /* 00167b30 00000070 */ void TRANS_MLightV(/* a0 4 */ Vector4f *normal, /* a1 5 */ Vector4f *incol, /* a2 6 */ int32 *outcol) {
//     /* BADREGISTER -1 */ Vector4fr color;
//     /* 0x0(sp) */ Vector4fr temp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_MLightV);

// /* 00167ba0 000000a0 */ void TRANS_CalcFog(/* a3 7 */ MYPS2VERTEX *v) {
//     /* a1 5 */ int nz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_CalcFog);

// /* 00167c40 00000140 */ void TRANS_CalcOutCodeAndFog(/* t0 8 */ MYPS2VERTEX *v) {
//     /* a0 4 */ int nx;
//     /* a1 5 */ int ny;
//     /* a1 5 */ int nz;
//     {
//         /* a3 7 */ int outcode;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_CalcOutCodeAndFog);

// /* 00167d80 000000e0 */ void TRANS_CalcOutCode(/* a3 7 */ MYPS2VERTEX *v) {
//     /* a1 5 */ int nx;
//     /* a2 6 */ int ny;
//     /* a0 4 */ int nz;
//     {
//         /* a0 4 */ int outcode;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_CalcOutCode);

// /* 00167e60 00000108 */ int TRANS_DoTransform3(/* a0 4 */ MYPS2VERTEX *v, /* a1 5 */ Vector4f *v0, /* a2 6 */ Vector4f *v1, /* a3 7 */ Vector4f *v2) {
//     {
//         /* a0 4 */ MYPS2VERTEX *v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_DoTransform3);

// /* 00167f68 0000013c */ int TRANS_DoTransform3Clip(/* s0 16 */ MYPS2VERTEX *v, /* a1 5 */ Vector4f *v0, /* a2 6 */ Vector4f *v1, /* a3 7 */ Vector4f *v2) {
//     {
//         /* s0 16 */ MYPS2VERTEX *v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_DoTransform3Clip);

// /* 001680a8 0000004c */ int TRANS_DoTransform(/* a0 4 */ MYPS2VERTEX *v, /* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float z) {
//     /* BADREGISTER -1 */ Vector4fr v1;
//     {
//         /* BADREGISTER -1 */ Vector4fr tempy;
//         /* BADREGISTER -1 */ Vector4fr tempz;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr v1;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_DoTransform);

// /* 001680f8 00000070 */ int TRANS_DoTransformClip(/* v0 2 */ MYPS2VERTEX *v, /* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float z) {
//     /* s0 16 */ int realz;
//     /* BADREGISTER -1 */ Vector4fr v1;
//     {
//         /* BADREGISTER -1 */ Vector4fr tempy;
//         /* BADREGISTER -1 */ Vector4fr tempz;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr v1;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_DoTransformClip);

// /* 00168168 00000054 */ int TRANS_DoTransformClipV4f(/* v0 2 */ MYPS2VERTEX *v, /* a1 5 */ Vector4f *v4f) {
//     /* s0 16 */ int realz;
//     /* BADREGISTER -1 */ Vector4fr v1;
//     {
//         /* BADREGISTER -1 */ Vector4fr v1;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_DoTransformClipV4f);

// /* 001681c0 00000030 */ int TRANS_DoTransformV4f(/* a0 4 */ MYPS2VERTEX *v, /* a1 5 */ Vector4f *v4f) {
//     /* BADREGISTER -1 */ Vector4fr v1;
//     {
//         /* BADREGISTER -1 */ Vector4fr v1;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_DoTransformV4f);

// /* 001681f0 00000054 */ int TRANS_DoTransformClipV4fr(/* v0 2 */ MYPS2VERTEX *v, /* a1 5 */ Vector4fr v1) {
//     /* s0 16 */ int realz;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_DoTransformClipV4fr);

// /* 00168248 00000030 */ int TRANS_DoTransformV4fr(/* a0 4 */ MYPS2VERTEX *v, /* a1 5 */ Vector4fr v1) {
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_DoTransformV4fr);

// /* 00168278 0000009c */ void Setup_VU_Matrix() {
//     /* 0x0(sp) */ Matrixf work;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp23;
//         /* BADREGISTER -1 */ Vector4fr temp22;
//         /* BADREGISTER -1 */ Vector4fr temp21;
//         /* BADREGISTER -1 */ Vector4fr temp20;
//         /* BADREGISTER -1 */ Vector4fr temp13;
//         /* BADREGISTER -1 */ Vector4fr temp12;
//         /* BADREGISTER -1 */ Vector4fr temp11;
//         /* BADREGISTER -1 */ Vector4fr temp10;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", Setup_VU_Matrix);

// /* 00168318 000000e0 */ void TRANS_SetTransformMatrixf(/* a0 4 */ float *m[4]) {
//     {
//         /* BADREGISTER -1 */ Vector4fr temp23;
//         /* BADREGISTER -1 */ Vector4fr temp22;
//         /* BADREGISTER -1 */ Vector4fr temp21;
//         /* BADREGISTER -1 */ Vector4fr temp20;
//         /* BADREGISTER -1 */ Vector4fr temp13;
//         /* BADREGISTER -1 */ Vector4fr temp12;
//         /* BADREGISTER -1 */ Vector4fr temp11;
//         /* BADREGISTER -1 */ Vector4fr temp10;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_SetTransformMatrixf);

// /* 001683f8 000000e8 */ void TRANS_TransToDrawVertex2D(/* a1 5 */ DRAWVERTEX *v, /* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float z) {
//     /* data 2a4290 */ static float znear;
//     {
//         /* f0 38 */ float ooz;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_TransToDrawVertex2D);

// /* 001684e0 000000f4 */ void TRANS_TransToDrawVertex2DV4f(/* a2 6 */ DRAWVERTEX *v, /* a1 5 */ Vector4f *vec) {
//     /* data 2a4294 */ static float znear;
//     /* f3 41 */ float x;
//     /* f6 44 */ float y;
//     /* f5 43 */ float z;
//     {
//         /* f0 38 */ float ooz;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_TransToDrawVertex2DV4f);

// /* 001685d8 00000090 */ void TRANS_TransToDrawVertex(/* a0 4 */ DRAWVERTEX *v, /* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float z) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_TransToDrawVertex);

// /* 00168668 0000009c */ void TRANS_TransToDrawVertexV4f(/* a0 4 */ DRAWVERTEX *v, /* a1 5 */ Vector4f *vec) {
//     /* f3 41 */ float x;
//     /* f6 44 */ float y;
//     /* f5 43 */ float z;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_TransToDrawVertexV4f);

// /* 00168708 0000008c */ void TRANS_RotTransPersVectorf(/* v0 2 */ Vector4f *srcvector, /* s0 16 */ Vector4f *dstvector) {
//     /* 0x0(sp) */ MYPS2VERTEX vert;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_RotTransPersVectorf);

// /* 00168798 00000078 */ void TRANS_AspectAdjustMatrixf(/* a1 5 */ float *m[4]) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_AspectAdjustMatrixf);

// /* 00168810 0000014c */ void TRANS_ViewScreenMatrix(/* s0 16 */ float *m[4], /* f22 60 */ float scrz, /* f26 64 */ float ax, /* f24 62 */ float ay, /* f25 63 */ float cx, /* f23 61 */ float cy, /* f17 55 */ float zmin, /* f18 56 */ float zmax, /* f19 57 */ float nearz, /* 0xa0(sp) */ float farz) {
//     /* f0 38 */ float farz;
//     /* f21 59 */ float az;
//     /* f20 58 */ float cz;
//     /* 0x0(sp) */ Matrixf mt;
//     {
//         /* s0 16 */ float *m2[4];
//         /* s0 16 */ float *m3[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp23;
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp13;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_ViewScreenMatrix);

// /* 00168960 000000c4 */ void TRANS_Set_Screen_and_Clip_Matrix(/* f22 60 */ float projection_distance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_Set_Screen_and_Clip_Matrix);

// /* 00168a28 0000004c */ void TRANS_SetupLightmat(/* a0 4 */ float *lm[4]) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_SetupLightmat);

// /* 00168a78 00000020 */ void TRANS_IdentityMatrixf(/* a0 4 */ float *m[4]) {
//     /* BADREGISTER -1 */ Vector4fr temp0;
//     /* BADREGISTER -1 */ Vector4fr temp1;
//     /* BADREGISTER -1 */ Vector4fr temp2;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_IdentityMatrixf);

// /* 00168a98 000001f4 */ void TRANS_RotMatrixZYXf(/* a0 4 */ Vector4f *rot, /* a1 5 */ float *m[4]) {
//     /* BADREGISTER -1 */ Vector4fr tempMatrix00;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix01;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix02;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix10;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix11;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix12;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix20;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix21;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix22;
//     /* BADREGISTER -1 */ Vector4fr sreg;
//     /* BADREGISTER -1 */ Vector4fr angle;
//     {
//         /* BADREGISTER -1 */ Vector4fr result;
//     }
//     {
//         /* v0 2 */ uint64 s45;
//         /* v1 3 */ uint64 s23;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr sreg;
//         {
//             /* v0 2 */ uint32 quarter;
//             {
//                 /* BADREGISTER -1 */ Vector4fr sreg;
//                 /* BADREGISTER -1 */ Vector4fr angle;
//                 {
//                     /* v0 2 */ uint32 pi;
//                     /* BADREGISTER -1 */ uint128 temp1;
//                     /* BADREGISTER -1 */ uint128 temp2;
//                     /* BADREGISTER -1 */ uint128 temp3;
//                     /* BADREGISTER -1 */ uint128 temp4;
//                     /* BADREGISTER -1 */ uint128 temp5;
//                     /* BADREGISTER -1 */ Vector4fr result;
//                 }
//             }
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr angle;
//         /* BADREGISTER -1 */ Vector4fr sreg;
//         {
//             /* BADREGISTER -1 */ Vector4fr result;
//             /* BADREGISTER -1 */ uint128 temp5;
//             /* BADREGISTER -1 */ uint128 temp4;
//             /* BADREGISTER -1 */ uint128 temp3;
//             /* BADREGISTER -1 */ uint128 temp2;
//             /* BADREGISTER -1 */ uint128 temp1;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_RotMatrixZYXf);

// /* 00168c90 000001f4 */ void TRANS_RotMatrixXYZf(/* a0 4 */ Vector4f *rot, /* a1 5 */ float *m[4]) {
//     /* BADREGISTER -1 */ Vector4fr tempMatrix00;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix01;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix02;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix10;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix11;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix12;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix20;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix21;
//     /* BADREGISTER -1 */ Vector4fr tempMatrix22;
//     /* BADREGISTER -1 */ Vector4fr sreg;
//     /* BADREGISTER -1 */ Vector4fr angle;
//     {
//         /* BADREGISTER -1 */ Vector4fr result;
//     }
//     {
//         /* v0 2 */ uint64 s45;
//         /* v1 3 */ uint64 s23;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr sreg;
//         {
//             /* v0 2 */ uint32 quarter;
//             {
//                 /* BADREGISTER -1 */ Vector4fr sreg;
//                 /* BADREGISTER -1 */ Vector4fr angle;
//                 {
//                     /* v0 2 */ uint32 pi;
//                     /* BADREGISTER -1 */ uint128 temp1;
//                     /* BADREGISTER -1 */ uint128 temp2;
//                     /* BADREGISTER -1 */ uint128 temp3;
//                     /* BADREGISTER -1 */ uint128 temp4;
//                     /* BADREGISTER -1 */ uint128 temp5;
//                     /* BADREGISTER -1 */ Vector4fr result;
//                 }
//             }
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr angle;
//         /* BADREGISTER -1 */ Vector4fr sreg;
//         {
//             /* BADREGISTER -1 */ Vector4fr result;
//             /* BADREGISTER -1 */ uint128 temp5;
//             /* BADREGISTER -1 */ uint128 temp4;
//             /* BADREGISTER -1 */ uint128 temp3;
//             /* BADREGISTER -1 */ uint128 temp2;
//             /* BADREGISTER -1 */ uint128 temp1;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_RotMatrixXYZf);

// /* 00168e88 000000d8 */ void TRANS_RotMatrixXf(/* f20 58 */ float r, /* s0 16 */ float *m[4]) {
//     /* 0x0(sp) */ Matrixf tempMatrix;
//     /* f21 59 */ float c;
//     /* f0 38 */ float s;
//     {
//         /* s0 16 */ float *mat2[4];
//         /* s0 16 */ float *m4[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_RotMatrixXf);

// /* 00168f60 000000d8 */ void TRANS_RotMatrixYf(/* f20 58 */ float r, /* s0 16 */ float *m[4]) {
//     /* 0x0(sp) */ Matrixf tempMatrix;
//     /* f21 59 */ float c;
//     /* f0 38 */ float s;
//     {
//         /* s0 16 */ float *mat2[4];
//         /* s0 16 */ float *m4[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_RotMatrixYf);

// /* 00169038 000000d8 */ void TRANS_RotMatrixZf(/* f20 58 */ float rot, /* s0 16 */ float *matrix[4]) {
//     /* 0x0(sp) */ Matrixf tempMatrix;
//     /* f21 59 */ float c;
//     /* f0 38 */ float s;
//     {
//         /* s0 16 */ float *mat2[4];
//         /* s0 16 */ float *m4[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_RotMatrixZf);

// /* 00169110 00000044 */ void TRANS_TransposeMatrix4(/* a0 4 */ float *m0[4], /* a1 5 */ float *m1[4]) {
//     /* t2 10 */ uint128 temp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_TransposeMatrix4);

// /* 00169158 0000009c */ void TRANS_NormalizeMatrixf(/* a0 4 */ float *target[4], /* a1 5 */ float *source[4]) {
//     /* 0x0(sp) */ Vector4f scale;
//     /* BADREGISTER -1 */ Vector4fr t0;
//     /* BADREGISTER -1 */ Vector4fr t1;
//     /* BADREGISTER -1 */ Vector4fr t2;
//     /* v0 2 */ Vector4fr t3;
//     {
//         /* a1 5 */ float *transform[4];
//         {
//             /* f0 38 */ float z;
//             /* f1 39 */ float y;
//             /* f3 41 */ float x;
//             {
//                 /* f0 38 */ float z;
//                 /* f1 39 */ float y;
//                 /* f3 41 */ float x;
//                 {
//                     {
//                         /* f3 41 */ float x;
//                         /* f1 39 */ float y;
//                         /* f0 38 */ float z;
//                         {
//                             /* f3 41 */ float len;
//                         }
//                     }
//                     {
//                         /* f3 41 */ float result;
//                     }
//                 }
//             }
//         }
//     }
//     {
//         /* a1 5 */ float *transform[4];
//         {
//             /* f0 38 */ float z;
//             /* f5 43 */ float y;
//             /* f2 40 */ float x;
//             {
//                 /* f0 38 */ float z;
//                 /* f5 43 */ float y;
//                 /* f2 40 */ float x;
//                 {
//                     {
//                         /* f2 40 */ float x;
//                         /* f5 43 */ float y;
//                         /* f0 38 */ float z;
//                         {
//                             /* f2 40 */ float len;
//                         }
//                     }
//                     {
//                         /* f2 40 */ float result;
//                     }
//                 }
//             }
//         }
//     }
//     {
//         /* a1 5 */ float *transform[4];
//         {
//             /* f0 38 */ float z;
//             /* f4 42 */ float y;
//             /* f1 39 */ float x;
//             {
//                 /* f0 38 */ float z;
//                 /* f4 42 */ float y;
//                 /* f1 39 */ float x;
//                 {
//                     {
//                         /* f1 39 */ float x;
//                         /* f4 42 */ float y;
//                         /* f0 38 */ float z;
//                         {
//                             /* f1 39 */ float len;
//                         }
//                     }
//                     {
//                         /* f1 39 */ float result;
//                     }
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_NormalizeMatrixf);

// /* 001691f8 0000008c */ void TRANS_InvertTransformf(/* s0 16 */ float *target[4], /* s1 17 */ float *source[4]) {
//     /* 0x0(sp) */ Matrixf normMat;
//     /* BADREGISTER -1 */ Vector4fr sourceTrans;
//     {
//         /* BADREGISTER -1 */ Vector4fr _m00;
//         /* BADREGISTER -1 */ Vector4fr _m01;
//         /* BADREGISTER -1 */ Vector4fr _m02;
//         /* BADREGISTER -1 */ Vector4fr _m10;
//         /* BADREGISTER -1 */ Vector4fr _m11;
//         /* BADREGISTER -1 */ Vector4fr _m12;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_InvertTransformf);

// /* 00169288 00000104 */ void TRANS_NewMatrixToOld(/* a0 4 */ float *fmat[4], /* a1 5 */ MATRIX *matrix) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_NewMatrixToOld);

// /* 00169390 00000120 */ void TRANS_OldMatrixToNew(/* a0 4 */ MATRIX *matrix, /* a1 5 */ float *fmat[4]) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_OldMatrixToNew);

// /* 001694b0 00000060 */ void TRANS_BuildWeightedMatrix(/* a0 4 */ float *a[4], /* a1 5 */ float *b[4], /* a2 6 */ float *c[4], /* f12 50 */ float w) {
//     /* BADREGISTER -1 */ Vector4fr weight;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_BuildWeightedMatrix);

// /* 00169510 00000038 */ void TRANS_ApplyWeightedOffset(/* a0 4 */ float *a[4], /* a1 5 */ float *b[4], /* a2 6 */ Vector4f *offset, /* f12 50 */ float w) {
//     /* BADREGISTER -1 */ Vector4fr weight;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_ApplyWeightedOffset);

// /* 00169548 00000058 */ void TRANS_LoadAverageCol(/* a0 4 */ CVECTOR *v0, /* a1 5 */ CVECTOR *v1, /* a2 6 */ int32 p0, /* a3 7 */ int32 p1, /* t0 8 */ CVECTOR *v2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_LoadAverageCol);

// /* 001695a0 00000074 */ void TRANS_LoadAverageColA(/* a0 4 */ CVECTOR *v0, /* a1 5 */ CVECTOR *v1, /* a2 6 */ int32 p0, /* a3 7 */ int32 p1, /* t0 8 */ CVECTOR *v2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_LoadAverageColA);

// /* 00169618 00000058 */ void TRANS_LoadAverageShort12(/* a0 4 */ SVECTOR *v0, /* a1 5 */ SVECTOR *v1, /* a2 6 */ int32 p0, /* a3 7 */ int32 p1, /* t0 8 */ SVECTOR *v2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/transform", TRANS_LoadAverageShort12);

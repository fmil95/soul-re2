/* Original path: C:\sr2\game\g2\InstncG2.c */
/* .text 0x00199FD8, .data 0x002A6030, .rodata 0x002B6780, .bss 0x01E97200 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, math3d.h, mempack.h */

#include "g2/InstncG2.h"

// /* 00199fd8 000000e0 */ void G2Instance_BuildTransformsForList(/* s1 17 */ Instance *listHead) {
//     /* s0 16 */ Instance *instance;
//     {
//         /* a1 5 */ void *ret;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/InstncG2", G2Instance_BuildTransformsForList);

// /* 0019a0b8 000001d0 */ void G2Instance_BuildTransforms(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/InstncG2", G2Instance_BuildTransforms);

// /* 0019a288 00000048 */ void G2Instance_RebuildTransforms(/* a1 5 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/InstncG2", G2Instance_RebuildTransforms);

// /* 0019a2d0 00000018 */ G2AnimKeylist* G2Instance_GetKeylist(/* a0 4 */ Instance *instance, /* a1 5 */ G2AnimKeylistID id) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/InstncG2", G2Instance_GetKeylist);

// /* 0019a2e8 00000058 */ static void G2Instance_ClearMatrices(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/InstncG2", G2Instance_ClearMatrices);

// /* 0019a340 0000047c */ static void _G2Instance_RebuildAnimatedTransforms(/* s2 18 */ Instance *instance) {
//     /* s6 22 */ Model *model;
//     /* s3 19 */ Matrixf *rootMatrix;
//     /* s0 16 */ Matrixf *segMatrix;
//     /* 0x0(sp) */ Matrixf seg1RotMatrix;
//     /* 0x40(sp) */ Matrixf seg2RotMatrix;
//     /* 0x80(sp) */ Vector4f rotVector;
//     /* s1 17 */ int32 segIndex;
//     {
//         /* s3 19 */ float *m0[4];
//         /* v0 2 */ float *m1[4];
//         {
//             /* a2 6 */ Vector4fr _m3;
//             /* a0 4 */ Vector4fr _m2;
//             /* v1 3 */ Vector4fr _m1;
//             /* a1 5 */ Vector4fr _m0;
//         }
//     }
//     {
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//         {
//             /* s3 19 */ float *m1[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr _m12;
//                 /* BADREGISTER -1 */ Vector4fr _m11;
//                 /* BADREGISTER -1 */ Vector4fr _m10;
//             }
//         }
//         {
//             /* v0 2 */ float *mat1[4];
//             /* s3 19 */ float *mat2[4];
//             /* s3 19 */ float *m4[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp22;
//                 /* BADREGISTER -1 */ Vector4fr temp21;
//                 /* BADREGISTER -1 */ Vector4fr temp20;
//                 /* BADREGISTER -1 */ Vector4fr temp12;
//                 /* BADREGISTER -1 */ Vector4fr temp11;
//                 /* BADREGISTER -1 */ Vector4fr temp10;
//             }
//         }
//     }
//     {
//         /* s3 19 */ float *m[4];
//     }
//     {
//         /* f22 60 */ float otx;
//         /* f21 59 */ float oty;
//         /* f20 58 */ float otz;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/InstncG2", _G2Instance_RebuildAnimatedTransforms);

// /* 0019a7c0 00000130 */ static void _G2Instance_BuildVirtualTransforms(/* s3 19 */ Instance *instance) {
//     /* s2 18 */ Model *model;
//     /* s0 16 */ VirtSegment *segment;
//     /* s1 17 */ int i;
//     {
//         /* f20 58 */ float weight;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/InstncG2", _G2Instance_BuildVirtualTransforms);

// /* 0019a8f0 00000044 */ static void _G2Instance_BuildAnimatedTransforms(/* v1 3 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/InstncG2", _G2Instance_BuildAnimatedTransforms);

// /* 0019a938 000001dc */ static void _G2Instance_RebuildNonAnimatedTransforms(/* s1 17 */ Instance *instance) {
//     /* 0x0(sp) */ Matrixf introTransform;
//     /* s0 16 */ Matrixf *segMatrix;
//     /* s4 20 */ Model *model;
//     /* s2 18 */ Segment *segment;
//     /* s3 19 */ int32 i;
//     {
//         /* s0 16 */ float *m0[4];
//         /* v1 3 */ float *m1[4];
//         {
//             /* a2 6 */ Vector4fr _m3;
//             /* a0 4 */ Vector4fr _m2;
//             /* v0 2 */ Vector4fr _m1;
//             /* a1 5 */ Vector4fr _m0;
//         }
//     }
//     {
//         /* s0 16 */ float *m[4];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/InstncG2", _G2Instance_RebuildNonAnimatedTransforms);

// /* 0019ab18 00000040 */ static void _G2Instance_BuildNonAnimatedTransforms(/* v0 2 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/InstncG2", _G2Instance_BuildNonAnimatedTransforms);

// /* 0019ab58 00000344 */ static void _G2Instance_BuildFacadeTransforms(/* s1 17 */ Instance *instance, /* a1 5 */ Segment *segment, /* s0 16 */ float *segMatrix[4], /* a3 7 */ float *matrixPool[4]) {
//     /* 0x0(sp) */ Vector4f cameraPos;
//     /* 0x10(sp) */ Vector4f segmentPos;
//     /* 0x20(sp) */ Vector4f segmentRot;
//     {
//         /* a3 7 */ float *matrix[4];
//         /* a1 5 */ Vector4f *srcvector;
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             /* BADREGISTER -1 */ Vector4fr m2;
//             /* BADREGISTER -1 */ Vector4fr m1;
//             /* BADREGISTER -1 */ Vector4fr m0;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//     }
//     {
//         /* 0x30(sp) */ Matrixf invTransform;
//         /* 0x70(sp) */ Vector4f zvec;
//         /* 0x80(sp) */ Vector4f camWorldPos;
//         /* 0x90(sp) */ Vector4f camLocPos;
//         /* 0xa0(sp) */ Matrixf xyTransform;
//         {
//             /* f20 58 */ float result;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr _m12;
//             /* BADREGISTER -1 */ Vector4fr _m11;
//             /* BADREGISTER -1 */ Vector4fr _m10;
//             /* BADREGISTER -1 */ Vector4fr _m02;
//             /* BADREGISTER -1 */ Vector4fr _m01;
//             /* BADREGISTER -1 */ Vector4fr _m00;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//         {
//             /* s0 16 */ float *m[4];
//         }
//     }
//     {
//         /* 0x70(sp) */ Vector4f xy;
//         /* v0 2 */ int32 dxy;
//         {
//             /* f2 40 */ float result;
//         }
//         {
//             /* s0 16 */ float *m[4];
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/InstncG2", _G2Instance_BuildFacadeTransforms);

// /* 0019aea0 0000005c */ void G2Instance_NextKeyframe(/* a0 4 */ Instance *instance) {
//     {
//         /* v0 2 */ void *ret;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/InstncG2", G2Instance_NextKeyframe);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/g2/InstncG2", D_002B6780);

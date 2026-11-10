/* Original path: C:\sr2\game\ps2\ps2shadow.c */
/* .text 0x001D86A0, .data 0x002A6720, .rodata 0x002B8A00 */
/* Code from other files was inlined here: mempack.h, ps2/drawlist.h */

#include "ps2/ps2shadow.h"

// /* 001d86a0 00000110 */ static void PS2Shadow_calculateMatrix(/* a0 4 */ float *matrix) {
//     /* 0x0(sp) */ Matrixf tTemp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_calculateMatrix);

// /* 001d87b0 00000128 */ static int32 PS2Shadow_transformAndClip(/* t1 9 */ PS2ShadowModel *pModel, /* t3 11 */ Matrixf *pMatrices, /* t2 10 */ Vector4fr *ptLightVector, /* a3 7 */ Vector4fr *ptRotatedVerts) {
//     /* t1 9 */ int32 nOutCode;
//     /* rdata 2b8a00 */ static Vector4f tBoundary;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_transformAndClip);

// /* 001d88d8 0000029c */ static void PS2Shadow_doBFC(/* a0 4 */ short int *pnFaces, /* a1 5 */ int32 nNumFaces, /* a2 6 */ Vector4fr *ptLightVector, /* a3 7 */ Vector4fr *ptRotatedVerts, /* s6 22 */ char *aisCul) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_doBFC);

// /* 001d8b78 00000154 */ static int32* PS2Shadow_iterateEdgeList(/* a0 4 */ int16 *pnEdges, /* a1 5 */ int32 nNumEdges, /* a2 6 */ int8 *pnCulled, /* a3 7 */ int32 *pnData, /* s2 18 */ Vector4fr *ptRotatedVerts) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_iterateEdgeList);

// /* 001d8cd0 00000148 */ static int32* PS2Shadow_closeVolume(/* a0 4 */ int32 *pnData, /* a1 5 */ short int *pnFaces, /* a2 6 */ int32 nNumFaces, /* a3 7 */ Vector4fr *ptLightVector, /* s4 20 */ Vector4fr *ptRotatedVerts, /* s3 19 */ char *aisCul) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_closeVolume);

// /* 001d8e18 000002e0 */ void PS2Shadow_renderInstanceShadow(/* s2 18 */ Instance *pInstance) {
//     /* a0 4 */ Model *pObject;
//     {
//         /* fp 30 */ PS2ShadowModel *ptShadowModel;
//         {
//             /* s0 16 */ int16 *pnShadowFaces;
//             /* s1 17 */ Vector4fr *ptRotatedVerts;
//             /* 0x0(sp) */ Vector4f tLightPos;
//             /* 0x10(sp) */ Vector4fr tLightRotated;
//             /* s6 22 */ int32 *pnData;
//             {
//                 /* s3 19 */ void *ret;
//             }
//             {
//                 /* s7 23 */ void *ptr;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_renderInstanceShadow);

// /* 001d90f8 0000002c */ uint64* PS2Shadow_getPrimList() {
//     {
//         /* v0 2 */ uint64 *pnResult;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2shadow", PS2Shadow_getPrimList);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2shadow", tBoundary_159);

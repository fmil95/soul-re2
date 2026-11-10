/* Original path: C:\sr2\game\Script.c */
/* .text 0x00155FB0, .rodata 0x002B5210 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h */

#include "common.h"

// /* 00155fb0 000000b8 */ void SCRIPT_CombineEulerAngles(/* s1 17 */ Vector4f *combinedRotation, /* a1 5 */ Vector4f *inputRotation1, /* s0 16 */ Vector4f *inputRotation2) {
//     /* 0x0(sp) */ Matrixf rotMatrix1;
//     /* 0x40(sp) */ Matrixf rotMatrix2;
//     /* 0x80(sp) */ G2EulerAngles ea;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp22;
//         /* BADREGISTER -1 */ Vector4fr temp21;
//         /* BADREGISTER -1 */ Vector4fr temp20;
//         /* BADREGISTER -1 */ Vector4fr temp12;
//         /* BADREGISTER -1 */ Vector4fr temp11;
//         /* BADREGISTER -1 */ Vector4fr temp10;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPT_CombineEulerAngles);

// /* 00156068 00000290 */ void SCRIPT_InstanceSplineInit(/* s2 18 */ Instance *instance) {
//     /* s3 19 */ Spline *spline;
//     /* a0 4 */ RSpline *rspline;
//     /* s4 20 */ Spline *sspline;
//     /* s0 16 */ MultiSpline *multi;
//     /* s5 21 */ SplineDef *sd;
//     /* s1 17 */ SplineDef *rsd;
//     /* s6 22 */ SplineDef *ssd;
//     /* 0x60(sp) */ int isParent;
//     /* 0x64(sp) */ int isClass;
//     {
//         /* 0x0(sp) */ Vector4f q;
//         /* 0x10(sp) */ G2EulerAngles ea;
//         {
//             /* 0x20(sp) */ Matrixf introTransform;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp22;
//                 /* BADREGISTER -1 */ Vector4fr temp21;
//                 /* BADREGISTER -1 */ Vector4fr temp20;
//                 /* BADREGISTER -1 */ Vector4fr temp12;
//                 /* BADREGISTER -1 */ Vector4fr temp11;
//                 /* BADREGISTER -1 */ Vector4fr temp10;
//             }
//         }
//         {
//             /* 0x20(sp) */ Vector4f combinedRotation;
//             {
//                 /* f0 38 */ float _x1;
//                 /* f2 40 */ float _y1;
//                 /* f1 39 */ float _z1;
//             }
//         }
//     }
//     {
//         /* v1 3 */ Vector3f *start_point;
//     }
//     {
//         /* v0 2 */ Vector3f *start_point;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPT_InstanceSplineInit);

// /* 001562f8 00000138 */ short int SCRIPTCountFramesInSpline(/* s0 16 */ Instance *instance) {
//     /* v1 3 */ short int kf;
//     /* s1 17 */ short int frames;
//     /* a0 4 */ SplineKey *key;
//     /* v0 2 */ Spline *spline;
//     /* v0 2 */ RSpline *rspline;
//     {
//         /* a0 4 */ SplineRotKey *rkey;
//     }
//     {
//         /* v0 2 */ MultiSpline *multi;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPTCountFramesInSpline);

// /* 00156430 0000002c */ Spline* ScriptGetPosSpline(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MultiSpline *multi;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", ScriptGetPosSpline);

// /* 00156460 0000002c */ RSpline* ScriptGetRotSpline(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MultiSpline *multi;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", ScriptGetRotSpline);

// /* 00156490 0000005c */ int SCRIPT_GetSplineFrameNumber(/* s0 16 */ Instance *instance, /* s1 17 */ SplineDef *splineDef) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPT_GetSplineFrameNumber);

// /* 001564f0 00000070 */ MultiSpline* SCRIPT_GetMultiSpline(/* a0 4 */ Instance *instance, /* a1 5 */ int *isParent, /* a2 6 */ int *isClass) {
//     /* a3 7 */ MultiSpline *multi;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPT_GetMultiSpline);

// /* 00156560 00000020 */ SplineDef* SCRIPT_GetPosSplineDef(/* a0 4 */ Instance *instance, /* a1 5 */ MultiSpline *multi, /* a2 6 */ int isParent, /* a3 7 */ int isClass) {
//     /* v0 2 */ SplineDef *splineDef;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPT_GetPosSplineDef);

// /* 00156580 00000020 */ SplineDef* SCRIPT_GetRotSplineDef(/* a0 4 */ Instance *instance, /* a1 5 */ MultiSpline *multi, /* a2 6 */ int isParent, /* a3 7 */ int isClass) {
//     /* v0 2 */ SplineDef *splineDef;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPT_GetRotSplineDef);

// /* 001565a0 00000020 */ SplineDef* SCRIPT_GetScaleSplineDef(/* a0 4 */ Instance *instance, /* a1 5 */ MultiSpline *multi, /* a2 6 */ int isParent, /* a3 7 */ int isClass) {
//     /* v0 2 */ SplineDef *splineDef;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPT_GetScaleSplineDef);

// /* 001565c0 000002dc */ void SCRIPT_InstanceSplineSet(/* s1 17 */ Instance *instance, /* s7 23 */ short int frameNum, /* s2 18 */ SplineDef *splineDef, /* s5 21 */ SplineDef *rsplineDef, /* s6 22 */ SplineDef *ssplineDef) {
//     /* s0 16 */ Spline *spline;
//     /* s4 20 */ RSpline *rspline;
//     /* fp 30 */ Spline *sspline;
//     /* s3 19 */ MultiSpline *multi;
//     /* 0x74(sp) */ int isClass;
//     /* 0x70(sp) */ int isParent;
//     /* 0x0(sp) */ Vector4f point;
//     {
//         /* 0x10(sp) */ Vector4f diff;
//     }
//     {
//         /* 0x20(sp) */ Vector4f q;
//         {
//             /* 0x30(sp) */ Matrixf introTransform;
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
//         /* 0x20(sp) */ Vector4f combinedRotation;
//         {
//             /* f0 38 */ float _x1;
//             /* f2 40 */ float _y1;
//             /* f1 39 */ float _z1;
//         }
//     }
//     {
//         /* 0x20(sp) */ Vector4f scale;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPT_InstanceSplineSet);

// /* 001568a0 000002bc */ int32 SCRIPT_SplineProcess(/* s3 19 */ Instance *instance, /* s6 22 */ MultiSpline *multi, /* 0x60(sp) */ SplineDef *splineDef, /* s5 21 */ SplineDef *rsplineDef, /* a1 5 */ SplineDef *ssplineDef, /* s7 23 */ int direction, /* 0x64(sp) */ int isClass) {
//     /* s4 20 */ int32 retVal;
//     /* fp 30 */ Spline *spline;
//     /* s0 16 */ RSpline *rspline;
//     /* a0 4 */ Spline *sspline;
//     /* s2 18 */ Vector4f *point;
//     /* f20 58 */ float timeOff;
//     {
//         /* 0x0(sp) */ Vector4f pt;
//     }
//     {
//         /* 0x10(sp) */ Vector4f q;
//         {
//             /* 0x20(sp) */ Matrixf introTransform;
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
//         /* 0x20(sp) */ Vector4f combinedRotation;
//         {
//             /* f0 38 */ float _x1;
//             /* f2 40 */ float _y1;
//             /* f1 39 */ float _z1;
//         }
//     }
//     {
//         /* 0x10(sp) */ Vector4f pt;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPT_SplineProcess);

// /* 00156b60 00000108 */ int32 SCRIPT_InstanceSplineProcess(/* s2 18 */ Instance *instance, /* s4 20 */ SplineDef *splineDef, /* s3 19 */ SplineDef *rsplineDef, /* s0 16 */ SplineDef *ssplineDef, /* s5 21 */ int direction) {
//     /* s1 17 */ MultiSpline *multi;
//     /* 0x4(sp) */ int isClass;
//     /* 0x0(sp) */ int isParent;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPT_InstanceSplineProcess);

// /* 00156c68 00000050 */ void SCRIPT_ResetSpline(/* a0 4 */ Instance *instance, /* a1 5 */ SplineDef *splineDef, /* a2 6 */ SplineDef *rsplineDef, /* a3 7 */ SplineDef *ssplineDef) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPT_ResetSpline);

// /* 00156cb8 00000080 */ void SCRIPT_FadeOutProcess(/* a0 4 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", SCRIPT_FadeOutProcess);

// /* 00156d38 00000118 */ void ScriptKillInstance(/* s0 16 */ Instance *instance, /* s1 17 */ int effect) {
//     /* s2 18 */ Object *object;
//     {
//         /* v0 2 */ Object *object;
//     }
//     {
//         /* v0 2 */ GenericTune *tune;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Script", ScriptKillInstance);

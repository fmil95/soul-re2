/* Original path: C:\sr2\game\MATH3D.C */
/* .text 0x00141878, .data 0x0025B400 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, math3d.h */

#include "MATH3D.h"

// /* 00141878 0000007c */ void MATH3D_Sort3NormalCoords(/* a0 4 */ NormalCoord *a, /* a1 5 */ NormalCoord *b, /* a2 6 */ NormalCoord *c) {
//     /* t0 8 */ NormalCoord a1;
//     /* v1 3 */ NormalCoord b1;
//     /* a3 7 */ NormalCoord c1;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_Sort3NormalCoords);

// /* 001418f8 00000098 */ void MATH3D_Sort3VectorCoords(/* a0 4 */ VectorCoord *a, /* a1 5 */ VectorCoord *b, /* a2 6 */ VectorCoord *c) {
//     /* f2 40 */ VectorCoord a1;
//     /* f0 38 */ VectorCoord b1;
//     /* f1 39 */ VectorCoord c1;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_Sort3VectorCoords);

// /* 00141990 000000c8 */ void MATH3D_Normalize(/* a1 5 */ Normal *normal) {
//     {
//         {
//             /* f1 39 */ float len;
//         }
//         {
//             /* f4 42 */ float result;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_Normalize);

// /* 00141a58 00000074 */ void MATH3D_Normal(/* a0 4 */ Vector4f *vec1, /* a1 5 */ Vector4f *vec2) {
//     /* f0 38 */ float length;
//     {
//         /* a0 4 */ Vector4f *vec;
//         {
//             /* f2 40 */ float z;
//             /* f1 39 */ float y;
//             /* f3 41 */ float x;
//             {
//                 {
//                     /* f3 41 */ float x;
//                     /* f1 39 */ float y;
//                     /* f2 40 */ float z;
//                     {
//                         /* f1 39 */ float len;
//                     }
//                 }
//                 {
//                     /* f1 39 */ float result;
//                 }
//             }
//         }
//     }
//     {
//         /* f0 38 */ float scalar;
//         /* a0 4 */ Vector4f *vec1;
//         /* a1 5 */ Vector4f *vec2;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_Normal);

// /* 00141ad0 00000148 */ ShortAngle MATH3D_FastAtan2(/* a0 4 */ int32 y, /* v1 3 */ int32 x) {
//     /* a2 6 */ int32 ax;
//     /* a1 5 */ int32 ay;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_FastAtan2);

// /* 00141c18 000000a8 */ float MATH3D_AccurateAtan2f(/* f12 50 */ float y, /* f13 51 */ float x) {
//     /* f1 39 */ float angle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_AccurateAtan2f);

// /* 00141cc0 00000094 */ ShortAngle MATH3D_racos(/* s3 19 */ int cos_ang_dest_act) {
//     /* s1 17 */ int test_angle;
//     /* v0 2 */ int cos_ang;
//     /* s0 16 */ int step;
//     /* s2 18 */ int cos_ang_dest;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_racos);

// /* 00141d58 000000f0 */ float MATH3D_acos(/* f23 61 */ float cos_ang_dest_act) {
//     /* f21 59 */ float step;
//     /* f20 58 */ float test_angle;
//     /* f0 38 */ float cos_ang;
//     /* f22 60 */ float cos_ang_dest;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_acos);

// /* 00141e48 00000028 */ float MATH3D_fmod(/* f12 50 */ float x, /* f13 51 */ float y) {
//     /* f0 38 */ float result;
//     /* v0 2 */ int ires;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_fmod);

// /* 00141e70 00000034 */ ShortAngle AngleDiff(/* a0 4 */ ShortAngle current, /* a1 5 */ ShortAngle destination) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", AngleDiff);

// /* 00141ea8 00000050 */ void MATH3D_ZYXtoXYZ(/* s0 16 */ Vector4f *rot) {
//     /* 0x0(sp) */ Matrixf tempMat;
//     /* 0x40(sp) */ G2EulerAngles ea;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_ZYXtoXYZ);

// /* 00141ef8 00000078 */ float MATH3D_AngleFromPosToPosf(/* a0 4 */ Vector4f *from, /* a1 5 */ Vector4f *to) {
//     /* f1 39 */ float angle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_AngleFromPosToPosf);

// /* 00141f70 0000007c */ float MATH3D_ElevationFromPosToPosf(/* a0 4 */ Vector4f *from, /* a1 5 */ Vector4f *to) {
//     /* f1 39 */ float angle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_ElevationFromPosToPosf);

// /* 00141ff0 00000054 */ void MATH3D_RotationFromPosToPosf(/* s0 16 */ Vector4f *from, /* s2 18 */ Vector4f *to, /* s1 17 */ Vector4f *rot) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_RotationFromPosToPosf);

// /* 00142048 00000064 */ void MATH3D_GetRotationFromNormalf(/* s1 17 */ Vector4f *normal, /* s0 16 */ Vector4f *rot) {
//     /* 0x0(sp) */ Vector4f center;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_GetRotationFromNormalf);

// /* 001420b0 00000078 */ float MATH3D_CircleAnglef(/* f12 50 */ float angle) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_CircleAnglef);

// /* 00142128 00000050 */ void MATH3D_ZYXtoXYZf(/* s0 16 */ Vector4f *rot) {
//     /* 0x0(sp) */ Matrixf tempMat;
//     /* 0x40(sp) */ G2EulerAngles ea;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_ZYXtoXYZf);

// /* 00142178 00000068 */ float MATH3D_CircleAnglef4096(/* f12 50 */ float current) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_CircleAnglef4096);

// /* 001421e0 000000b4 */ float MATH3D_AngleDifff(/* f12 50 */ float current, /* f13 51 */ float destination) {
//     /* f12 50 */ float diff;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_AngleDifff);

// /* 00142298 000000b4 */ float MATH3D_AngleDifff4096(/* f12 50 */ float current, /* f13 51 */ float destination) {
//     /* f12 50 */ float diff;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_AngleDifff4096);

// /* 00142350 00000108 */ void MATH3D_AngleMoveTowardf(/* s0 16 */ float *current_ptr, /* f22 60 */ float destination, /* f21 59 */ float step) {
//     /* f1 39 */ float diff;
//     /* f20 58 */ float current;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_AngleMoveTowardf);

// /* 00142458 00000108 */ void MATH3D_AngleMoveTowardf4096(/* s0 16 */ float *current_ptr, /* f22 60 */ float destination, /* f21 59 */ float step) {
//     /* f1 39 */ float diff;
//     /* f20 58 */ float current;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_AngleMoveTowardf4096);

// /* 00142560 00000094 */ float MATH3D_DistanceToSegment(/* a0 4 */ Vector4f *start, /* a1 5 */ Vector4f *axis, /* f12 50 */ float height, /* s1 17 */ Vector4f *test, /* s0 16 */ Vector4f *closestPoint) {
//     /* 0x0(sp) */ Vector4f end;
//     {
//         /* a0 4 */ Vector4f *base;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
//     {
//         /* s0 16 */ Vector4f *point1;
//         /* s1 17 */ Vector4f *point2;
//         {
//             /* f0 38 */ float len;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_DistanceToSegment);

// /* 001425f8 0000006c */ float MATH3D_DistanceFromPointToLineSegment(/* v0 2 */ Vector4f *start, /* a2 6 */ Vector4f *end, /* s0 16 */ Vector4f *point) {
//     /* 0x0(sp) */ Vector4f closestPoint;
//     {
//         /* s0 16 */ Vector4f *point2;
//         {
//             /* f0 38 */ float len;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_DistanceFromPointToLineSegment);

// /* 00142668 00000070 */ void MATH3D_RelativePositionf(/* a0 4 */ float *matrix[4], /* a1 5 */ Vector4f *origin, /* a2 6 */ Vector4f *position, /* a3 7 */ Vector4f *outPos) {
//     /* 0x0(sp) */ Vector4f delta;
//     /* 0x10(sp) */ Matrixf invMatrix;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* a0 4 */ float *m0[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr _m12;
//             /* BADREGISTER -1 */ Vector4fr _m11;
//             /* BADREGISTER -1 */ Vector4fr _m10;
//             /* BADREGISTER -1 */ Vector4fr _m02;
//             /* BADREGISTER -1 */ Vector4fr _m01;
//             /* BADREGISTER -1 */ Vector4fr _m00;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr dstvector;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_RelativePositionf);

// /* 001426d8 0000009c */ int MATH3D_ConeDetectf(/* s0 16 */ Vector4f *pos, /* f20 58 */ float arc, /* f23 61 */ float elevation) {
//     /* f21 59 */ float y;
//     /* f22 60 */ float x;
//     {
//         /* f22 60 */ float x;
//         /* f21 59 */ float y;
//         {
//             /* f13 51 */ float len;
//             {
//                 /* f13 51 */ float x;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_ConeDetectf);

// /* 00142778 000000a0 */ float MATH3D_AngleBetweenVectorsf(/* a0 4 */ Vector4f *vector1, /* s0 16 */ Vector4f *vector2) {
//     /* 0x0(sp) */ Vector4f nVector1;
//     /* 0x10(sp) */ Vector4f nVector2;
//     /* f12 50 */ float cos;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_AngleBetweenVectorsf);

// /* 00142818 00000008 */ void MATH3D_RotMatAboutVecf(/* a0 4 */ Vector4f *vec, /* a1 5 */ float *mat[4], /* f12 50 */ float angle) {}
void MATH3D_RotMatAboutVecf(Vector4f *vec, float *mat[4], float angle) {
}

// /* 00142820 0000004c */ float MATH3D_PositiveAnglef(/* f12 50 */ float angle) {
//     /* f1 39 */ float res;
//     /* v0 2 */ int32 temp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_PositiveAnglef);

// /* 00142870 00000030 */ float MATH3D_AngleLimit180f(/* f12 50 */ float angle) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_AngleLimit180f);

// /* 001428a0 00000250 */ void MATH3D_Solve2BoneIK(/* a0 4 */ Vector4f *startJointPos, /* a1 5 */ Vector4f *midJointPos, /* a2 6 */ Vector4f *effectorPos, /* a3 7 */ Vector4f *handlePos, /* t0 8 */ Vector4f *poleVector, /* s3 19 */ Vector4f *startQuat, /* s2 18 */ Vector4f *midQuat) {
//     /* 0x0(sp) */ Vector4f vector1;
//     /* 0x10(sp) */ Vector4f vector2;
//     /* 0x20(sp) */ Vector4f vectorH;
//     /* 0x30(sp) */ Vector4f vectorE;
//     /* 0x40(sp) */ Vector4f vectorO;
//     /* 0x50(sp) */ Vector4f vectorCross12;
//     /* 0x60(sp) */ Vector4f quat12;
//     /* 0x70(sp) */ Vector4f quatEH;
//     /* f20 58 */ float lengthHsquared;
//     /* f23 61 */ float vectorAngle12;
//     /* f12 50 */ float cosTheta;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f4 42 */ float z;
//         /* f5 43 */ float y;
//         /* f3 41 */ float x;
//         {
//             {
//                 /* f3 41 */ float x;
//                 /* f5 43 */ float y;
//                 /* f4 42 */ float z;
//                 {
//                     /* f22 60 */ float len;
//                 }
//             }
//             {
//                 /* f22 60 */ float result;
//             }
//         }
//     }
//     {
//         /* f0 38 */ float z;
//         /* f2 40 */ float y;
//         /* f21 59 */ float x;
//         {
//             {
//                 /* f21 59 */ float x;
//                 /* f2 40 */ float y;
//                 /* f0 38 */ float z;
//                 {
//                     /* f21 59 */ float len;
//                 }
//             }
//             {
//                 /* f21 59 */ float result;
//             }
//         }
//     }
//     {
//         /* f0 38 */ float z;
//         /* f1 39 */ float y;
//         /* f20 58 */ float x;
//         {
//             {
//                 /* f20 58 */ float x;
//                 /* f1 39 */ float y;
//                 /* f0 38 */ float z;
//                 {
//                     /* f20 58 */ float len;
//                 }
//             }
//             {
//                 /* f20 58 */ float result;
//             }
//         }
//     }
//     {
//         /* f3 41 */ float dp;
//     }
//     {
//         /* f2 40 */ float dp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f3 41 */ float _y1;
//         /* f6 44 */ float _z1;
//     }
//     {
//         /* f4 42 */ float _x1;
//         /* f5 43 */ float _y1;
//         /* f7 45 */ float _z1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_Solve2BoneIK);

// /* 00142af0 00000118 */ void MATH3D_QuatSetAxisAngle(/* s1 17 */ Vector4f *quat, /* f20 58 */ float theta, /* s0 16 */ Vector4f *axis) {
//     /* f2 40 */ float commonFactor;
//     {
//         /* s0 16 */ Vector4f *vec;
//         {
//             /* f0 38 */ float z;
//             /* f1 39 */ float y;
//             /* f2 40 */ float x;
//             {
//                 /* f21 59 */ float len;
//             }
//         }
//     }
//     {
//         /* s1 17 */ Vector4f *quat;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f0 38 */ float result;
//     }
//     {
//         /* f2 40 */ float scalar;
//         /* s0 16 */ Vector4f *vec1;
//         /* s1 17 */ Vector4f *vec2;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_QuatSetAxisAngle);

// /* 00142c08 00000160 */ int MATH3D_QuatGetAxisAngle(/* s1 17 */ Vector4f *quat, /* s2 18 */ float *theta, /* s0 16 */ Vector4f *axis) {
//     {
//         /* f1 39 */ float x;
//     }
//     {
//         /* s0 16 */ Vector4f *vec;
//         {
//             /* f1 39 */ float z;
//             /* f2 40 */ float y;
//             /* f0 38 */ float x;
//             {
//                 {
//                     /* f0 38 */ float x;
//                     /* f2 40 */ float y;
//                     /* f1 39 */ float z;
//                     {
//                         /* f0 38 */ float len;
//                     }
//                 }
//                 {
//                     /* f0 38 */ float result;
//                 }
//             }
//         }
//     }
//     {
//         /* f0 38 */ float thetaExtended;
//         /* f0 38 */ float inverseOfSinThetaByTwo;
//         {
//             /* f1 39 */ float a;
//         }
//         {
//             /* f0 38 */ float scalar;
//             /* s1 17 */ Vector4f *vec1;
//             /* s0 16 */ Vector4f *vec2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr scalarv;
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_QuatGetAxisAngle);

// /* 00142d68 000001cc */ void MATH3D_QuatRotateVectorToVector(/* s2 18 */ Vector4f *quat, /* s0 16 */ Vector4f *vec1, /* s1 17 */ Vector4f *vec2) {
//     /* f3 41 */ float factor;
//     {
//         /* s0 16 */ Vector4f *vec;
//         {
//             /* f7 45 */ float z;
//             /* f8 46 */ float y;
//             /* f9 47 */ float x;
//             {
//                 {
//                     /* f9 47 */ float x;
//                     /* f8 46 */ float y;
//                     /* f7 45 */ float z;
//                     {
//                         /* f0 38 */ float len;
//                     }
//                 }
//                 {
//                     /* f0 38 */ float result;
//                 }
//             }
//         }
//     }
//     {
//         /* s1 17 */ Vector4f *vec;
//         {
//             /* f4 42 */ float z;
//             /* f5 43 */ float y;
//             /* f6 44 */ float x;
//             {
//                 {
//                     /* f6 44 */ float x;
//                     /* f5 43 */ float y;
//                     /* f4 42 */ float z;
//                     {
//                         /* f1 39 */ float len;
//                     }
//                 }
//                 {
//                     /* f1 39 */ float result;
//                 }
//             }
//         }
//     }
//     {
//         /* 0x0(sp) */ Vector4f pivotVector;
//         /* f20 58 */ float dot;
//         /* f22 60 */ float theta;
//         {
//             /* s0 16 */ Vector4f *vec1;
//             /* s1 17 */ Vector4f *vec2;
//             {
//                 /* f0 38 */ float dp;
//             }
//         }
//         {
//             /* f20 58 */ float a;
//         }
//         {
//             /* s0 16 */ Vector4f *r;
//             /* s1 17 */ Vector4f *s;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* f1 39 */ float z;
//             /* f2 40 */ float y;
//             /* f0 38 */ float x;
//             {
//                 {
//                     /* f0 38 */ float x;
//                     /* f2 40 */ float y;
//                     /* f1 39 */ float z;
//                     {
//                         /* f0 38 */ float len;
//                     }
//                 }
//                 {
//                     /* f0 38 */ float result;
//                 }
//             }
//         }
//         {
//             /* v0 2 */ int dominantAxis;
//             /* a0 4 */ int da1;
//             /* v1 3 */ int da2;
//         }
//     }
//     {
//         /* s2 18 */ Vector4f *quat;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_QuatRotateVectorToVector);

// /* 00142f38 00000110 */ void MATH3D_QuatRotateVec(/* a0 4 */ Vector4f *quat, /* a1 5 */ Vector4f *vec1, /* a2 6 */ Vector4f *vec2) {
//     /* 0x0(sp) */ Vector4f r;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_QuatRotateVec);

// /* 00143048 0000005c */ int MATH3D_DominantAxis(/* a0 4 */ Vector4f *vec) {
//     /* f2 40 */ float xx;
//     /* f1 39 */ float yy;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_DominantAxis);

// /* 001430a8 000000b8 */ int MATH3D_IsParallel(/* a0 4 */ Vector4f *vec1, /* s0 16 */ Vector4f *vec2) {
//     /* 0x0(sp) */ Vector4f n1;
//     /* 0x10(sp) */ Vector4f n2;
//     {
//         /* f1 39 */ float dp;
//     }
//     {
//         /* f1 39 */ float x;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_IsParallel);

// /* 00143160 000000bc */ void MATH3D_QuatMultiply(/* a0 4 */ Vector4f *quat1, /* a1 5 */ Vector4f *quat2, /* a2 6 */ Vector4f *quat3) {
//     /* 0x0(sp) */ Vector4f result;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_QuatMultiply);

// /* 00143220 000000e4 */ void MATH3D_QuatToMatrix(/* a0 4 */ Vector4f *quat, /* a1 5 */ float *mat[4]) {
//     /* f0 38 */ float ww;
//     /* f7 45 */ float xx;
//     /* f2 40 */ float yy;
//     /* f9 47 */ float zz;
//     /* f5 43 */ float s;
//     /* f6 44 */ float xy;
//     /* f1 39 */ float xz;
//     /* f3 41 */ float yz;
//     /* f12 50 */ float wx;
//     /* f4 42 */ float wy;
//     /* f13 51 */ float wz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_QuatToMatrix);

// /* 00143308 0000007c */ float MATH3D_FastLog2(/* f12 50 */ float x) {
//     /* v0 2 */ uint32 exp;
//     /* a0 4 */ uint32 ix;
//     /* v1 3 */ uint32 mantissa;
//     /* f1 39 */ float log2;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_FastLog2);

// /* 00143388 00000090 */ int MATH3D_PointOnLine(/* a0 4 */ Vector4f *origin, /* a1 5 */ Vector4f *p, /* f12 50 */ float dist, /* a2 6 */ Vector4f *q) {
//     /* 0x0(sp) */ Vector4f vectorOP;
//     /* f1 39 */ float lambda;
//     /* f0 38 */ float invLambda;
//     {
//         /* a0 4 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f1 39 */ float z;
//         /* f2 40 */ float y;
//         /* f0 38 */ float x;
//         {
//             {
//                 /* f0 38 */ float x;
//                 /* f2 40 */ float y;
//                 /* f1 39 */ float z;
//                 {
//                     /* f0 38 */ float len;
//                 }
//             }
//             {
//                 /* f1 39 */ float result;
//             }
//         }
//     }
//     {
//         /* f1 39 */ float scalar;
//         /* a2 6 */ Vector4f *vec2;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* a2 6 */ Vector4f *dest;
//         /* a2 6 */ Vector4f *base;
//         /* a0 4 */ Vector4f *offset;
//         /* f0 38 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_PointOnLine);

// /* 00143418 00000074 */ float MATH3D_CheckMatrixAxisAlignment(/* a0 4 */ float *m0[4], /* a1 5 */ float *m1[4], /* a2 6 */ Vector4f *axis) {
//     /* 0x0(sp) */ Vector4f r0;
//     /* 0x10(sp) */ Vector4f r1;
//     {
//         /* a0 4 */ float *matrix[4];
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
//         /* a1 5 */ float *matrix[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr m2;
//             /* BADREGISTER -1 */ Vector4fr m1;
//             /* BADREGISTER -1 */ Vector4fr m0;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MATH3D", MATH3D_CheckMatrixAxisAlignment);

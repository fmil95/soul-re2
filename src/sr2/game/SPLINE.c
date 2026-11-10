/* Original path: C:\sr2\game\SPLINE.C */
/* .text 0x0015ABD8, .bss 0x01E92BB0 */
/* Code from other files was inlined here: math3d.h */

#include "common.h"

// /* 0015abd8 000000fc */ void _SplineS2Pos(/* a0 4 */ Vector3f *p, /* f12 50 */ float s, /* a1 5 */ SplineKey *key, /* a2 6 */ SplineKey *key2) {
//     /* f0 38 */ float s2;
//     /* f6 44 */ float s3;
//     /* f4 42 */ float h0;
//     /* f5 43 */ float h1;
//     /* f9 47 */ float h2;
//     /* f6 44 */ float h3;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", _SplineS2Pos);

// /* 0015acd8 00000088 */ int16 SplineCountFrames(/* a0 4 */ Spline *spline, /* a1 5 */ short int currKey) {
//     /* t1 9 */ int isRot;
//     /* v1 3 */ short int kf;
//     /* a3 7 */ short int frames;
//     /* a2 6 */ SplineKey *key;
//     /* t0 8 */ SplineRotKey *rkey;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineCountFrames);

// /* 0015ad60 000000f8 */ void SplineSetDefDenom(/* a0 4 */ Spline *spline, /* a1 5 */ SplineDef *def, /* a2 6 */ int denomFlag) {
//     /* a0 4 */ uint32 denom;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineSetDefDenom);

// /* 0015ae58 00000294 */ void SplineMatchDef(/* s1 17 */ Spline *srcSpline, /* s3 19 */ SplineDef *srcDef, /* s2 18 */ Spline *destSpline, /* s0 16 */ SplineDef *destDef) {
//     /* s5 21 */ uint32 srcTot;
//     /* s1 17 */ uint32 srcCount;
//     /* a1 5 */ uint32 destTot;
//     /* a2 6 */ uint32 destCount;
//     {
//         /* s4 20 */ uint32 mrf;
//         /* v0 2 */ uint32 fracFrame;
//         /* v0 2 */ uint32 extra;
//         /* v1 3 */ uint32 newFrame;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineMatchDef);

// /* 0015b0f0 00000098 */ short unsigned int SplineGetFrameNumber(/* a0 4 */ Spline *spline, /* a1 5 */ SplineDef *def) {
//     /* s0 16 */ short unsigned int frame;
//     /* a3 7 */ unsigned int i;
//     /* a2 6 */ SplineKey *key;
//     /* 0x0(sp) */ SplineDef temp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetFrameNumber);

// /* 0015b188 00000104 */ int16 SplineSetDef2FrameNumber(/* t2 10 */ Spline *spline, /* a1 5 */ SplineDef *def, /* a2 6 */ short unsigned int frame_number) {
//     /* t4 12 */ int isRot;
//     /* t5 13 */ short int status;
//     /* t0 8 */ SplineKey *key;
//     /* t1 9 */ SplineRotKey *rkey;
//     /* a3 7 */ short unsigned int frame;
//     /* v1 3 */ short int deltaFrame;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineSetDef2FrameNumber);

// /* 0015b290 0000004c */ int16 SplineIsWhere(/* a0 4 */ Spline *spline, /* a1 5 */ SplineDef *def) {
//     /* v1 3 */ short int curr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineIsWhere);

// /* 0015b2e0 0000006c */ int16 SplineMultiIsWhere(/* s0 16 */ MultiSpline *multi) {
//     /* v0 2 */ short int where;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineMultiIsWhere);

// /* 0015b350 00000044 */ int SplineIsAtKey(/* a0 4 */ Spline *spline, /* a1 5 */ SplineDef *def) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineIsAtKey);

// /* 0015b398 0000004c */ void SplineGetFirstRot(/* a0 4 */ RSpline *rspline, /* a1 5 */ SplineDef *def, /* a2 6 */ Vector4f *quat) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetFirstRot);

// /* 0015b3e8 00000028 */ Vector3f* SplineGetFirstPoint(/* a0 4 */ Spline *spline, /* a1 5 */ SplineDef *def) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetFirstPoint);

// /* 0015b410 0000005c */ void SplineGetLastRot(/* a3 7 */ RSpline *rspline, /* a1 5 */ SplineDef *def, /* a2 6 */ Vector4f *quat) {
//     {
//         /* v0 2 */ SplineRotKey *keyEnd;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetLastRot);

// /* 0015b470 00000044 */ Vector3f* SplineGetLastPoint(/* a2 6 */ Spline *spline, /* a1 5 */ SplineDef *def) {
//     /* v0 2 */ SplineKey *keyEnd;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetLastPoint);

// /* 0015b4b8 00000058 */ Vector4f* SplineGetNextRot(/* s0 16 */ RSpline *rspline, /* s1 17 */ SplineDef *def) {
//     /* bss 1e92bb0 */ static Vector4f nextRot;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetNextRot);

// /* 0015b510 00000058 */ Vector4f* SplineGetNextRotDC(/* s0 16 */ RSpline *rspline, /* s1 17 */ SplineDef *def, /* f12 50 */ float timeMult) {
//     /* bss 1e92bc0 */ static Vector4f nextRot;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetNextRotDC);

// /* 0015b568 00000058 */ Vector4f* SplineGetNextPointDC(/* s0 16 */ Spline *spline, /* s1 17 */ SplineDef *def, /* f12 50 */ float timeMult) {
//     /* bss 1e92bd0 */ static Vector4f point;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetNextPointDC);

// /* 0015b5c0 00000058 */ Vector4f* SplineGetNextPoint(/* s0 16 */ Spline *spline, /* s1 17 */ SplineDef *def) {
//     /* bss 1e92be0 */ static Vector4f point;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetNextPoint);

// /* 0015b618 00000058 */ Vector4f* SplineGetPreviousPoint(/* s0 16 */ Spline *spline, /* s1 17 */ SplineDef *def) {
//     /* bss 1e92bf0 */ static Vector4f point;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetPreviousPoint);

// /* 0015b670 000002f8 */ Vector4f* SplineGetNearestPoint(/* fp 30 */ Spline *spline, /* s1 17 */ Vector4f *point, /* s7 23 */ SplineDef *def) {
//     /* bss 1e92c00 */ static Vector4f dpoint;
//     /* v1 3 */ int32 dist;
//     /* v0 2 */ int32 dist1;
//     /* s2 18 */ int32 closest_dist;
//     /* s3 19 */ int closest_keyframe;
//     /* a3 7 */ int adjacent_keyframe;
//     /* s4 20 */ int closest_ib;
//     /* 0x20(sp) */ int saved_closest_key_dist;
//     /* s0 16 */ int i;
//     /* s5 21 */ int frame_count;
//     /* 0x24(sp) */ int swapped_keys;
//     /* a1 5 */ SplineKey *key;
//     /* 0x0(sp) */ Vector4f d;
//     /* 0x10(sp) */ SplineDef tempdef;
//     {
//         /* f2 40 */ float dp;
//     }
//     {
//         /* f0 38 */ float dp;
//     }
//     {
//         /* f3 41 */ float dp;
//     }
//     {
//         /* f0 38 */ float dp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetNearestPoint);

// /* 0015b968 00000498 */ Vector4f* SplineGoDist(/* s4 20 */ Spline *spline, /* s7 23 */ int32 distDesired, /* 0x40(sp) */ SplineDef *def) {
//     /* s2 18 */ SplineKey *key;
//     /* s5 21 */ SplineKey *key2;
//     /* bss 1e92c10 */ static Vector4f p;
//     /* 0x44(sp) */ int32 distAccum;
//     /* s3 19 */ int32 distToNext;
//     /* 0x0(sp) */ Vector4f diff;
//     /* 0x10(sp) */ Vector3f ptCurr;
//     /* 0x20(sp) */ Vector3f ptNext;
//     /* s6 22 */ int32 incr;
//     /* v0 2 */ int32 foo;
//     /* s1 17 */ int32 currKey;
//     /* s0 16 */ int32 currRat;
//     /* fp 30 */ int hitTheEnd;
//     {
//         /* 0x30(sp) */ Vector3f vec3;
//         {
//             /* f0 38 */ float _x1;
//             /* f1 39 */ float _y1;
//             /* f2 40 */ float _z1;
//         }
//     }
//     {
//         /* f0 38 */ float result;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGoDist);

// /* 0015be00 00000280 */ int SplineGetData(/* s1 17 */ Spline *spline, /* s0 16 */ SplineDef *def, /* s2 18 */ Vector4f *p) {
//     /* s4 20 */ int gotDataOk;
//     /* s3 19 */ int isRot;
//     /* a0 4 */ int count;
//     /* 0x0(sp) */ Vector4f quat;
//     /* 0x10(sp) */ G2EulerAngles ea;
//     {
//         /* v1 3 */ SplineRotKey *key0;
//         /* v0 2 */ SplineRotKey *key1;
//         /* 0x20(sp) */ Vector4f q1;
//         /* 0x30(sp) */ Vector4f q2;
//     }
//     {
//         /* 0x40(sp) */ Vector3f tmp;
//         {
//             /* f1 39 */ float _x1;
//             /* f2 40 */ float _y1;
//             /* f0 38 */ float _z1;
//             /* s0 16 */ Vector3f *_v0;
//         }
//         {
//             /* f0 38 */ float _x1;
//             /* f1 39 */ float _y1;
//             /* f2 40 */ float _z1;
//         }
//     }
//     {
//         /* v0 2 */ SplineRotKey *key0;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* a0 4 */ Vector3f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetData);

// /* 0015c080 0000015c */ int SplineGetQuatData(/* s1 17 */ Spline *spline, /* s0 16 */ SplineDef *def, /* s2 18 */ Vector4f *quat) {
//     /* s3 19 */ int gotDataOk;
//     /* v0 2 */ int count;
//     {
//         /* 0x0(sp) */ Vector4f q1;
//         /* 0x10(sp) */ Vector4f q2;
//         /* v0 2 */ SplineRotKey *key1;
//     }
//     {
//         /* v1 3 */ SplineRotKey *key0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetQuatData);

// /* 0015c1e0 0000010c */ int SplineGetNext(/* s0 16 */ Spline *spline, /* s1 17 */ SplineDef *def) {
//     /* s3 19 */ int movedSplineOk;
//     /* s2 18 */ int count;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetNext);

// /* 0015c2f0 0000010c */ int SplineGetPrev(/* s0 16 */ Spline *spline, /* s1 17 */ SplineDef *def) {
//     /* s2 18 */ int movedSplineOk;
//     /* a1 5 */ int isRot;
//     /* v0 2 */ int count;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetPrev);

// /* 0015c400 000001b4 */ int SplineGetOffsetNext(/* s2 18 */ Spline *spline, /* s1 17 */ SplineDef *def, /* f20 58 */ float fracOffset) {
//     /* s4 20 */ int movedSplineOk;
//     /* s3 19 */ int isRot;
//     /* s0 16 */ int count;
//     {
//         /* a0 4 */ int ioffset;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetOffsetNext);

// /* 0015c5b8 00000164 */ int SplineGetOffsetPrev(/* s1 17 */ Spline *spline, /* s0 16 */ SplineDef *def, /* f20 58 */ float fracOffset) {
//     /* s2 18 */ int movedSplineOk;
//     /* a1 5 */ int isRot;
//     /* v0 2 */ int count;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetOffsetPrev);

// /* 0015c720 00000058 */ Vector4f* SplineGetOffsetNextPoint(/* s0 16 */ Spline *spline, /* s1 17 */ SplineDef *def, /* f12 50 */ float offset) {
//     /* bss 1e92c20 */ static Vector4f point;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetOffsetNextPoint);

// /* 0015c778 00000058 */ Vector4f* SplineGetOffsetPreviousPoint(/* s0 16 */ Spline *spline, /* s1 17 */ SplineDef *def, /* f12 50 */ float offset) {
//     /* bss 1e92c30 */ static Vector4f point;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/SPLINE", SplineGetOffsetPreviousPoint);

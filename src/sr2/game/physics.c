/* Original path: C:\sr2\game\physics.c */
/* .text 0x00144260, .rodata 0x002B5070, .bss 0x01E92980 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, collide.h, math3d.h */

#include "physics.h"

// /* 00144260 00000044 */ void SetNoPtCollideInFamily(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ Instance *child;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", SetNoPtCollideInFamily);

// /* 001442a8 0000004c */ void ResetNoPtCollideInFamily(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ Instance *child;
// }
void ResetNoPtCollideInFamily(Instance *instance)
{
    Instance *child;

    instance->iflags &= 0xFFFFFFBF; // TODO: find out why it won't take the inverted form of the mask (~0x40)

    for (child = instance->LinkChild; child != NULL; child = child->LinkSibling)
    {
        ResetNoPtCollideInFamily(child);
    }
}

void PHYSICS_CheckLineInWorldMask(Instance *instance, PCollideInfo *pcollideInfo); // TODO: move this to the header
// /* 001442f8 00000020 */ void PHYSICS_CheckLineInWorld(/* a0 4 */ Instance *instance, /* a1 5 */ PCollideInfo *pcollideInfo) {}
void PHYSICS_CheckLineInWorld(Instance *instance, PCollideInfo *pcollideInfo) 
{
    pcollideInfo->collideType = 63;

    PHYSICS_CheckLineInWorldMask(instance, pcollideInfo);
}

// /* 00144318 00000074 */ void PHYSICS_CheckLineInWorldMask(/* s1 17 */ Instance *instance, /* s0 16 */ PCollideInfo *pcollideInfo) {
//     /* s2 18 */ Level *level;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_CheckLineInWorldMask);

// /* 00144390 00000574 */ int PhysicsCheckLinkedMove(/* s0 16 */ Instance *instance, /* s2 18 */ int Data, /* s4 20 */ int16 Mode) {
//     {
//         /* s3 19 */ Instance *on;
//         /* 0x0(sp) */ Matrixf work;
//         /* s1 17 */ Matrixf *current;
//         /* 0x40(sp) */ Vector4f delta;
//         /* f24 62 */ float onx;
//         /* f23 61 */ float ony;
//         /* f25 63 */ float onz;
//         /* f21 59 */ float ix;
//         /* f20 58 */ float iy;
//         /* f22 60 */ float iz;
//         {
//             /* a0 4 */ Instance *oldOn;
//         }
//         {
//             /* s1 17 */ float *m0[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr _m12;
//                 /* BADREGISTER -1 */ Vector4fr _m11;
//                 /* BADREGISTER -1 */ Vector4fr _m10;
//                 /* BADREGISTER -1 */ Vector4fr _m02;
//                 /* BADREGISTER -1 */ Vector4fr _m01;
//                 /* BADREGISTER -1 */ Vector4fr _m00;
//             }
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//         {
//             /* a0 4 */ float *mat2[4];
//             /* a1 5 */ float *m4[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp22;
//                 /* BADREGISTER -1 */ Vector4fr temp21;
//                 /* BADREGISTER -1 */ Vector4fr temp20;
//             }
//         }
//         {
//             /* s1 17 */ float *matrix[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr srcvector;
//                 /* BADREGISTER -1 */ Vector4fr m2;
//                 /* BADREGISTER -1 */ Vector4fr m1;
//                 /* BADREGISTER -1 */ Vector4fr m0;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr dstvector;
//                 }
//             }
//         }
//         {
//             /* 0x50(sp) */ G2EulerAngles newRot;
//             /* 0x60(sp) */ Vector4f newRelPos;
//             /* f2 40 */ float oldPosX;
//             /* f3 41 */ float oldPosY;
//             /* f4 42 */ float oldPosZ;
//             /* a0 4 */ int moved;
//             /* v0 2 */ int rotated;
//             {
//                 /* s1 17 */ float *m0[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr _m12;
//                     /* BADREGISTER -1 */ Vector4fr _m11;
//                     /* BADREGISTER -1 */ Vector4fr _m10;
//                     /* BADREGISTER -1 */ Vector4fr _m02;
//                     /* BADREGISTER -1 */ Vector4fr _m01;
//                     /* BADREGISTER -1 */ Vector4fr _m00;
//                 }
//             }
//             {
//                 /* v0 2 */ float *mat2[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp22;
//                     /* BADREGISTER -1 */ Vector4fr temp21;
//                     /* BADREGISTER -1 */ Vector4fr temp20;
//                 }
//             }
//             {
//                 /* BADREGISTER -1 */ Vector4fr srcvector;
//                 /* BADREGISTER -1 */ Vector4fr m2;
//                 /* BADREGISTER -1 */ Vector4fr m1;
//                 /* BADREGISTER -1 */ Vector4fr m0;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr dstvector;
//                 }
//             }
//             {
//                 /* s1 17 */ float *matrix[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr srcvector;
//                     /* BADREGISTER -1 */ Vector4fr m2;
//                     /* BADREGISTER -1 */ Vector4fr m1;
//                     /* BADREGISTER -1 */ Vector4fr m0;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr dstvector;
//                     }
//                 }
//             }
//             {
//                 /* s1 17 */ float *mat1[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr temp22;
//                     /* BADREGISTER -1 */ Vector4fr temp21;
//                     /* BADREGISTER -1 */ Vector4fr temp20;
//                     /* BADREGISTER -1 */ Vector4fr temp12;
//                     /* BADREGISTER -1 */ Vector4fr temp11;
//                     /* BADREGISTER -1 */ Vector4fr temp10;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckLinkedMove);

// /* 00144908 00000078 */ void PhysicsDefaultLinkedMoveResponse(/* s0 16 */ Instance *instance, /* s1 17 */ evPhysicsLinkedMoveData *Data, /* a2 6 */ int updateTransforms) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsDefaultLinkedMoveResponse);

// /* 00144980 00000698 */ int PhysicsCheckGravity(/* s1 17 */ Instance *instance, /* s2 18 */ int Data, /* s6 22 */ int16 Mode) {
//     /* f5 43 */ float Dot;
//     /* s7 23 */ int rc;
//     /* 0x0(sp) */ PCollideInfo CInfo;
//     /* 0x30(sp) */ Vector4f Old;
//     /* 0x40(sp) */ Vector4f New;
//     /* fp 30 */ int slide;
//     {
//         /* v0 2 */ int stillOnOldTFace;
//         /* s0 16 */ Level *level;
//         /* s3 19 */ TFace *tface;
//         {
//             /* a0 4 */ int16 *normalArray;
//             {
//                 /* a0 4 */ int16 *normalArray;
//                 {
//                     /* v1 3 */ void *address;
//                     {
//                         /* v0 2 */ Vector4fr vec;
//                     }
//                 }
//             }
//         }
//     }
//     {
//         /* 0x50(sp) */ Vector4f N;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* a0 4 */ Instance *oldOn;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckGravity);

// /* 00145018 00000064 */ void PhysicsDefaultGravityResponse(/* a0 4 */ Instance *instance, /* a1 5 */ evPhysicsGravityData *Data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsDefaultGravityResponse);

// /* 00145080 00000638 */ int PhysicsCheckEdgeGrabbing(/* s2 18 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker, /* s1 17 */ int Data, /* s3 19 */ int16 Mode) {
//     /* fp 30 */ int rc;
//     /* 0x0(sp) */ Vector4f OutTrans;
//     /* a0 4 */ Vector4f *ExtraRot;
//     /* 0x10(sp) */ PCollideInfo CInfo;
//     /* 0x40(sp) */ Vector4f Old;
//     /* 0x50(sp) */ Vector4f New;
//     /* bss 1e92980 */ static Matrixf TempMat;
//     /* bss 1e929c0 */ static Matrixf *pTempMat;
//     /* s5 21 */ int wallCrawl;
//     /* s4 20 */ int freeSpot;
//     {
//         /* v0 2 */ float *matrix[4];
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
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         /* BADREGISTER -1 */ Vector4fr m0;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* v0 2 */ float *matrix[4];
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
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckEdgeGrabbing);

// /* 001456b8 000002c4 */ void PhysicsDefaultEdgeGrabResponse(/* s3 19 */ Instance *instance, /* s2 18 */ evPhysicsEdgeData *Data, /* a2 6 */ int blockFlag) {
//     /* 0x0(sp) */ Vector4f normal;
//     /* 0x10(sp) */ G2EulerAngles ea1;
//     /* 0x20(sp) */ Vector4f OutTrans;
//     /* 0x30(sp) */ Matrixf TempMat;
//     /* 0x70(sp) */ Vector4f New;
//     {
//         /* 0x80(sp) */ Vector4f quat;
//         /* 0x90(sp) */ Vector4f vec;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         /* BADREGISTER -1 */ Vector4fr m0;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* f0 38 */ float dp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsDefaultEdgeGrabResponse);

// /* 00145980 000003c8 */ int PhysicsCheckSliding(/* s1 17 */ Instance *instance, /* s0 16 */ int Data, /* s4 20 */ int16 Mode) {
//     /* s2 18 */ int rc;
//     /* 0x0(sp) */ Vector4f OutTrans;
//     /* 0x10(sp) */ Vector4f normal;
//     /* 0x20(sp) */ PCollideInfo CInfo;
//     /* 0x50(sp) */ Vector4f Old;
//     /* 0x60(sp) */ Vector4f New;
//     /* bss 1e929c4 */ static Matrixf *pTempMat;
//     {
//         /* a1 5 */ int16 *normalArray;
//         {
//             /* a1 5 */ int16 *normalArray;
//             {
//                 /* v1 3 */ void *address;
//                 {
//                     /* v0 2 */ Vector4fr vec;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckSliding);

// /* 00145d48 000000cc */ int PhysicsUpdateTface(/* s0 16 */ Instance *instance, /* a2 6 */ int Data) {
//     /* 0x0(sp) */ PCollideInfo CInfo;
//     /* 0x30(sp) */ Vector4f Old;
//     /* 0x40(sp) */ Vector4f New;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsUpdateTface);

// /* 00145e18 000003a0 */ int PhysicsCheckBlockers(/* s2 18 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker, /* s1 17 */ int Data, /* s3 19 */ int16 Mode) {
//     /* 0x0(sp) */ Vector4f OutTrans;
//     /* 0x10(sp) */ PCollideInfo CInfo;
//     /* 0x40(sp) */ Vector4f Old;
//     /* 0x50(sp) */ Vector4f New;
//     /* bss 1e929c8 */ static Matrixf *pTempMat;
//     {
//         /* a0 4 */ TFace *tface;
//         {
//             /* f4 42 */ float Dot;
//             /* 0x60(sp) */ Vector4f Force;
//             {
//                 /* v0 2 */ float *matrix[4];
//                 {
//                     /* BADREGISTER -1 */ Vector4fr srcvector;
//                     /* BADREGISTER -1 */ Vector4fr m2;
//                     /* BADREGISTER -1 */ Vector4fr m1;
//                     /* BADREGISTER -1 */ Vector4fr m0;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr dstvector;
//                     }
//                 }
//             }
//         }
//         {
//             /* v1 3 */ HFace *hface;
//         }
//         {
//             /* v1 3 */ float *matrix[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr srcvector;
//                 /* BADREGISTER -1 */ Vector4fr m2;
//                 /* BADREGISTER -1 */ Vector4fr m1;
//                 /* BADREGISTER -1 */ Vector4fr m0;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr dstvector;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckBlockers);

// /* 001461b8 00000218 */ int PhysicsCheckSwim(/* s2 18 */ Instance *instance, /* s1 17 */ int Data, /* s5 21 */ int16 Mode) {
//     /* s0 16 */ int rc;
//     /* s3 19 */ int Depth;
//     /* v1 3 */ int WaterDepth;
//     /* 0x0(sp) */ PCollideInfo CInfo;
//     /* 0x30(sp) */ Vector4f Old;
//     /* 0x40(sp) */ Vector4f New;
//     /* s4 20 */ int32 waterZLevel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckSwim);

// /* 001463d0 0000020c */ int PhysicsDefaultCheckSwimResponse(/* s1 17 */ Instance *instance, /* s2 18 */ evPhysicsSwimData *Data) {
//     /* s0 16 */ int rc;
//     /* s3 19 */ int32 waterZLevel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsDefaultCheckSwimResponse);

// /* 001465e0 000000dc */ void PhysicsForceSetWater(/* s0 16 */ Instance *instance, /* a1 5 */ float *Time, /* f12 50 */ float Depth, /* f5 43 */ float rate, /* f14 52 */ float maxAmplitude) {
//     /* f20 58 */ float Amplitude;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsForceSetWater);

// /* 001466c0 00000030 */ int PhysicsCheckLOS(/* a0 4 */ Instance *instance, /* a1 5 */ int Data, /* a2 6 */ int Mode) {
//     /* 0x0(sp) */ PCollideInfo CInfo;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckLOS);

// /* 001466f0 000002e4 */ int PhysicsCheckDropHeight(/* s2 18 */ Instance *instance, /* s1 17 */ int Data, /* s3 19 */ int Mode) {
//     /* a0 4 */ Level *level;
//     /* 0x0(sp) */ Vector4f newPos;
//     /* 0x10(sp) */ Vector4f oldPos;
//     /* s0 16 */ int rc;
//     /* f2 40 */ float lowZ;
//     /* 0x20(sp) */ PCollideInfo CInfo;
//     /* bss 1e929d0 */ static Matrixf TempMat;
//     /* bss 1e92a10 */ static Matrixf *pTempMat;
//     {
//         /* 0x50(sp) */ Vector4f outTrans;
//         /* a0 4 */ Vector4f *ExtraRot;
//         {
//             /* v0 2 */ float *mat1[4];
//             /* v1 3 */ float *mat2[4];
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
//             /* v0 2 */ float *matrix[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr srcvector;
//                 /* BADREGISTER -1 */ Vector4fr m2;
//                 /* BADREGISTER -1 */ Vector4fr m1;
//                 /* BADREGISTER -1 */ Vector4fr m0;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr dstvector;
//                 }
//             }
//         }
//     }
//     {
//         /* v1 3 */ int32 waterZLevel;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckDropHeight);

// /* 001469d8 000002e4 */ int PhysicsCheckDropOff(/* s1 17 */ Instance *instance, /* s2 18 */ int Data, /* s3 19 */ int16 Mode) {
//     /* s4 20 */ int rc;
//     /* 0x0(sp) */ Vector4f OutTrans;
//     /* a0 4 */ Vector4f *ExtraRot;
//     /* 0x10(sp) */ PCollideInfo CInfo;
//     /* 0x40(sp) */ Vector4f New;
//     /* 0x50(sp) */ Vector4f Old;
//     /* bss 1e92a20 */ static Matrixf TempMat;
//     /* bss 1e92a60 */ static Matrixf *pTempMat;
//     {
//         /* v0 2 */ float *mat1[4];
//         /* v1 3 */ float *mat2[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* v0 2 */ float *matrix[4];
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
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckDropOff);

// /* 00146cc0 000001d4 */ int PhysicsCheckWallBend(/* s0 16 */ Instance *instance, /* a1 5 */ int Data, /* s4 20 */ int16 Mode) {
//     /* 0x0(sp) */ Vector4f dick;
//     /* s1 17 */ Level *level;
//     /* 0x10(sp) */ Vector4f norm;
//     /* 0x20(sp) */ Vector4f nownorm;
//     /* s2 18 */ int rv;
//     /* 0x30(sp) */ Vector4f New;
//     /* 0x40(sp) */ Vector4f Old;
//     /* 0x50(sp) */ PCollideInfo CInfo;
//     {
//         /* v1 3 */ float *matrix[4];
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
//         /* a2 6 */ int16 *normalArray;
//         {
//             /* a2 6 */ int16 *normalArray;
//             {
//                 /* v1 3 */ void *address;
//                 {
//                     /* v0 2 */ Vector4fr vec;
//                 }
//             }
//         }
//     }
//     {
//         /* a1 5 */ int16 *normalArray;
//         {
//             /* a1 5 */ int16 *normalArray;
//             {
//                 /* v1 3 */ void *address;
//                 {
//                     /* v0 2 */ Vector4fr vec;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckWallBend);

// /* 00146e98 000004fc */ int PhysicsFollowWall(/* s3 19 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker, /* s2 18 */ int Data, /* s4 20 */ int16 Mode) {
//     /* 0x0(sp) */ Vector4f OutTrans;
//     /* 0x10(sp) */ PCollideInfo CInfo;
//     /* 0x40(sp) */ Vector4f New;
//     /* 0x50(sp) */ Vector4f Old;
//     /* bss 1e92a64 */ static Matrixf *pTempMat;
//     {
//         /* 0x60(sp) */ Vector4f A;
//         /* 0x70(sp) */ Vector4f B;
//         /* 0x80(sp) */ Matrixf mat;
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
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* v0 2 */ float *matrix[4];
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
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         /* BADREGISTER -1 */ Vector4fr m0;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* v0 2 */ float *matrix[4];
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
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsFollowWall);

// /* 00147398 000000c0 */ float PhysicsCheckFeet(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker, /* a2 6 */ int Data, /* a3 7 */ int16 Mode) {
//     /* 0x0(sp) */ PCollideInfo CInfo;
//     /* 0x30(sp) */ Vector4f New;
//     /* 0x40(sp) */ Vector4f Old;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckFeet);

// /* 00147458 000000e4 */ void PhysicsMoveLocalZClamp(/* s2 18 */ Instance *instance, /* s0 16 */ int32 segment, /* f20 58 */ float time, /* s1 17 */ int32 clamp) {
//     /* 0x0(sp) */ Vector4f pos;
//     /* 0x10(sp) */ Vector4f v;
//     /* 0x20(sp) */ Vector4f dv;
//     {
//         /* s0 16 */ float *matrix[4];
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
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsMoveLocalZClamp);

// /* 00147540 0000011c */ void PhysicsMove(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *position, /* f12 50 */ float time) {
//     /* f14 52 */ float xVel;
//     /* f13 51 */ float yVel;
//     /* f11 49 */ float zVel;
//     /* f8 46 */ float xat;
//     /* f9 47 */ float yat;
//     /* f10 48 */ float zat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsMove);

// /* 00147660 00000060 */ void PhysicsSetVelFromZRot(/* s0 16 */ Instance *instance, /* f12 50 */ float angle, /* f21 59 */ float magnitude) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsSetVelFromZRot);

// /* 001476c0 00000078 */ void PhysicsSetVelFromRot(/* s0 16 */ Instance *instance, /* a1 5 */ Vector4f *rot, /* f12 50 */ float magnitude) {
//     /* 0x0(sp) */ Matrixf mat;
//     /* 0x40(sp) */ Vector4f flatPt;
//     /* 0x50(sp) */ Vector4f newPt;
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         /* BADREGISTER -1 */ Vector4fr m0;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsSetVelFromRot);

// /* 00147738 00000140 */ void PHYSICS_SetVAndAFromRot(/* s0 16 */ Instance *instance, /* a0 4 */ Vector4f *rot, /* f20 58 */ float v, /* f22 60 */ float a) {
//     /* 0x0(sp) */ Vector4f flatPt;
//     /* 0x10(sp) */ Matrixf mat;
//     {
//         /* 0x50(sp) */ Vector4f newPt;
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
//         /* 0x60(sp) */ Vector4f newPt;
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
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_SetVAndAFromRot);

// /* 00147878 0000002c */ float PHYSICS_FindAFromDAndT(/* f12 50 */ float d, /* f13 51 */ float t) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_FindAFromDAndT);

// /* 001478a8 00000028 */ float PHYSICS_FindVFromAAndD(/* f12 50 */ float a, /* f13 51 */ float d) {
//     /* f12 50 */ float vsq;
//     {
//         /* f12 50 */ float x;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_FindVFromAAndD);

// /* 001478d0 00000118 */ void PHYSICS_StopIfCloseToTarget(/* a0 4 */ Instance *instance, /* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float z) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_StopIfCloseToTarget);

// /* 001479e8 0000004c */ int PHYSICS_CheckForTerrainCollide(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *startVec, /* a2 6 */ Vector4f *endVec, /* a3 7 */ int segment) {
//     /* 0x0(sp) */ PCollideInfo CInfo;
//     /* v0 2 */ Matrixf *pTempMat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_CheckForTerrainCollide);

// /* 00147a38 00000048 */ int PHYSICS_CheckForObjectCollide(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *startVec, /* a2 6 */ Vector4f *endVec, /* a3 7 */ int segment) {
//     /* 0x0(sp) */ PCollideInfo CInfo;
//     /* v0 2 */ Matrixf *pTempMat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_CheckForObjectCollide);

// /* 00147a80 0000006c */ int PHYSICS_CheckForValidMove(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *startVec, /* a2 6 */ Vector4f *endVec, /* a3 7 */ int segment) {
//     /* 0x0(sp) */ PCollideInfo CInfo;
//     /* v0 2 */ Matrixf *pTempMat;
//     /* v1 3 */ int rc;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_CheckForValidMove);

// /* 00147af0 00000040 */ static int PHYSICS_CheckFaceStick(/* a0 4 */ PCollideInfo *CInfo) {
//     /* a1 5 */ int rc;
//     {
//         /* v1 3 */ TFace *tface;
//     }
//     {
//         /* v1 3 */ HFace *hface;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_CheckFaceStick);

// /* 00147b30 000000d0 */ static int PHYSICS_CheckDontGrabEdge(/* s0 16 */ PCollideInfo *CInfo) {
//     /* s1 17 */ int rc;
//     {
//         /* a1 5 */ TFace *tface;
//         /* a0 4 */ BSPTree *bsp;
//     }
//     {
//         /* v0 2 */ HFace *hface;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_CheckDontGrabEdge);

// /* 00147c00 00000010 */ void PHYSICS_GenericLineCheckSetup(/* a0 4 */ int16 x, /* a1 5 */ int16 y, /* a2 6 */ int16 z, /* a3 7 */ SVECTOR *inVec) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_GenericLineCheckSetup);

// /* 00147c10 00000010 */ void PHYSICS_GenericLineCheckSetupf(/* f12 50 */ float x, /* f13 51 */ float y, /* f14 52 */ float z, /* a0 4 */ Vector4f *inVec) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_GenericLineCheckSetupf);

// /* 00147c20 00000020 */ void PHYSICS_GenericLineCheck(/* a0 4 */ Instance *instance, /* a1 5 */ float *transMat[4], /* a2 6 */ float *rotMat[4], /* a3 7 */ PCollideInfo *cInfo) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_GenericLineCheck);

// /* 00147c40 000000d0 */ void PHYSICS_GenericLineCheckMask(/* a0 4 */ Instance *instance, /* v1 3 */ float *transMat[4], /* a2 6 */ float *rotMat[4], /* a3 7 */ PCollideInfo *cInfo) {
//     /* v0 2 */ Vector4f *startVec;
//     /* t0 8 */ Vector4f *endVec;
//     /* 0x0(sp) */ Vector4f outVec;
//     {
//         /* a2 6 */ float *matrix[4];
//         /* v0 2 */ Vector4f *srcvector;
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
//         /* a2 6 */ float *matrix[4];
//         /* t0 8 */ Vector4f *srcvector;
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
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_GenericLineCheckMask);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/physics", D_002B5070);

/* Original path: C:\sr2\game\monster\monsense.c */
/* .text 0x0017FA48, .data 0x002A4B90 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, math3d.h */

#include "monster/monsense.h"

// /* 0017fa48 00000070 */ void MONSENSE_RelocateCoords(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *offset) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v1 3 */ MonsterIR *mir;
//     /* a0 4 */ MonsterIR *emir;
//     /* f4 42 */ float ox;
//     /* f3 41 */ float oy;
//     /* f5 43 */ float oz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_RelocateCoords);

// /* 0017fab8 00000054 */ MonsterIR* MONSENSE_FindIR(/* a0 4 */ Instance *instance, /* a1 5 */ Instance *target) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v1 3 */ MonsterIR *mir;
//     /* a0 4 */ MonsterIR *emir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_FindIR);

// /* 0017fb10 00000048 */ MonsterIR* MONSENSE_FindFreeIR(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v1 3 */ MonsterIR *mir;
//     /* a0 4 */ MonsterIR *emir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_FindFreeIR);

// /* 0017fb58 00000070 */ void MONSENSE_PurgeOldestIR(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a3 7 */ MonsterIR *oldMir;
//     /* a1 5 */ int32 oldTime;
//     /* v1 3 */ MonsterIR *mir;
//     /* a2 6 */ MonsterIR *emir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_PurgeOldestIR);

// /* 0017fbc8 00000088 */ MonsterIR* MONSENSE_FindClosestIR(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 withFlags, /* a2 6 */ uint32 withoutFlags) {
//     /* v0 2 */ MonsterVars *mv;
//     /* t0 8 */ MonsterIR *minMir;
//     /* f1 39 */ float minDist;
//     /* a0 4 */ MonsterIR *mir;
//     /* a3 7 */ MonsterIR *emir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_FindClosestIR);

// /* 0017fc50 00000104 */ MonsterIR* MONSENSE_FindBestLeader(/* t2 10 */ Instance *instance) {
//     /* t1 9 */ MonsterVars *mv;
//     /* a0 4 */ MonsterVars *omv;
//     /* t0 8 */ MonsterIR *minMir;
//     /* a3 7 */ int32 minID;
//     /* a1 5 */ MonsterIR *mir;
//     /* a2 6 */ MonsterIR *emir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_FindBestLeader);

// /* 0017fd58 00000030 */ int32 MONSENSE_SameIR(/* a0 4 */ MonsterIR *mir, /* a1 5 */ uint32 instanceID) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_SameIR);

// /* 0017fd88 00000028 */ void MONSENSE_InitIRList(/* a0 4 */ MonsterIR *list, /* a1 5 */ int32 num) {
//     /* a0 4 */ MonsterIR *mir;
//     /* a1 5 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_InitIRList);

// /* 0017fdb0 00000048 */ void MONSENSE_SetInstanceCheckMask(/* a3 7 */ Instance *instance, /* a1 5 */ int32 start, /* a2 6 */ int32 num) {
//     /* a0 4 */ MonsterVars *mv;
//     /* v1 3 */ MonsterAllegiances *allegiances;
//     /* a0 4 */ uint32 *curr;
//     /* a2 6 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_SetInstanceCheckMask);

// /* 0017fdf8 000000d4 */ void MONSENSE_SetupSenses(/* s1 17 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s2 18 */ MonsterAllegiances *allegiances;
//     /* s0 16 */ int32 start;
//     /* v0 2 */ int32 num;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_SetupSenses);

// /* 0017fed0 0000015c */ static int32 MONSENSE_See(/* s2 18 */ Instance *instance, /* s0 16 */ evCollideInstanceStatsData *data, /* s3 19 */ int32 losCheck) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v1 3 */ MonsterSenses *senses;
//     {
//         /* s1 17 */ Instance *target;
//         {
//             /* 0x0(sp) */ evPhysicsLOSData losData;
//             /* s0 16 */ Matrixf *mat;
//             /* v0 2 */ Matrixf *mat2;
//             {
//                 /* f1 39 */ float _x1;
//                 /* f0 38 */ float _y1;
//                 /* f2 40 */ float _z1;
//                 /* v1 3 */ Vector4f *_v0;
//                 /* v0 2 */ Vector4f *_v1;
//             }
//             {
//                 /* f1 39 */ float _x1;
//                 /* f0 38 */ float _y1;
//                 /* f2 40 */ float _z1;
//                 /* a0 4 */ Vector4f *_v1;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_See);

// /* 00180030 000000b8 */ static int32 MONSENSE_Hear(/* a0 4 */ Instance *instance, /* s1 17 */ evCollideInstanceStatsData *data) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s0 16 */ MonsterSenses *senses;
//     /* v1 3 */ int32 mode;
//     {
//         /* 0x0(sp) */ Vector4f fpHack;
//         /* f12 50 */ float arc;
//         /* f13 51 */ float elevation;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_Hear);

// /* 001800e8 00000040 */ static int32 MONSENSE_Smell(/* a0 4 */ Instance *instance, /* a1 5 */ evCollideInstanceStatsData *data) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v0 2 */ MonsterSenses *senses;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_Smell);

// /* 00180128 00000064 */ int32 MONSENSE_ShouldSenseInstanceSpecific(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 whatAmI, /* a2 6 */ int32 start, /* a3 7 */ int32 num) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v0 2 */ MonsterAllegiances *allegiances;
//     /* v1 3 */ uint32 check;
//     /* a0 4 */ uint32 *curr;
//     /* a3 7 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_ShouldSenseInstanceSpecific);

// /* 00180190 0000012c */ int32 MONSENSE_ShouldSenseInstance(/* s4 20 */ Instance *instance, /* s0 16 */ Instance *sensed) {
//     /* v1 3 */ MonsterVars *mv;
//     /* s3 19 */ MonsterAllegiances *allegiances;
//     /* s2 18 */ uint32 whatAmI;
//     /* s1 17 */ int32 start;
//     /* s0 16 */ int32 num;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_ShouldSenseInstance);

// /* 001802c0 00000148 */ void MONSENSE_SenseInstanceImmediate(/* s1 17 */ Instance *instance, /* s0 16 */ Instance *other) {
//     /* v1 3 */ MonsterVars *mv;
//     {
//         /* v0 2 */ Matrixf *lookMatrix;
//         /* 0x0(sp) */ Matrixf invMatrix;
//         /* 0x40(sp) */ evCollideInstanceStatsData data;
//         /* 0x60(sp) */ Vector4f delta;
//         {
//             {
//                 /* f0 38 */ float len;
//             }
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//         {
//             /* v0 2 */ float *m0[4];
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
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_SenseInstanceImmediate);

// /* 00180408 00000080 */ static int32 MONSENSE_SensedInSamePlane(/* a2 6 */ Instance *instance, /* a3 7 */ evCollideInstanceStatsData *data) {
//     /* t0 8 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_SensedInSamePlane);

// /* 00180488 0000034c */ void MONSENSE_SetMIRFlags(/* s3 19 */ Instance *instance, /* s0 16 */ MonsterIR *mir) {
//     /* s4 20 */ MonsterVars *mv;
//     /* f0 38 */ float angle;
//     /* s2 18 */ int32 attacking;
//     /* s1 17 */ int32 mode;
//     /* a0 4 */ int32 hs;
//     /* a0 4 */ int32 seq;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_SetMIRFlags);

// /* 001807d8 0000012c */ void MONSENSE_SenseInstance(/* s1 17 */ Instance *instance, /* s0 16 */ evCollideInstanceStatsData *data) {
//     /* s3 19 */ MonsterVars *mv;
//     /* s2 18 */ MonsterIR *mir;
//     {
//         /* s2 18 */ uint32 detected;
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_SenseInstance);

// /* 00180908 00000068 */ int32 MONSENSE_CheckAllegiance(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 whatAmI, /* a2 6 */ int32 start, /* a3 7 */ int32 num) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v0 2 */ MonsterAllegiances *allegiances;
//     /* a3 7 */ int32 i;
//     /* a0 4 */ uint32 check;
//     /* a2 6 */ uint32 *curr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_CheckAllegiance);

// /* 00180970 0000004c */ void MONSENSE_SetAllegianceMirFlag(/* a0 4 */ Instance *instance, /* s0 16 */ MonsterIR *mir, /* a2 6 */ uint32 whatAmI, /* a3 7 */ int32 start, /* t0 8 */ int32 num, /* s1 17 */ uint32 flag) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_SetAllegianceMirFlag);

// /* 001809c0 0000019c */ static MonsterIR* MONSENSE_FirstSense(/* s2 18 */ Instance *instance, /* s0 16 */ Instance *sensed) {
//     /* s1 17 */ MonsterIR *mir;
//     /* s3 19 */ MonsterVars *mv;
//     {
//         /* s4 20 */ int32 whatAmI;
//         /* s3 19 */ MonsterAllegiances *allegiances;
//         /* a0 4 */ int32 hs;
//         /* s0 16 */ int32 start;
//         /* v0 2 */ int32 num;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_FirstSense);

// /* 00180b60 000002fc */ void MONSENSE_SetupMIR(/* s2 18 */ Instance *instance, /* s1 17 */ evCollideInstanceStatsData *data, /* s3 19 */ uint32 detected) {
//     /* s0 16 */ MonsterIR *mir;
//     /* s4 20 */ MonsterVars *mv;
//     /* v0 2 */ Vector4f *rot;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
//     {
//         /* 0x0(sp) */ Vector4f delta;
//         /* v0 2 */ Matrixf *lookMatrix;
//         /* 0x10(sp) */ Matrixf invMatrix;
//         /* 0x50(sp) */ evCollideInstanceStatsData data;
//         {
//             {
//                 /* f2 40 */ float len;
//             }
//             {
//                 /* f2 40 */ float result;
//             }
//         }
//         {
//             /* v0 2 */ float *m0[4];
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
//             /* f1 39 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* v0 2 */ Vector4f *_v0;
//             /* a3 7 */ Vector4f *_v1;
//         }
//     }
//     {
//         /* f0 38 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_SetupMIR);

// /* 00180e60 00000270 */ int32 MONSENSE_RadarCheckLine(/* s4 20 */ Instance *instance, /* s3 19 */ Vector4f *pos, /* f24 62 */ float px, /* f25 63 */ float py, /* f23 61 */ float pr, /* f21 59 */ float mx, /* f22 60 */ float my, /* f17 55 */ float mr) {
//     /* 0x0(sp) */ Vector4f newPos;
//     /* 0x10(sp) */ Vector4f oldPos;
//     /* 0x20(sp) */ Vector4f startPos;
//     /* 0x30(sp) */ PCollideInfo pCollideInfo;
//     /* f20 58 */ float du;
//     /* f14 52 */ float dl;
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//         }
//     }
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_RadarCheckLine);

// /* 001810d0 000000a8 */ void MONSENSE_DoRadar(/* a0 4 */ Instance *instance, /* s1 17 */ MonsterRadar *mr, /* a2 6 */ Vector4f *pos) {
//     /* s0 16 */ int32 index;
//     /* v0 2 */ RadarInfo *info;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_DoRadar);

// /* 00181178 00000048 */ void MONSENSE_Radar(/* s0 16 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s1 17 */ MonsterRadar *mr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_Radar);

// /* 001811c0 00000144 */ float MONSENSE_GetClosestFreeDirection(/* a0 4 */ Instance *instance, /* f20 58 */ float angle, /* f21 59 */ float range) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s1 17 */ MonsterRadar *mr;
//     /* a0 4 */ int32 bit;
//     /* a1 5 */ int32 search;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_GetClosestFreeDirection);

// /* 00181308 000000f8 */ void MONSENSE_GetClosestFreeDirectionVector(/* a0 4 */ Instance *instance, /* f12 50 */ float angle, /* f20 58 */ float range, /* s2 18 */ int32 direction, /* s1 17 */ Vector4f *res) {
//     /* s0 16 */ MonsterVars *mv;
//     /* a2 6 */ int32 ibit;
//     /* a0 4 */ int32 bit;
//     /* a1 5 */ int32 search;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_GetClosestFreeDirectionVector);

// /* 00181400 00000038 */ int32 MONSENSE_GetBitInDirection(/* f12 50 */ float angle) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_GetBitInDirection);

// /* 00181438 00000010 */ float MONSENSE_GetDistanceInDirectionFromRadar(/* a0 4 */ MonsterRadar *mr, /* a1 5 */ int32 bit) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_GetDistanceInDirectionFromRadar);

// /* 00181448 00000034 */ float MONSENSE_GetDistanceInDirection(/* a0 4 */ Instance *instance, /* f12 50 */ float angle) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s0 16 */ MonsterRadar *mr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_GetDistanceInDirection);

// /* 00181480 00000228 */ void MONSENSE_AdjustRadarFromObjects(/* a0 4 */ Instance *instance, /* a1 5 */ Instance *physob) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s2 18 */ MonsterRadar *mr;
//     {
//         /* s0 16 */ ObjProp *prop;
//         {
//             {
//                 /* f2 40 */ float len;
//                 {
//                     /* f2 40 */ float x;
//                     {
//                         /* f21 59 */ float result;
//                     }
//                 }
//             }
//             {
//                 /* v1 3 */ int32 i;
//                 /* f23 61 */ float min;
//                 /* f24 62 */ float max;
//                 /* f21 59 */ float ang;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_AdjustRadarFromObjects);

// /* 001816a8 00000110 */ void MONSENSE_DoSenses(/* a0 4 */ Instance *instance) {
//     /* s3 19 */ MonsterVars *mv;
//     /* s0 16 */ MonsterIR *mir;
//     /* s2 18 */ MonsterIR *emir;
//     /* s1 17 */ Instance *other;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_DoSenses);

// /* 001817b8 000000d8 */ void MONSENSE_CheckEnemy(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* v0 2 */ MonsterIR *player;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_CheckEnemy);

// /* 00181890 000000a0 */ void MONSENSE_CheckAlly(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_CheckAlly);

// /* 00181930 00000064 */ void MONSENSE_CheckFood(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_CheckFood);

// /* 00181998 00000064 */ void MONSENSE_CheckGod(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monsense", MONSENSE_CheckGod);

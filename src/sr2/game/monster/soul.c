/* Original path: C:\sr2\game\monster\soul.c */
/* .text 0x0018B778, .data 0x002A5630 */
/* Code from other files was inlined here: math3d.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 2a5630 */ extern MonsterStateChoice SOUL_StateChoiceTable[0];
/* data 2a56a8 */ extern MonsterBehaviorChoice SOUL_BehaviorChoiceTable[0];
/* data 2a5750 */ extern MonsterFunctionTable SOUL_FunctionTable;
/* data 2a5788 */ extern MonsterStateChoice FREESOUL_StateChoiceTable[0];
/* data 2a57b0 */ extern MonsterBehaviorChoice FREESOUL_BehaviorChoiceTable[0];
/* data 2a57e0 */ extern MonsterFunctionTable FREESOUL_FunctionTable;

// /* 0018b778 000000b0 */ void SOUL_Fade(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* a1 5 */ uint32 time;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_Fade);

// /* 0018b828 00000094 */ void SOUL_NoFade(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_NoFade);

// /* 0018b8c0 00000150 */ void SOUL_FaceDirection(/* s1 17 */ Instance *instance, /* f20 58 */ float speed, /* f22 60 */ float dz, /* f21 59 */ float turnspeed) {
//     /* s2 18 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f Rot;
//     /* f12 50 */ float elevation;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_FaceDirection);

// /* 0018ba10 0000016c */ void SOUL_BobPhysics(/* s1 17 */ Instance *instance, /* f20 58 */ float time) {
//     /* s0 16 */ MonsterVars *mv;
//     /* f12 50 */ float a;
//     /* f23 61 */ float count;
//     /* f21 59 */ float z;
//     /* f20 58 */ float nz;
//     /* f12 50 */ float b;
//     /* f22 60 */ float count2;
//     /* f25 63 */ float amplitude;
//     /* f24 62 */ float speed;
//     /* f26 64 */ float amplitude2;
//     /* f21 59 */ float dz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_BobPhysics);

// /* 0018bb80 00000074 */ static void gccfix_OtherStuff(/* s0 16 */ Instance *instance, /* a1 5 */ PCollideInfo *pcollideInfo, /* s1 17 */ Vector4f *newPos) {
//     /* 0x0(sp) */ Vector4f delta;
//     {
//         /* s1 17 */ Vector4f *v1;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", gccfix_OtherStuff);

// /* 0018bbf8 000000c0 */ void SOUL_MovePastWall(/* a2 6 */ Instance *instance, /* a1 5 */ Vector4f *suckPos) {
//     /* 0x0(sp) */ PCollideInfo pcollideInfo;
//     /* 0x30(sp) */ Vector4f newPos;
//     /* 0x40(sp) */ Vector4f oldPos;
//     /* 0x50(sp) */ Vector4f delta;
//     /* v1 3 */ Matrixf *to;
//     /* f0 38 */ float tmp;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_MovePastWall);

// /* 0018bcb8 0000006c */ void SOUL_DistProportionalAccl2D(/* a0 4 */ Instance *instance, /* a1 5 */ Vector4f *dest, /* f12 50 */ float dist, /* f13 51 */ float maxAccl) {
//     /* 0x0(sp) */ Vector4f accl;
//     /* f13 51 */ float ac;
//     {
//         /* f0 38 */ float result;
//     }
//     {
//         /* f13 51 */ float scalar;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_DistProportionalAccl2D);

// /* 0018bd28 00000034 */ void SOUL_CheckSucker(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_CheckSucker);

// /* 0018bd60 00000110 */ void SOUL_Init(/* s3 19 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s0 16 */ MonsterAttributes *ma;
//     /* s1 17 */ int32 i;
//     /* s0 16 */ ClothNode *cn;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_Init);

// /* 0018be70 00000070 */ void SOUL_CleanUp(/* s2 18 */ Instance *instance) {
//     /* s0 16 */ MonsterAttributes *ma;
//     /* s1 17 */ int32 i;
//     /* s0 16 */ ClothNode *cn;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_CleanUp);

// /* 0018bee0 000000b0 */ uint32 SOUL_Query(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v0 2 */ MonsterAttributes *ma;
//     /* s0 16 */ uint32 ret;
//     {
//         /* v0 2 */ MonsterIR *mir;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_Query);

// /* 0018bf90 000000e0 */ int32 SOUL_MessageHandler(/* s1 17 */ Instance *instance, /* a1 5 */ int32 message, /* s2 18 */ int32 mdata) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* v1 3 */ MonsterIR *mir;
//         {
//             /* f0 38 */ float _x1;
//             /* f2 40 */ float _y1;
//             /* f1 39 */ float _z1;
//             /* a0 4 */ Vector4f *_v0;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_MessageHandler);

// /* 0018c070 00000190 */ int32 SOUL_BehaviorStack(/* s2 18 */ Instance *instance, /* a1 5 */ int32 *curr) {
//     /* 0x8(sp) */ BehaviorSkipIfNoEnemyData sinoed;
//     /* s0 16 */ int32 *skip;
//     /* s1 17 */ int32 *c;
//     /* s3 19 */ int32 store;
//     /* 0x0(sp) */ INICommand *initial;
//     /* 0x4(sp) */ _MonsterBehaviorSpec *spec;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_BehaviorStack);

// /* 0018c200 00000034 */ void FREESOUL_Init(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", FREESOUL_Init);

// /* 0018c238 00000030 */ int32 FREESOUL_BehaviorStack(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *curr) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", FREESOUL_BehaviorStack);

// /* 0018c268 00000014 */ int32 SOUL_ReturnToBodyBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_ReturnToBodyBehaviorShouldRun);

// /* 0018c280 00000034 */ int32 SOUL_ReturnToBodyBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_ReturnToBodyBehaviorEntry);

// /* 0018c2b8 00000094 */ int32 SOUL_SoulSuckBehaviorShouldRun(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
//     {
//         /* f0 38 */ float len;
//         {
//             /* f0 38 */ float x;
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_SoulSuckBehaviorShouldRun);

// /* 0018c350 0000004c */ int32 SOUL_SoulSuckBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_SoulSuckBehaviorEntry);

// /* 0018c3a0 00000030 */ int32 SOUL_FadeBehaviorShouldRun(/* v0 2 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_FadeBehaviorShouldRun);

// /* 0018c3d0 00000020 */ int32 SOUL_FadeBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_FadeBehaviorEntry);

// /* 0018c3f0 00000030 */ int32 SOUL_HoverBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_HoverBehaviorEntry);

// /* 0018c420 00000020 */ int32 SOUL_WanderBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_WanderBehaviorEntry);

// /* 0018c440 00000020 */ int32 FREESOUL_RiseBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", FREESOUL_RiseBehaviorEntry);

// /* 0018c460 000002c4 */ void SOUL_SoulSuckAccel(/* s1 17 */ Instance *instance, /* s0 16 */ Vector4f *along) {
//     /* v0 2 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f diff;
//     /* 0x10(sp) */ Vector4f perp;
//     /* 0x20(sp) */ Vector4f accl;
//     /* 0x30(sp) */ Vector4f out;
//     /* 0x40(sp) */ Vector4f ldrag;
//     /* 0x50(sp) */ Vector4f pdrag;
//     /* f20 58 */ float da;
//     /* f1 39 */ float c;
//     /* f23 61 */ float f;
//     /* f21 59 */ float p;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float z;
//         /* f2 40 */ float y;
//         /* f1 39 */ float x;
//         {
//             {
//                 /* f1 39 */ float x;
//                 /* f2 40 */ float y;
//                 /* f0 38 */ float z;
//                 {
//                     /* f1 39 */ float len;
//                 }
//             }
//             {
//                 /* f22 60 */ float result;
//             }
//         }
//     }
//     {
//         /* s0 16 */ Vector4f *r;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* s0 16 */ Vector4f *s;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* s0 16 */ Vector4f *vec1;
//     }
//     {
//         /* f21 59 */ float dp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* v0 2 */ Vector4f *vec2;
//         {
//             /* f2 40 */ float dp;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_SoulSuckAccel);

// /* 0018c728 0000008c */ float SOUL_SoulSuckToPos(/* s1 17 */ Instance *instance, /* s2 18 */ Vector4f *pos, /* a2 6 */ Vector4f *along) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_SoulSuckToPos);

// /* 0018c7b8 000000b8 */ float SOUL_SoulSuckDefault(/* s0 16 */ Instance *instance, /* a1 5 */ MonsterIR *sk) {
//     /* v0 2 */ Matrixf *mat;
//     /* 0x0(sp) */ Vector4f along;
//     /* v0 2 */ Matrixf *tm;
//     /* 0x10(sp) */ Vector4f to;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_SoulSuckDefault);

// /* 0018c870 00000018 */ void SOUL_SoulSuckEntry(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_SoulSuckEntry);

// /* 0018c888 00000058 */ void SOUL_SoulSuck(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_SoulSuck);

// /* 0018c8e0 0000018c */ int32 SOUL_SoulSuckHandler(/* s1 17 */ Instance *instance, /* a1 5 */ int32 message, /* s3 19 */ int32 mdata) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* v0 2 */ MonsterIR *mir;
//         {
//             /* f0 38 */ float _x1;
//             /* f2 40 */ float _y1;
//             /* f1 39 */ float _z1;
//             /* v1 3 */ Vector4f *_v0;
//         }
//     }
//     {
//         /* s2 18 */ MonsterIR *sk;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_SoulSuckHandler);

// /* 0018ca70 00000054 */ void SOUL_WanderEntry(/* s1 17 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s0 16 */ BehaviorWanderData *data;
//     /* 0x0(sp) */ Vector4f behaviorOrigin;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_WanderEntry);

// /* 0018cac8 00000144 */ void SOUL_Wander(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s4 20 */ BehaviorWanderData *data;
//     /* 0x0(sp) */ Vector4f behaviorOrigin;
//     /* f20 58 */ float heading;
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//             {
//                 /* f21 59 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_Wander);

// /* 0018cc10 00000014 */ void SOUL_FleeEntry(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_FleeEntry);

// /* 0018cc28 000002b0 */ void SOUL_Flee(/* s1 17 */ Instance *instance) {
//     /* s3 19 */ MonsterVars *mv;
//     /* s4 20 */ BehaviorSoulFleeData *data;
//     /* v0 2 */ MonsterIR *mir;
//     /* s2 18 */ Instance *ei;
//     /* f20 58 */ float heading;
//     /* f2 40 */ float height;
//     /* f21 59 */ float dist;
//     /* f4 42 */ float d1;
//     /* f20 58 */ float rad;
//     /* 0x0(sp) */ Vector4f behaviorOrigin;
//     /* 0x10(sp) */ Vector4f norm;
//     /* 0x20(sp) */ Vector4f perp;
//     /* 0x30(sp) */ Vector4f diff;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f1 39 */ float dp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr scalarv;
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f20 58 */ float scalar;
//         {
//             /* BADREGISTER -1 */ Vector4fr scalarv;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f1 39 */ float len;
//         {
//             /* f1 39 */ float x;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_Flee);

// /* 0018ced8 00000064 */ void SOUL_HoverEntry(/* v1 3 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_HoverEntry);

// /* 0018cf40 00000048 */ int32 SOUL_HoverHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_HoverHandler);

// /* 0018cf88 000000d0 */ void SOUL_ReturnToBodyEntry(/* s2 18 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v0 2 */ Instance *body;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* s1 17 */ Vector4f *_v0;
//         /* v1 3 */ Vector4f *_v1;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_ReturnToBodyEntry);

// /* 0018d058 000000ec */ void SOUL_ReturnToBody(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v0 2 */ Instance *body;
//     {
//         /* f0 38 */ float len;
//         {
//             /* f0 38 */ float x;
//             {
//                 /* f0 38 */ float result;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_ReturnToBody);

// /* 0018d148 0000001c */ void SOUL_ReturnToBodyExit(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", SOUL_ReturnToBodyExit);

// /* 0018d168 00000058 */ void FREESOUL_RiseEntry(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", FREESOUL_RiseEntry);

// /* 0018d1c0 00000050 */ void FREESOUL_Rise(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/soul", FREESOUL_Rise);

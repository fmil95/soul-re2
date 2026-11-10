/* Original path: C:\sr2\game\monster\monster.c */
/* .text 0x00181A00, .rodata 0x002B65F0 */
/* Code from other files was inlined here: collide.h, math3d.h */

#include "common.h"

// /* 00181a00 000001ac */ void MON_DefaultInit(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterAttributes *ma;
//     /* v0 2 */ HModel *hModel;
//     /* a0 4 */ HPrim *hprim;
//     /* a1 5 */ int32 i;
//     {
//         {
//             /* f1 39 */ float len;
//         }
//         {
//             /* f1 39 */ float result;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_DefaultInit);

// /* 00181bb0 000000a0 */ void MON_DefaultCleanUp(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_DefaultCleanUp);

// /* 00181c50 00000290 */ void MON_DefaultDamageEffect(/* s2 18 */ Instance *instance, /* s0 16 */ evFXHitData *data) {
//     /* s3 19 */ MonsterVars *mv;
//     /* a0 4 */ MonsterAttributes *ma;
//     /* s1 17 */ MonsterSubAttributes *msa;
//     /* 0x0(sp) */ SVector accel;
//     /* 0x10(sp) */ SVector fpHack[2];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_DefaultDamageEffect);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/monster/monster", D_002B65F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/monster/monster", D_002B65F8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/monster/monster", D_002B6600);

// /* 00181ee0 00000568 */ void MON_DefaultPerFrameDamageEffect(/* s3 19 */ Instance *instance) {
//     /* s4 20 */ MonsterVars *mv;
//     /* s0 16 */ MonsterAttributes *ma;
//     {
//         /* v1 3 */ Matrixf *mat;
//         /* 0x0(sp) */ Vector4f location;
//         /* 0x10(sp) */ Vector4f vel;
//         /* 0x20(sp) */ SVector accel;
//         /* 0x30(sp) */ SVector fpHack[2];
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//         {
//             /* a1 5 */ uint32 newSeed;
//         }
//         {
//             /* t2 10 */ uint32 newSeed;
//         }
//     }
//     {
//         /* a0 4 */ MonsterAttributes *ma;
//         /* s2 18 */ MonsterSubAttributes *msa;
//         /* s0 16 */ Matrixf *mat;
//         /* 0x0(sp) */ Vector4f location;
//         /* 0x10(sp) */ SVector accel;
//         /* 0x20(sp) */ SVector vel;
//         /* 0x40(sp) */ SVector fpHack;
//     }
//     {
//         /* v0 2 */ Object *flame;
//         {
//             /* s2 18 */ Model *model;
//             /* s1 17 */ int32 numBurnSegs;
//             /* s0 16 */ MonsterBurnSegments *curr;
//         }
//     }
//     {
//         /* a1 5 */ Matrixf *mat;
//         /* 0x0(sp) */ Vector4f location;
//         /* 0x10(sp) */ SVector vel;
//         /* 0x20(sp) */ SVector accel;
//         /* 0x30(sp) */ SVector fpHack;
//         /* s2 18 */ int32 n;
//         /* s4 20 */ int32 cnt;
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//         {
//             /* a0 4 */ uint32 newSeed;
//         }
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_DefaultPerFrameDamageEffect);

// /* 00182448 00000250 */ void MON_AutofaceDraw(/* s2 18 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s0 16 */ int32 diff;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AutofaceDraw);

// /* 00182698 000006c8 */ int32 MON_DefaultMessageHandler(/* s3 19 */ Instance *instance, /* a1 5 */ int32 message, /* s0 16 */ int32 mdata) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s4 20 */ MonsterAttributes *ma;
//     /* a0 4 */ MonsterSubAttributes *msa;
//     {
//         /* s1 17 */ MonsterIR *mir;
//         /* v1 3 */ MonsterIR *omir;
//     }
//     {
//         /* v1 3 */ int32 vuln;
//         /* s1 17 */ int32 damageType;
//     }
//     {
//         /* v0 2 */ MonsterFatality *fatality;
//         /* v1 3 */ int32 razFatality;
//         /* s1 17 */ int32 damageType;
//         /* 0x0(sp) */ Vector4f rotation;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_DefaultMessageHandler);

// /* 00182d60 0000001c */ void MON_NoLookatDefaultExit(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_NoLookatDefaultExit);

// /* 00182d80 00000050 */ int32 MON_RandomIdleAnimHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_RandomIdleAnimHandler);

// /* 00182dd0 00000030 */ int32 MON_AnimDoneToBehaviorResetHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AnimDoneToBehaviorResetHandler);

// /* 00182e00 00000048 */ void MON_StandingIdleEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_StandingIdleEntry);

// /* 00182e48 0000003c */ void MON_AmbushEntry(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AmbushEntry);

// /* 00182e88 00000138 */ void MON_Ambush(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s4 20 */ MonsterAttributes *ma;
//     /* s3 19 */ MonsterSubAttributes *msa;
//     /* s2 18 */ BehaviorAmbushData *data;
//     /* a1 5 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Ambush);

// /* 00182fc0 00000034 */ int32 MON_AmbushHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AmbushHandler);

// /* 00182ff8 000000a8 */ void MON_PupateEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_PupateEntry);

// /* 001830a0 00000174 */ void MON_Pupate(/* s0 16 */ Instance *instance) {
//     /* s4 20 */ MonsterVars *mv;
//     /* 0x4(sp) */ float dist;
//     /* s2 18 */ Instance *cocoon;
//     /* 0x0(sp) */ MonsterIR *mir;
//     {
//         /* f2 40 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* v0 2 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Pupate);

// /* 00183218 00000070 */ void MON_PupateBurstEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_PupateBurstEntry);

// /* 00183288 00000058 */ void MON_FalloverEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FalloverEntry);

// /* 001832e0 00000058 */ int32 MON_FalloverHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FalloverHandler);

// /* 00183338 0000009c */ void MON_DeathEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_DeathEntry);

// /* 001833d8 00000098 */ void MON_Death(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* v0 2 */ Instance *mainLimb;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Death);

// /* 00183470 00000050 */ void MON_FinalDeathEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FinalDeathEntry);

// /* 001834c0 00000078 */ void MON_FinalDeathCuttingPlane(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s2 18 */ MonsterAttributes *ma;
//     /* a0 4 */ int32 fade_amount;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FinalDeathCuttingPlane);

// /* 00183538 00000060 */ void MON_FinalDeathFadeOut(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v1 3 */ int32 fade_amount;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FinalDeathFadeOut);

// /* 00183598 0000009c */ void MON_WanderIdleEntry(/* s2 18 */ Instance *instance) {
//     /* s3 19 */ MonsterVars *mv;
//     /* s1 17 */ BehaviorWanderData *data;
//     /* s0 16 */ int32 time;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_WanderIdleEntry);

// /* 00183638 00000144 */ void MON_WanderIdle(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s2 18 */ BehaviorWanderData *data;
//     /* 0x0(sp) */ Vector4f behaviorOrigin;
//     /* f2 40 */ float d;
//     /* f12 50 */ float dx;
//     /* f13 51 */ float dy;
//     /* f1 39 */ float range;
//     {
//         /* f12 50 */ float x;
//         /* f13 51 */ float y;
//         {
//             /* f14 52 */ float len;
//             {
//                 /* f14 52 */ float x;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_WanderIdle);

// /* 00183780 00000050 */ void MON_WanderEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_WanderEntry);

// /* 001837d0 000000d4 */ void MON_Wander(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Wander);

// /* 001838a8 000000ac */ void MON_PatrolIdleEntry(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s2 18 */ BehaviorPatrolData *mtmData;
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* a1 5 */ Vector4f *_v0;
//         /* v1 3 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_PatrolIdleEntry);

// /* 00183958 00000090 */ void MON_PatrolIdle(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_PatrolIdle);

// /* 001839e8 00000028 */ void MON_PatrolIdleExit(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_PatrolIdleExit);

// /* 00183a10 00000074 */ void MON_StopPursuit(/* a2 6 */ Instance *instance, /* a1 5 */ int32 otherState) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a3 7 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_StopPursuit);

// /* 00183a88 0000004c */ void MON_TrackIdleEntry(/* v1 3 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_TrackIdleEntry);

// /* 00183ad8 00000134 */ void MON_TrackIdle(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* a1 5 */ Vector4f *_v1;
//     }
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_TrackIdle);

// /* 00183c10 00000028 */ void MON_TrackIdleExit(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_TrackIdleExit);

// /* 00183c38 0000007c */ void MON_TrackEntry(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_TrackEntry);

// /* 00183cb8 00000158 */ void MON_Track(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s2 18 */ BehaviorTrackData *trackData;
//     {
//         {
//             /* f1 39 */ float _x1;
//             /* f2 40 */ float _y1;
//             /* f0 38 */ float _z1;
//             /* v0 2 */ Vector4f *_v0;
//         }
//         {
//             /* f0 38 */ float len;
//             {
//                 /* f0 38 */ float x;
//                 {
//                     /* f0 38 */ float result;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Track);

// /* 00183e10 00000054 */ int32 MON_TrackHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_TrackHandler);

// /* 00183e68 00000034 */ void MON_TrackRotateEntry(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_TrackRotateEntry);

// /* 00183ea0 00000078 */ void MON_TrackRotate(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_TrackRotate);

// /* 00183f18 000000dc */ void MON_TrackGoodUnitIdle(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//         /* a1 5 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_TrackGoodUnitIdle);

// /* 00183ff8 000000c8 */ void MON_TrackGoodUnit(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_TrackGoodUnit);

// /* 001840c0 00000044 */ void MON_PursueRunEndEntry(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_PursueRunEndEntry);

// /* 00184108 00000074 */ void MON_PursueRunEnd(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_PursueRunEnd);

// /* 00184180 00000098 */ int32 MON_PursueRunEndHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_PursueRunEndHandler);

// /* 00184218 00000094 */ int32 MON_CombatCommon(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_CombatCommon);

// /* 001842b0 000000a8 */ int32 MON_CombatCommonAndTurn(/* s0 16 */ Instance *instance) {
//     /* a2 6 */ MonsterVars *mv;
//     /* a1 5 */ MonsterIR *mir;
//     /* f12 50 */ float speed;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_CombatCommonAndTurn);

// /* 00184358 00000054 */ void MON_CombatEntry(/* v1 3 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_CombatEntry);

// /* 001843b0 00000044 */ void MON_Combat(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Combat);

// /* 001843f8 00000028 */ void MON_CombatExit(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_CombatExit);

// /* 00184420 00000034 */ int32 MON_CombatHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_CombatHandler);

// /* 00184458 00000064 */ void MON_EvadeEntry(/* s0 16 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s1 17 */ MonsterEvadeAttributes *evade;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_EvadeEntry);

// /* 001844c0 00000030 */ void MON_Evade(/* a0 4 */ Instance *instance) {
//     /* a0 4 */ MonsterVars *mv;
//     /* v1 3 */ MonsterIR *mir;
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Evade);

// /* 001844f0 00000128 */ int32 MON_EvadeHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* s2 18 */ MonsterVars *mv;
//     /* 0x0(sp) */ void *res;
//     {
//         /* s1 17 */ MonsterEvadeAttributes *evade;
//     }
//     {
//         /* s1 17 */ MonsterBlockAttributes *block;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_EvadeHandler);

// /* 00184618 0000007c */ void MON_BlockEntry(/* s0 16 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s1 17 */ MonsterBlockAttributes *block;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_BlockEntry);

// /* 00184698 000001b0 */ void MON_Block(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* a1 5 */ MonsterIR *mir;
//     /* 0x0(sp) */ void *res;
//     /* s3 19 */ int32 time;
//     /* f12 50 */ float speed;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v1 3 */ Vector4f *_v0;
//     }
//     {
//         /* s0 16 */ MonsterEvadeAttributes *evade;
//     }
//     {
//         /* s0 16 */ MonsterBlockAttributes *block;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Block);

// /* 00184848 00000180 */ int32 MON_BlockHandler(/* s1 17 */ Instance *instance, /* a1 5 */ int32 message, /* s0 16 */ int32 mdata) {
//     /* s2 18 */ MonsterVars *mv;
//     /* v1 3 */ MonsterBlockAttributes *block;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_BlockHandler);

// /* 001849c8 00000058 */ void MON_EvadeCompleteEntry(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v0 2 */ MonsterEvadeAttributes *evade;
//     /* v1 3 */ MonsterBlockAttributes *block;
//     /* a1 5 */ int32 endAnim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_EvadeCompleteEntry);

// /* 00184a20 00000060 */ void MON_EvadeComplete(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
//     /* a1 5 */ MonsterIR *mir;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_EvadeComplete);

// /* 00184a80 00000054 */ int32 MON_EvadeCompleteHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_EvadeCompleteHandler);

// /* 00184ad8 00000040 */ void MON_RepositionEntry(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_RepositionEntry);

// /* 00184b18 00000094 */ void MON_Reposition(/* s0 16 */ Instance *instance) {
//     /* a2 6 */ MonsterVars *mv;
//     /* v1 3 */ MonsterIR *mir;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Reposition);

// /* 00184bb0 0000006c */ int32 MON_RepositionHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_RepositionHandler);

// /* 00184c20 00000234 */ void MON_AttackEntry(/* s3 19 */ Instance *instance) {
//     /* s6 22 */ MonsterVars *mv;
//     /* v1 3 */ MonsterAttackStream *attackStream;
//     /* s2 18 */ MonsterAttackAttributes *attack;
//     /* s0 16 */ MonsterSubAttributes *msa;
//     /* s1 17 */ int32 i;
//     /* s0 16 */ int32 j;
//     /* a2 6 */ int32 weapSeg;
//     /* a1 5 */ int32 seg;
//     /* s1 17 */ int8 *frame;
//     {
//         /* s0 16 */ Instance *weapon;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AttackEntry);

// /* 00184e58 00000220 */ void MON_Attack(/* s3 19 */ Instance *instance) {
//     /* s6 22 */ MonsterVars *mv;
//     /* s2 18 */ MonsterAttackAttributes *attack;
//     /* s1 17 */ int32 i;
//     /* s0 16 */ int32 j;
//     /* s0 16 */ int32 fn;
//     /* s1 17 */ int8 *frame;
//     /* s0 16 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Attack);

// /* 00185078 00000050 */ void MON_AttackExit(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AttackExit);

// /* 001850c8 0000058c */ int32 MON_AttackHandler(/* s4 20 */ Instance *instance, /* a1 5 */ int32 message, /* s1 17 */ int32 mdata) {
//     /* s3 19 */ MonsterVars *mv;
//     {
//         /* v0 2 */ MonsterAttackAttributes *attack;
//     }
//     {
//         /* v0 2 */ MonsterAttackAttributes *attack;
//     }
//     {
//         /* s0 16 */ MonsterAttackAttributes *attack;
//     }
//     {
//         /* s0 16 */ MonsterAttackAttributes *attack;
//         /* s2 18 */ Instance *vic;
//         /* s0 16 */ int32 seg;
//         {
//             /* v0 2 */ Matrixf *mat;
//         }
//         {
//             /* 0x30(sp) */ Matrixf mat;
//         }
//     }
//     {
//         /* s5 21 */ MonsterSubAttributes *msa;
//         /* s0 16 */ MonsterAttackAttributes *attack;
//         /* s2 18 */ Instance *vic;
//         {
//             /* s6 22 */ int32 type;
//             /* s3 19 */ int32 anim;
//             /* f20 58 */ float angle;
//         }
//     }
//     {
//         /* s0 16 */ MonsterAttackStream *attackStream;
//         /* s2 18 */ MonsterAttackAttributes *attack;
//         /* v0 2 */ MonsterIR *mir;
//         /* s1 17 */ int32 i;
//         /* s0 16 */ int32 j;
//         /* 0x70(sp) */ int32 flags;
//         /* s1 17 */ int8 *frame;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AttackHandler);

// /* 00185658 00000048 */ void MON_AttackCompleteEntry(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v1 3 */ MonsterAttackStream *attackStream;
//     /* a3 7 */ MonsterAttackAttributes *attack;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AttackCompleteEntry);

// /* 001856a0 00000054 */ int32 MON_AttackCompleteHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AttackCompleteHandler);

// /* 001856f8 00000048 */ void MON_AttackCompleteBackEntry(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v1 3 */ MonsterAttackStream *attackStream;
//     /* a3 7 */ MonsterAttackAttributes *attack;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AttackCompleteBackEntry);

// /* 00185740 00000070 */ void MON_DrainEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_DrainEntry);

// /* 001857b0 00000164 */ void MON_Drain(/* s2 18 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s0 16 */ MonsterIR *mir;
//     /* s0 16 */ Instance *ei;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//         /* s0 16 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Drain);

// /* 00185918 00000028 */ void MON_TauntEntry(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
//     /* v0 2 */ MonsterTaunt *taunt;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_TauntEntry);

// /* 00185940 00000090 */ void MON_Taunt(/* s0 16 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a1 5 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Taunt);

// /* 001859d0 0000004c */ void MON_ProjectileIdleEntry(/* v1 3 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ProjectileIdleEntry);

// /* 00185a20 00000124 */ void MON_ProjectileIdle(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* v1 3 */ BehaviorProjectileData *projectileData;
//     /* s0 16 */ MonsterIR *mir;
//     /* s0 16 */ MonsterMissile *missileDef;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ProjectileIdle);

// /* 00185b48 00000028 */ void MON_ProjectileIdleExit(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ProjectileIdleExit);

// /* 00185b70 00000040 */ void MON_ProjectileEntry(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* a1 5 */ MonsterMissile *missileDef;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ProjectileEntry);

// /* 00185bb0 00000110 */ void MON_Projectile(/* s0 16 */ Instance *instance) {
//     /* s3 19 */ MonsterVars *mv;
//     /* s2 18 */ MonsterIR *mir;
//     /* a0 4 */ BehaviorProjectileData *projectileData;
//     /* s1 17 */ MonsterMissile *missileDef;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Projectile);

// /* 00185cc0 0000006c */ int32 MON_ProjectileHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* a2 6 */ MonsterVars *mv;
//     {
//         /* a1 5 */ MonsterMissile *missileDef;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ProjectileHandler);

// /* 00185d30 0000004c */ void MON_SpawnIdleEntry(/* v1 3 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_SpawnIdleEntry);

// /* 00185d80 00000124 */ void MON_SpawnIdle(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* v1 3 */ MonsterIR *mir;
//     /* a1 5 */ BehaviorSpawnData *spawnData;
//     /* s0 16 */ MonsterSpawn *spawnDef;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_SpawnIdle);

// /* 00185ea8 00000028 */ void MON_SpawnIdleExit(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_SpawnIdleExit);

// /* 00185ed0 00000038 */ void MON_SpawnEntry(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v0 2 */ MonsterSpawn *spawnDef;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_SpawnEntry);

// /* 00185f08 00000100 */ void MON_Spawn(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* a0 4 */ BehaviorSpawnData *spawnData;
//     /* s2 18 */ MonsterIR *mir;
//     /* a1 5 */ MonsterSpawn *spawnDef;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Spawn);

// /* 00186008 0000001c */ void MON_SpawnExit(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_SpawnExit);

// /* 00186028 00000030 */ int32 MON_SpawnHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_SpawnHandler);

// /* 00186058 00000018 */ void MON_SpawnCompleteEntry(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_SpawnCompleteEntry);

// /* 00186070 00000044 */ void MON_SpawnedEntry(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_SpawnedEntry);

// /* 001860b8 00000080 */ void MON_FleeEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FleeEntry);

// /* 00186138 000001a0 */ void MON_Flee(/* s0 16 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* a0 4 */ MonsterIR *mir;
//     /* s3 19 */ BehaviorFleeData *data;
//     /* f20 58 */ float heading;
//     /* f20 58 */ float dh;
//     /* 0x0(sp) */ Vector4f behaviorOrigin;
//     /* 0x10(sp) */ Vector4f delta;
//     /* f21 59 */ float rad;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float x;
//         /* f1 39 */ float y;
//         {
//             /* f0 38 */ float len;
//             {
//                 /* f0 38 */ float x;
//                 {
//                     /* f13 51 */ float result;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Flee);

// /* 001862d8 00000050 */ int32 MON_FleeHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FleeHandler);

// /* 00186328 000000b8 */ void MON_ReanimateEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ReanimateEntry);

// /* 001863e0 00000058 */ void MON_ReanimateExit(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ReanimateExit);

// /* 00186438 000000d0 */ void MON_GrabbedEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s2 18 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_GrabbedEntry);

// /* 00186508 00000088 */ void MON_Grabbed(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Grabbed);

// /* 00186590 00000024 */ void MON_GrabbedHandlerExit(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_GrabbedHandlerExit);

// /* 001865b8 00000108 */ int32 MON_GrabbedHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* s1 17 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_GrabbedHandler);

// /* 001866c0 00000060 */ void MON_BreakholdEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_BreakholdEntry);

// /* 00186720 00000138 */ int32 MON_BreakholdHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* s1 17 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_BreakholdHandler);

// /* 00186858 000000d4 */ void MON_PhysJitterMove(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     {
//         /* v0 2 */ int32 x;
//         /* v0 2 */ int32 y;
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_PhysJitterMove);

// /* 00186930 00000018 */ void MON_PhysExit(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_PhysExit);

// /* 00186948 00000024 */ void MON_FixUpLandVelocity(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FixUpLandVelocity);

// /* 00186970 00000070 */ void MON_ThrownEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ThrownEntry);

// /* 001869e0 000000bc */ void MON_Thrown(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* f0 38 */ float xVel;
//     /* f4 42 */ float yVel;
//     /* f5 43 */ float zVel;
//     /* f2 40 */ float dt;
//     /* 0x0(sp) */ Vector4f grabPos;
//     /* 0x10(sp) */ Vector4f offset;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Thrown);

// /* 00186aa0 000001d0 */ int32 MON_ThrownHandler(/* s1 17 */ Instance *instance, /* a1 5 */ int32 message, /* s2 18 */ int32 mdata) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* 0x0(sp) */ evFXHitData fxdata;
//         {
//             /* s0 16 */ MonsterSubAttributes *msa;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ThrownHandler);

// /* 00186c70 00000044 */ void MON_RollOnGroundEntry(/* v1 3 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_RollOnGroundEntry);

// /* 00186cb8 00000088 */ int32 MON_RollOnGroundHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_RollOnGroundHandler);

// /* 00186d40 00000038 */ void MON_WallImpactEntry(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_WallImpactEntry);

// /* 00186d78 00000030 */ int32 MON_WallImpactHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_WallImpactHandler);

// /* 00186da8 00000164 */ void MON_SlideEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* a1 5 */ TFace *tface;
//     /* a0 4 */ Level *level;
//     /* 0x0(sp) */ Vector4f norm;
//     /* 0x10(sp) */ Vector4f vel;
//     {
//         /* v0 2 */ int16 *normalArray;
//         {
//             /* v0 2 */ int16 *normalArray;
//             {
//                 /* v1 3 */ void *address;
//                 {
//                     /* v0 2 */ Vector4fr vec;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_SlideEntry);

// /* 00186f10 00000040 */ int32 MON_SlideHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_SlideHandler);

// /* 00186f50 00000098 */ void MON_FallEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FallEntry);

// /* 00186fe8 0000004c */ void MON_Fall(/* s0 16 */ Instance *instance) {
//     /* v0 2 */ MonsterFallDamage *mfd;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Fall);

// /* 00187038 00000040 */ int32 MON_FallHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FallHandler);

// /* 00187078 00000058 */ void MON_LandOnGroundEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_LandOnGroundEntry);

// /* 001870d0 00000160 */ void MON_HitEntry(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* f20 58 */ float d;
//     /* f21 59 */ float a;
//     /* f20 58 */ float v;
//     /* 0x0(sp) */ Vector4f rotation;
//     /* v0 2 */ int32 anim;
//     /* s2 18 */ int8 *animList;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_HitEntry);

// /* 00187230 000000d0 */ void MON_HitCommon(/* s0 16 */ Instance *instance, /* s3 19 */ int8 *cancelFrameList) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s2 18 */ MonsterIR *mir;
//     /* s1 17 */ int32 tf;
//     /* v1 3 */ int32 frame;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_HitCommon);

// /* 00187300 00000028 */ void MON_Hit(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
//     /* a1 5 */ MonsterCombatAttributes *combat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Hit);

// /* 00187328 00000058 */ int32 MON_HitHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_HitHandler);

// /* 00187380 00000168 */ void MON_BlockedHitEntry(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s2 18 */ MonsterBlockAttributes *block;
//     /* f20 58 */ float d;
//     /* f21 59 */ float a;
//     /* f20 58 */ float v;
//     /* 0x0(sp) */ Vector4f rotation;
//     /* a1 5 */ int32 anim;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f1 39 */ float _z1;
//         /* v1 3 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_BlockedHitEntry);

// /* 001874e8 00000024 */ void MON_BlockedHit(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a1 5 */ MonsterBlockAttributes *block;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_BlockedHit);

// /* 00187510 00000164 */ int32 MON_BlockedHitHandler(/* s1 17 */ Instance *instance, /* a1 5 */ int32 message, /* s0 16 */ int32 mdata) {
//     /* s2 18 */ MonsterVars *mv;
//     /* v0 2 */ MonsterBlockAttributes *block;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_BlockedHitHandler);

// /* 00187678 00000144 */ int32 MON_BlockContinueHandler(/* s1 17 */ Instance *instance, /* a1 5 */ int32 message, /* s0 16 */ int32 mdata) {
//     /* s2 18 */ MonsterVars *mv;
//     /* v0 2 */ MonsterBlockAttributes *block;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_BlockContinueHandler);

// /* 001877c0 00000084 */ void MON_DismemberEntry(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* a0 4 */ MonsterSubAttributes *msa;
//     /* a1 5 */ int32 anim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_DismemberEntry);

// /* 00187848 00000030 */ int32 MON_AnimDoneToFalloverHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AnimDoneToFalloverHandler);

// /* 00187878 00000030 */ int32 MON_AnimDoneToDeathHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AnimDoneToDeathHandler);

// /* 001878a8 00000098 */ int32 MON_FatalWaitAnim(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FatalWaitAnim);

// /* 00187940 00000068 */ int32 MON_FatalWaitDone(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FatalWaitDone);

// /* 001879a8 00000084 */ void MON_FatalBeginAnim(/* s1 17 */ Instance *instance, /* a1 5 */ int32 defaultAnim) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v0 2 */ MonsterFatality *fatality;
//     /* s2 18 */ int32 anim;
//     /* s3 19 */ int32 mode;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FatalBeginAnim);

// /* 00187a30 000000a0 */ int32 MON_FatalFrameHit(/* s0 16 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v1 3 */ MonsterFatality *fatality;
//     /* s2 18 */ int32 thisFrame;
//     /* s1 17 */ int32 effectFrame;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FatalFrameHit);

// /* 00187ad0 00000058 */ void MON_FatalContinueEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v0 2 */ MonsterFatality *fatality;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FatalContinueEntry);

// /* 00187b28 00000038 */ void MON_ShatterHitEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ShatterHitEntry);

// /* 00187b60 0000004c */ void MON_ShatterHit(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ShatterHit);

// /* 00187bb0 00000070 */ int32 MON_ShatterHitHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
//     {
//         /* v0 2 */ MonsterFatality *fatality;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ShatterHitHandler);

// /* 00187c20 0000001c */ void MON_ShatterDeathEntry(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ShatterDeathEntry);

// /* 00187c40 00000038 */ void MON_ImpaleHitEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ImpaleHitEntry);

// /* 00187c78 0000009c */ void MON_ImpaleHit(/* s0 16 */ Instance *instance) {
//     /* 0x0(sp) */ Vector4f vec;
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//         /* v0 2 */ Vector4f *_v1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ImpaleHit);

// /* 00187d18 000000d4 */ int32 MON_ImpaleHitHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* s1 17 */ MonsterVars *mv;
//     {
//         /* v0 2 */ MonsterFatality *fatality;
//         /* 0x0(sp) */ Vector4f vec;
//         {
//             /* f1 39 */ float _x1;
//             /* f0 38 */ float _y1;
//             /* f2 40 */ float _z1;
//             /* v0 2 */ Vector4f *_v1;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ImpaleHitHandler);

// /* 00187df0 00000070 */ void MON_ImpaleDeathEntry(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v0 2 */ MonsterFatality *fatality;
//     /* s2 18 */ int32 anim;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ImpaleDeathEntry);

// /* 00187e60 00000038 */ void MON_ImmolateHitEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ImmolateHitEntry);

// /* 00187e98 00000058 */ void MON_ImmolateHit(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ImmolateHit);

// /* 00187ef0 00000094 */ int32 MON_ImmolateHitHandler(/* s1 17 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
//     {
//         /* s0 16 */ MonsterFatality *fatality;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ImmolateHitHandler);

// /* 00187f88 00000038 */ void MON_DecapitateHitEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_DecapitateHitEntry);

// /* 00187fc0 00000058 */ void MON_DecapitateHit(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_DecapitateHit);

// /* 00188018 00000094 */ int32 MON_DecapitateHitHandler(/* s1 17 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
//     {
//         /* s0 16 */ MonsterFatality *fatality;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_DecapitateHitHandler);

// /* 001880b0 00000038 */ void MON_ClawHitEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ClawHitEntry);

// /* 001880e8 00000058 */ void MON_ClawHit(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ClawHit);

// /* 00188140 00000094 */ int32 MON_ClawHitHandler(/* s1 17 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
//     {
//         /* s0 16 */ MonsterFatality *fatality;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ClawHitHandler);

// /* 001881d8 00000038 */ void MON_BloodReaverHitEntry(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_BloodReaverHitEntry);

// /* 00188210 0000004c */ void MON_BloodReaverHit(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_BloodReaverHit);

// /* 00188260 0000006c */ int32 MON_BloodReaverHitHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_BloodReaverHitHandler);

// /* 001882d0 000001a0 */ void MON_TerrainImpaleDeathEntry(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s3 19 */ MonsterAttributes *ma;
//     /* s0 16 */ MonsterSubAttributes *msa;
//     /* v0 2 */ Intro *impaler;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_TerrainImpaleDeathEntry);

// /* 00188470 00000064 */ void MON_TerrainImpaleDeath(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_TerrainImpaleDeath);

// /* 001884d8 00000108 */ void MON_MissileImpaleDeathEntry(/* s1 17 */ Instance *instance) {
//     /* s3 19 */ MonsterVars *mv;
//     /* s2 18 */ MonsterAttributes *ma;
//     /* s0 16 */ MonsterSubAttributes *msa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_MissileImpaleDeathEntry);

// /* 001885e0 00000050 */ void MON_BurnEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_BurnEntry);

// /* 00188630 00000048 */ void MON_Burn(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Burn);

// /* 00188678 00000058 */ void MON_FallDeathEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_FallDeathEntry);

// /* 001886d0 00000064 */ void MON_WallHitDeathEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_WallHitDeathEntry);

// /* 00188738 00000030 */ int32 MON_WallHitDeathHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_WallHitDeathHandler);

// /* 00188768 00000064 */ void MON_ToStunnedEntry(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ToStunnedEntry);

// /* 001887d0 00000034 */ void MON_ToStunnedExit(/* a0 4 */ Instance *instance) {
//     /* a2 6 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ToStunnedExit);

// /* 00188808 00000030 */ int32 MON_ToStunnedHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ToStunnedHandler);

// /* 00188838 000000ac */ void MON_StunnedEntry(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v1 3 */ MonsterAttributes *ma;
//     /* v1 3 */ MonsterSubAttributes *msa;
//     /* s2 18 */ MonsterCombatAttributes *combat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_StunnedEntry);

// /* 001888e8 00000050 */ void MON_Stunned(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_Stunned);

// /* 00188938 00000030 */ void MON_StunnedExit(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_StunnedExit);

// /* 00188968 00000038 */ void MON_StunRecoveryEntry(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_StunRecoveryEntry);

// /* 001889a0 0000001c */ void MON_PuppetEntry(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_PuppetEntry);

// /* 001889c0 00000080 */ void MON_MoveToPos(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_MoveToPos);

// /* 00188a40 00000064 */ void MON_ParryEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ParryEntry);

// /* 00188aa8 00000034 */ void MON_ParryWaitEntry(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ParryWaitEntry);

// /* 00188ae0 00000070 */ void MON_ParryWait(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_ParryWait);

// /* 00188b50 000000ac */ void MON_NoticeDefault(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s0 16 */ MonsterIR *mir;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_NoticeDefault);

// /* 00188c00 00000030 */ int32 MON_NoticeDefaultHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_NoticeDefaultHandler);

// /* 00188c30 00000068 */ void MON_NoticeEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_NoticeEntry);

// /* 00188c98 000000d4 */ void MON_AlarmEntry(/* s0 16 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* a1 5 */ MonsterIR *mir;
//     /* s1 17 */ uint32 sendMask;
//     /* v1 3 */ uint32 *curr;
//     /* a0 4 */ int32 i;
//     /* v0 2 */ int32 start;
//     {
//         /* v1 3 */ MonsterAllegiances *allegiances;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_AlarmEntry);

// /* 00188d70 00000070 */ void MON_SurprisedEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_SurprisedEntry);

// /* 00188de0 00000070 */ void MON_LookAroundIdleEntry(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s0 16 */ int32 delta;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_LookAroundIdleEntry);

// /* 00188e50 00000048 */ void MON_LookAroundIdle(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_LookAroundIdle);

// /* 00188e98 00000148 */ void MON_LookAroundEntry(/* t0 8 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* a0 4 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v0 2 */ uint32 newSeed;
//     }
//     {
//         /* v0 2 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_LookAroundEntry);

// /* 00188fe0 0000009c */ void MON_LookAround(/* s0 16 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* f20 58 */ float angle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_LookAround);

// /* 00189080 0000004c */ void MON_OtherPlaneIdleEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_OtherPlaneIdleEntry);

// /* 001890d0 00000048 */ void MON_OtherPlaneIdle(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_OtherPlaneIdle);

// /* 00189118 00000030 */ void MON_OtherPlaneIdleExit(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_OtherPlaneIdleExit);

// /* 00189148 00000054 */ void MON_OtherPlaneEntry(/* v1 3 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_OtherPlaneEntry);

// /* 001891a0 0000003c */ void MON_OtherPlane(/* a1 5 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monster", MON_OtherPlane);

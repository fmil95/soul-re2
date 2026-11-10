/* Original path: C:\sr2\game\monster\sentryi.c */
/* .text 0x00190830, .data 0x002A5998 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, math3d.h */

#include "monster/sentryi.h"

// /* 00190830 000000ac */ uint32 SENTRYI_AimCallback(/* a0 4 */ G2AnimController *controller, /* a1 5 */ G2AnimSegValue *segValue, /* s0 16 */ float *parentMatrix[4], /* s1 17 */ float *segMatrix[4], /* t0 8 */ void *voiddata) {
//     /* a2 6 */ MonsterVars *mv;
//     /* s2 18 */ MonsterIR *mir;
//     {
//         /* s1 17 */ float *m0[4];
//         /* s0 16 */ float *m1[4];
//         {
//             /* a0 4 */ Vector4fr _m3;
//             /* v1 3 */ Vector4fr _m2;
//             /* v0 2 */ Vector4fr _m1;
//             /* a1 5 */ Vector4fr _m0;
//         }
//     }
//     {
//         /* v0 2 */ Matrixf *mat;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_AimCallback);

// /* 001908e0 00000054 */ VMObject* SENTRYI_FindVMO(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     {
//         /* v0 2 */ StreamUnit *streamUnit;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_FindVMO);

// /* 00190938 00000100 */ void SENTRYI_StartFX(/* s2 18 */ Instance *instance) {
//     /* s4 20 */ MonsterVars *mv;
//     /* s0 16 */ MonsterSubAttributes *msa;
//     /* v1 3 */ VMObject *vmObject;
//     /* s3 19 */ Object *object;
//     /* s0 16 */ int32 i;
//     /* v0 2 */ int32 start;
//     /* s1 17 */ int32 end;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_StartFX);

// /* 00190a38 00000064 */ void SENTRYI_StopFX(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* v1 3 */ VMObject *vmObject;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_StopFX);

// /* 00190aa0 000000ac */ void SENTRYI_EndFX(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* a2 6 */ VMObject *vmObject;
//     {
//         /* a0 4 */ VMOffsetTable *vmOffsetTab;
//         /* v1 3 */ int32 numVMOffsets;
//         /* v0 2 */ int32 time;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_EndFX);

// /* 00190b50 00000110 */ void SENTRYI_Init(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ MonsterVars *mv;
//     /* s0 16 */ MonsterAttributes *ma;
//     /* v0 2 */ HModel *hModel;
//     /* v1 3 */ HPrim *hprim;
//     /* a0 4 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_Init);

// /* 00190c60 00000060 */ void SENTRYI_CleanUp(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_CleanUp);

// /* 00190cc0 0000006c */ int32 SENTRYI_MessageHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* a3 7 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_MessageHandler);

// /* 00190d30 00000088 */ void SENTRYI_SetPieceHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 mdata) {
//     /* a2 6 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_SetPieceHandler);

// /* 00190db8 00000058 */ uint32 SENTRYI_Query(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* v1 3 */ MonsterVars *mv;
//     /* a2 6 */ uint32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_Query);

// /* 00190e10 00000168 */ int32 SENTRYI_BehaviorStack(/* s1 17 */ Instance *instance, /* a1 5 */ int32 *curr) {
//     /* 0x0(sp) */ BehaviorSkipIfNoEnemyData sinoed;
//     /* s2 18 */ int32 *skip;
//     /* s3 19 */ int32 *c;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_BehaviorStack);

// /* 00190f78 00000008 */ void SENTRYI_DamageEffect(/* a0 4 */ Instance *instance, /* a1 5 */ evFXHitData *data) {}
void SENTRYI_DamageEffect(Instance *instance, evFXHitData *data) {
}

// /* 00190f80 00000008 */ void SENTRYI_PerFrameDamageEffect(/* a0 4 */ Instance *instance) {}
void SENTRYI_PerFrameDamageEffect(Instance *instance) {
}

// /* 00190f88 00000070 */ int32 SENTRYI_DoNothingInSpectralBehaviorShouldRun(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_DoNothingInSpectralBehaviorShouldRun);

// /* 00190ff8 00000020 */ int32 SENTRYI_DoNothingInSpectralBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_DoNothingInSpectralBehaviorEntry);

// /* 00191018 00000050 */ int32 SENTRYI_BlindedBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_BlindedBehaviorShouldRun);

// /* 00191068 00000050 */ int32 SENTRYI_BlindedBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_BlindedBehaviorEntry);

// /* 001910b8 00000040 */ int32 SENTRYI_BlindedBehaviorShouldContinue(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s1 17 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_BlindedBehaviorShouldContinue);

// /* 001910f8 0000001c */ void SENTRYI_BlindedBehaviorExit(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a1 5 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_BlindedBehaviorExit);

// /* 00191118 000000c4 */ int32 SENTRYI_InFront(/* s0 16 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
//     /* f20 58 */ float diff;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_InFront);

// /* 001911e0 00000070 */ int32 SENTRYI_InRange(/* a0 4 */ Instance *instance, /* a1 5 */ Instance *target, /* f12 50 */ float range, /* a2 6 */ int32 allDirections) {
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_InRange);

// /* 00191250 00000050 */ int32 SENTRYI_InRangeTopBottom(/* a0 4 */ Instance *instance, /* a1 5 */ Instance *target, /* f12 50 */ float range, /* f13 51 */ float top, /* f14 52 */ float bottom, /* a2 6 */ int32 allDirections) {
//     /* f1 39 */ float deltaZ;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_InRangeTopBottom);

// /* 001912a0 00000014 */ int32 SENTRYI_OpenBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_OpenBehaviorShouldRun);

// /* 001912b8 00000020 */ int32 SENTRYI_OpenBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_OpenBehaviorEntry);

// /* 001912d8 0000005c */ int32 SENTRYI_TrackBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_TrackBehaviorShouldRun);

// /* 00191338 00000020 */ int32 SENTRYI_TrackBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_TrackBehaviorEntry);

// /* 00191358 000000bc */ int32 SENTRYI_WarnBehaviorShouldRun(/* s1 17 */ Instance *instance, /* v1 3 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_WarnBehaviorShouldRun);

// /* 00191418 00000090 */ MonsterMissile* SENTRY_ChooseMissile(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* a2 6 */ MonsterIR *mir;
//     /* s0 16 */ MonsterCombatAttributes *combat;
//     /* v0 2 */ MonsterMissile *missile;
//     /* s1 17 */ int32 start;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRY_ChooseMissile);

// /* 001914a8 000000d4 */ int32 SENTRYI_AttackBehaviorShouldRun(/* s2 18 */ Instance *instance, /* s1 17 */ int32 *params) {
//     /* s3 19 */ MonsterVars *mv;
//     /* s0 16 */ MonsterIR *mir;
//     /* a0 4 */ Instance *hit;
//     /* v0 2 */ MonsterMissile *missile;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_AttackBehaviorShouldRun);

// /* 00191580 00000038 */ int32 SENTRYI_AttackBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* a3 7 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_AttackBehaviorEntry);

// /* 001915b8 000000b8 */ int32 SENTRYI_AttackBehaviorShouldContinue(/* s3 19 */ Instance *instance, /* s1 17 */ int32 *params) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s2 18 */ Instance *target;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_AttackBehaviorShouldContinue);

// /* 00191670 00000020 */ int32 SENTRYI_DormantBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_DormantBehaviorEntry);

// /* 00191690 00000020 */ int32 SENTRYI_PuppetBehaviorEntry(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_PuppetBehaviorEntry);

// /* 001916b0 00000014 */ int32 SENTRYI_InactiveNoSoundBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_InactiveNoSoundBehaviorShouldRun);

// /* 001916c8 00000040 */ int32 SENTRYI_InactiveNoSoundBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_InactiveNoSoundBehaviorEntry);

// /* 00191708 00000014 */ int32 SENTRYI_InactiveBehaviorShouldRun(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_InactiveBehaviorShouldRun);

// /* 00191720 00000040 */ int32 SENTRYI_InactiveBehaviorEntry(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_InactiveBehaviorEntry);

// /* 00191760 0000008c */ int32 SENTRYI_SetTriggeredBehaviorShouldRun(/* s0 16 */ Instance *instance, /* a1 5 */ int32 *params) {
//     /* s2 18 */ BehaviorSentryiSetTriggeredData *data;
//     /* s1 17 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_SetTriggeredBehaviorShouldRun);

// /* 001917f0 00000238 */ void SENTRYI_MoveEye(/* s2 18 */ Instance *instance, /* f20 58 */ float elevation, /* f21 59 */ float arc, /* f22 60 */ float xspeed, /* f23 61 */ float zspeed) {
//     /* s1 17 */ MonsterVars *mv;
//     /* 0x0(sp) */ float x;
//     /* 0x4(sp) */ float z;
//     /* f20 58 */ float dx;
//     /* f21 59 */ float dz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_MoveEye);

// /* 00191a28 0000001c */ void SENTRYI_MoveEyeExit(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_MoveEyeExit);

// /* 00191a48 00000008 */ void SENTRYI_EnableAim(/* a0 4 */ Instance *instance) {}
void SENTRYI_EnableAim(Instance *instance) {
}

// /* 00191a50 00000008 */ void SENTRYI_DisableAim(/* a0 4 */ Instance *instance) {}
void SENTRYI_DisableAim(Instance *instance) {
}

// /* 00191a58 00000030 */ void SENTRYI_CenterEye(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_CenterEye);

// /* 00191a88 00000040 */ void SENTRYI_CloseEntry(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ MonsterVars *mv;
//     /* t0 8 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_CloseEntry);

// /* 00191ac8 0000004c */ int32 SENTRYI_CloseHander(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
//     /* a3 7 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_CloseHander);

// /* 00191b18 00000078 */ void SENTRYI_CloseNoSoundEntry(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s2 18 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_CloseNoSoundEntry);

// /* 00191b90 00000028 */ void SENTRYI_OpenEntry(/* a0 4 */ Instance *instance) {
//     /* v0 2 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_OpenEntry);

// /* 00191bb8 0000007c */ int32 SENTRYI_OpenHander(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
//     /* s1 17 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_OpenHander);

// /* 00191c38 000001ec */ int32 SENTRYI_SetAngles(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
//     /* v0 2 */ MonsterIR *mir;
//     /* f22 60 */ float elevation;
//     /* f20 58 */ float arc;
//     /* f21 59 */ float x;
//     /* f20 58 */ float y;
//     /* s2 18 */ int32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_SetAngles);

// /* 00191e28 0000001c */ void SENTRYI_Track(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_Track);

// /* 00191e48 00000048 */ void SENTRYI_AttackEntry(/* s0 16 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s1 17 */ MonsterMissile *missileDef;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_AttackEntry);

// /* 00191e90 00000100 */ void SENTRYI_Attack(/* s1 17 */ Instance *instance) {
//     /* v0 2 */ MonsterVars *mv;
//     /* s2 18 */ MonsterIR *mir;
//     /* s0 16 */ MonsterMissile *missileDef;
//     /* s0 16 */ Instance *hit;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_Attack);

// /* 00191f90 00000050 */ void SENTRYI_AttackExit(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRYI_AttackExit);

// /* 00191fe0 00000034 */ int32 SENTRY_AttackHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sentryi", SENTRY_AttackHandler);

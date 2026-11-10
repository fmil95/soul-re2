/* Original path: C:\sr2\game\monster\monapi.c */
/* .text 0x00172110, .data 0x002A4B50, .rodata 0x002B5E40 */
/* Code from other files was inlined here: math3d.h */

#include "common.h"

// /* 00172110 000001f4 */ void MonsterProcess(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s1 17 */ MonsterStateFuncs *stateFuncs;
//     /* s2 18 */ MonsterVars *mv;
//     /* v0 2 */ MonsterAttributes *ma;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MonsterProcess);

// /* 00172308 00000298 */ void MonsterInit(/* s1 17 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s2 18 */ MonsterAttributes *attributes;
//     /* s0 16 */ MonsterVars *mv;
//     /* a0 4 */ int32 i;
//     {
//         /* f1 39 */ float _x1;
//         /* f2 40 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* a3 7 */ Vector4f *_v0;
//         /* v0 2 */ Vector4f *_v1;
//     }
//     {
//         /* f1 39 */ float _x1;
//         /* f0 38 */ float _y1;
//         /* f2 40 */ float _z1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MonsterInit);

// /* 001725a0 00000048 */ static void MON_UpdateLinkedObjectPositions(/* a0 4 */ Instance *instance, /* s1 17 */ Vector4f *offset) {
//     /* s0 16 */ Instance *curr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MON_UpdateLinkedObjectPositions);

// /* 001725e8 0000005c */ static void SendHitObject(/* s2 18 */ Instance *instance, /* s0 16 */ Instance *hit, /* s1 17 */ int type) {
//     /* v0 2 */ evMonsterHitObjectData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", SendHitObject);

// /* 00172648 0000059c */ void MonsterCollide(/* s1 17 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s3 19 */ CollideInfo *collideInfo;
//     /* s4 20 */ MonsterVars *mv;
//     {
//         /* 0x80(sp) */ HSphere *s0;
//         {
//             /* s5 21 */ Instance *inst1;
//             /* fp 30 */ HSphere *s1;
//             {
//                 /* s0 16 */ int32 damage;
//                 /* 0x84(sp) */ int32 type;
//                 /* s6 22 */ int32 anim;
//                 /* f20 58 */ float angle;
//             }
//         }
//         {
//             /* s6 22 */ int move;
//             {
//                 /* s0 16 */ HSphere *hsphere;
//             }
//             {
//                 /* s4 20 */ BSPTree *bsp;
//                 {
//                     /* s0 16 */ evMonsterHitTerrainData *data;
//                     /* s5 21 */ Level *level;
//                     /* v0 2 */ Intro *impaler;
//                     /* s2 18 */ TFace *tface;
//                     {
//                         /* 0x30(sp) */ CollideInfo parentCI;
//                     }
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MonsterCollide);

// /* 00172be8 00000150 */ void MonsterAdditionalCollide(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s1 17 */ MonsterVars *mv;
//     /* 0x0(sp) */ Vector4f vec;
//     {
//         /* 0x10(sp) */ Vector4f offset;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MonsterAdditionalCollide);

// /* 00172d38 0000034c */ uint32 MonsterQuery(/* s1 17 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* s0 16 */ MonsterVars *mv;
//     /* s2 18 */ MonsterAttributes *ma;
//     /* s3 19 */ uint32 ret;
//     {
//         /* v0 2 */ evShadowSegmentData *shadowData;
//     }
//     {
//         /* s0 16 */ MonsterSaveInfo *saveInfo;
//     }
//     {
//         /* v0 2 */ MonsterIR *mir;
//     }
//     {
//         /* v0 2 */ MonsterIR *mir;
//     }
//     {
//         /* v0 2 */ MonsterVars *mv;
//         /* a0 4 */ MonsterAllegiances *allegiances;
//     }
//     {
//         /* v0 2 */ MonsterVars *mv;
//         /* a0 4 */ MonsterAllegiances *allegiances;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MonsterQuery);

// /* 00173088 00000530 */ void MonsterMessage(/* s2 18 */ Instance *instance, /* s0 16 */ uint32 message, /* s1 17 */ uint32 data) {
//     /* a3 7 */ MonsterVars *mv;
//     {
//         /* s0 16 */ G2AnimSection *section;
//     }
//     {
//         /* s0 16 */ G2AnimSection *section;
//     }
//     {
//         /* v0 2 */ MonsterSetPieceHandlerFunc setPieceHandlerFunc;
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//         /* v0 2 */ Vector4f *_v0;
//     }
//     {
//         /* v0 2 */ MonsterHandlerFunc handlerFunc;
//         /* v0 2 */ MonsterStateFuncs *stateFuncs;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MonsterMessage);

// /* 001735b8 0000008c */ static void FixArcs(/* s0 16 */ float *arcStart, /* s1 17 */ float *arcEnd) {
//     /* f20 58 */ float start;
//     /* f21 59 */ float end;
//     /* f0 38 */ float temp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", FixArcs);

// /* 00173648 00000174 */ static void EvadeDistance(/* s0 16 */ Object *object, /* s2 18 */ MonsterEvadeAttributes *evade) {
//     /* a1 5 */ MonsterAttributes *attributes;
//     /* s1 17 */ MonsterAnim *mAnim;
//     /* 0x0(sp) */ G2Anim anim;
//     /* v1 3 */ G2AnimSection *animSection;
//     /* s3 19 */ G2AnimKeylist *keylist;
//     {
//         /* 0xe0(sp) */ Vector4f diff;
//         {
//             /* f1 39 */ float dp;
//         }
//         {
//             /* f1 39 */ float result;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", EvadeDistance);

// /* 001737c0 00000168 */ static void CombatMoveDistance(/* s0 16 */ Object *object, /* s2 18 */ MonsterCombatMoveAttributes *combatMove) {
//     /* a1 5 */ MonsterAttributes *attributes;
//     /* s1 17 */ MonsterAnim *mAnim;
//     /* 0x0(sp) */ G2Anim anim;
//     /* v1 3 */ G2AnimSection *animSection;
//     /* s3 19 */ G2AnimKeylist *keylist;
//     {
//         /* 0xe0(sp) */ Vector4f diff;
//         {
//             /* f1 39 */ float dp;
//         }
//         {
//             /* f1 39 */ float result;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", CombatMoveDistance);

// /* 00173928 00000024 */ static void AttackAngle(/* a0 4 */ Object *object, /* a0 4 */ MonsterAttackAttributes *attack) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", AttackAngle);

// /* 00173950 00000024 */ static void AttackStreamAngle(/* a0 4 */ Object *object, /* a0 4 */ MonsterAttackStream *attackStream) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", AttackStreamAngle);

// /* 00173978 00000038 */ static void BlockAngle(/* a0 4 */ Object *object, /* s0 16 */ MonsterBlockAttributes *block) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", BlockAngle);

// /* 001739b0 000001d4 */ void MonsterProcessObject(/* s3 19 */ Object *object) {
//     /* s4 20 */ MonsterAttributes *attributes;
//     /* s1 17 */ MonsterAttackStream **attackStream;
//     /* s1 17 */ MonsterAttackAttributes **attack;
//     /* s1 17 */ MonsterEvadeAttributes *evade;
//     /* s1 17 */ MonsterBlockAttributes *block;
//     /* s1 17 */ MonsterCombatMoveAttributes *combatMove;
//     /* s0 16 */ int32 i;
//     {
//         /* s1 17 */ MonsterAnim *animPtr;
//         /* v0 2 */ int32 numAnims;
//         {
//             /* a0 4 */ int32 index;
//             /* s2 18 */ G2AnimKeylist *keylist;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MonsterProcessObject);

// /* 00173b88 00000054 */ void MON_SetupRelocatableModule(/* a0 4 */ Object *object) {
//     {
//         /* v0 2 */ void *relocModule;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MON_SetupRelocatableModule);

// /* 00173be0 000004e0 */ void MonsterRelocateTune(/* a0 4 */ Object *object, /* t8 24 */ int32 offset) {
//     /* fp 30 */ MonsterAttributes *attributes;
//     {
//         /* t9 25 */ int32 i;
//         /* a1 5 */ MonsterSubAttributes **pSubAttr;
//         /* a1 5 */ MonsterCombatAttributes **pCombatAttr;
//         /* a0 4 */ MonsterAttackStream **pAttackStream;
//         /* a0 4 */ FatalityInterface *fi;
//         /* a0 4 */ int32 j;
//         /* a1 5 */ MonsterAttackAttributes **pAttack;
//         /* v1 3 */ MonsterSubAttributes **oldSubAttr;
//         /* a3 7 */ void **v;
//         /* a0 4 */ MonsterReactionList **pHRL;
//         /* a1 5 */ MonsterBlockAttributes *pBlockAttributes;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MonsterRelocateTune);

// /* 001740c0 00000114 */ void MonsterRelocateInstanceObject(/* t6 14 */ Instance *instance, /* t7 15 */ int32 offset) {
//     /* t5 13 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MonsterRelocateInstanceObject);

// /* 001741d8 00000154 */ void MONAPI_PossessNext() {
//     /* data 2a4b50 */ static Instance *possessed;
//     /* s1 17 */ InstanceList *instanceList;
//     /* s0 16 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MONAPI_PossessNext);

// /* 00174330 0000009c */ void MONAPI_TurnHead(/* a0 4 */ Instance *instance, /* a1 5 */ float *rotx, /* a2 6 */ float *rotz, /* a3 7 */ GameTracker *gameTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MONAPI_TurnHead);

// /* 001743d0 00000030 */ void MONAPI_SetLookAround(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MONAPI_SetLookAround);

// /* 00174400 00000030 */ void MONAPI_ResetLookAround(/* v0 2 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MONAPI_ResetLookAround);

// /* 00174430 00000008 */ long int MONAPI_OkToLookAround(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MONAPI_OkToLookAround);

// /* 00174438 0000004c */ static void MONAPI_DeleteRegen(/* a0 4 */ MONAPI_Regenerator *regen) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MONAPI_DeleteRegen);

// /* 00174488 0000010c */ void MONAPI_ProcessGenerator() {
//     /* s1 17 */ int i;
//     /* s0 16 */ MONAPI_Regenerator *regen;
//     {
//         /* v1 3 */ uint32 time;
//         {
//             /* v0 2 */ Level *level;
//             {
//                 /* a0 4 */ Intro *intro;
//                 /* v1 3 */ int j;
//                 /* a1 5 */ int32 id;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MONAPI_ProcessGenerator);

// /* 00174598 0000008c */ void MONAPI_AddToGenerator(/* s2 18 */ Instance *instance) {
//     {
//         /* s1 17 */ MonsterVars *mv;
//         /* s0 16 */ MONAPI_Regenerator *regen;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MONAPI_AddToGenerator);

// /* 00174628 00000060 */ void MONAPI_CheckGenerator(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ int32 i;
//     /* a0 4 */ MONAPI_Regenerator *regen;
//     /* a3 7 */ int id;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/monapi", MONAPI_CheckGenerator);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/monster/monapi", D_002B6020);

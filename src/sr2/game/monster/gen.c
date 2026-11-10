/* Original path: C:\sr2\game\monster\gen.c */
/* .text 0x00194338, .data 0x002A5FB8 */
/* Code from other files was inlined here: math3d.h */

#include "monster/gen.h"

// /* 00194338 00000058 */ void GENERATOR_Init(/* a0 4 */ Instance *instance) {
//     /* a3 7 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/gen", GENERATOR_Init);

// /* 00194390 00000038 */ void GENERATOR_SetPieceHandler(/* a0 4 */ Instance *instance, /* a1 5 */ int32 mdata) {
//     /* v1 3 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/gen", GENERATOR_SetPieceHandler);

// /* 001943c8 0000002c */ uint32 GENERATOR_Query(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* v0 2 */ uint32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/gen", GENERATOR_Query);

// /* 001943f8 00000030 */ int32 GENERATOR_BehaviorStack(/* a0 4 */ Instance *instance, /* a1 5 */ int32 *curr) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/gen", GENERATOR_BehaviorStack);

// /* 00194428 000000e4 */ Object* MON_ChooseMonster(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ MonsterVars *mv;
//     /* t0 8 */ MonsterCombatAttributes *combat;
//     /* a2 6 */ MonsterAttackStream **curr;
//     /* a1 5 */ int32 i;
//     /* a3 7 */ int32 t;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/gen", MON_ChooseMonster);

// /* 00194510 00000178 */ void GENERATOR_MakeMonster(/* s2 18 */ Instance *instance) {
//     /* s1 17 */ MonsterVars *mv;
//     /* s0 16 */ Instance *monster;
//     /* v0 2 */ Object *monsterObj;
//     /* 0x0(sp) */ Vector4f pos;
//     /* s3 19 */ uint32 time;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/gen", GENERATOR_MakeMonster);

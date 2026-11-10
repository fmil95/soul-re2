/* Original path: C:\sr2\game\monster\sarafan.c */
/* .text 0x001934C8, .data 0x002A5D88 */

#include "monster/sarafan.h"

// /* 001934c8 00000094 */ int32 HUMAN_MessageHandler(/* s0 16 */ Instance *instance, /* a1 5 */ int32 message, /* a2 6 */ int32 mdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sarafan", HUMAN_MessageHandler);

// /* 00193560 00000048 */ void HUMAN_Death(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ MonsterVars *mv;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/monster/sarafan", HUMAN_Death);

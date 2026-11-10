/* Original path: C:\sr2\game\Player.c */
/* .text 0x00153F10 */

#include "Player.h"

// /* 00153f10 000000d0 */ void PLAYER_TurnHead(/* s0 16 */ Instance *instance, /* s1 17 */ float *rotx, /* s2 18 */ float *rotz, /* s3 19 */ GameTracker *gameTracker) {
//     /* 0x0(sp) */ SVector fp_hack;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Player", PLAYER_TurnHead);

// /* 00153fe0 00000054 */ int PLAYER_OkToLookAround(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Player", PLAYER_OkToLookAround);

// /* 00154038 0000004c */ void PLAYER_SetLookAround(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Player", PLAYER_SetLookAround);

// /* 00154088 0000004c */ void PLAYER_ReSetLookAround(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Player", PLAYER_ReSetLookAround);

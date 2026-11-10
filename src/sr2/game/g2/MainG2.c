/* Original path: C:\sr2\game\g2\MainG2.c */
/* .text 0x0019AF00 */

#include "common.h"

// /* 0019af00 00000020 */ G2Bool MainG2_InitEngine(/* a0 4 */ G2AppData *appData, /* a1 5 */ unsigned int screenWidth, /* a2 6 */ unsigned int screenHeight, /* a3 7 */ char *filesystemName) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/MainG2", MainG2_InitEngine);

// /* 0019af20 00000008 */ void MainG2_ShutDownEngine(/* a0 4 */ G2AppData *appData) {}
void MainG2_ShutDownEngine(void) {
}

/* Original path: C:\sr2\game\g2\PoolMmG2.c */
/* .text 0x0019AF28 */

#include "g2/PoolMmG2.h"

// /* 0019af28 00000068 */ void G2PoolMem_InitPool(/* s0 16 */ void *voidPool, /* s1 17 */ int blockCount, /* s2 18 */ int blockSize) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/PoolMmG2", G2PoolMem_InitPool);

// /* 0019af90 00000040 */ void G2PoolMem_ResetPool(/* a0 4 */ void *voidPool) {
//     /* a0 4 */ G2PoolMemPool *pool;
//     /* a1 5 */ int blockIndex;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/PoolMmG2", G2PoolMem_ResetPool);

// /* 0019afd0 00000030 */ void G2PoolMem_FreePool(/* s0 16 */ void *voidPool) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/PoolMmG2", G2PoolMem_FreePool);

// /* 0019b000 00000050 */ void* G2PoolMem_Allocate(/* a3 7 */ void *voidPool) {
//     /* a1 5 */ int blockIndex;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/PoolMmG2", G2PoolMem_Allocate);

// /* 0019b050 00000040 */ void G2PoolMem_Free(/* a0 4 */ void *voidPool, /* a1 5 */ void *block) {
//     /* a1 5 */ int blockIndex;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/PoolMmG2", G2PoolMem_Free);

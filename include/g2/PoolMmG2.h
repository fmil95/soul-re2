#ifndef G2_POOLMMG2_H
#define G2_POOLMMG2_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void G2PoolMem_InitPool(void *voidPool, int blockCount, int blockSize);
void G2PoolMem_ResetPool(void *voidPool);
void G2PoolMem_FreePool(void *voidPool);
void*G2PoolMem_Allocate(void *voidPool);
void G2PoolMem_Free(void *voidPool, void *block);

#endif /* G2_POOLMMG2_H */

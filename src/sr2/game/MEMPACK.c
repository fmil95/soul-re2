/* Original path: C:\sr2\game\MEMPACK.C */
/* .text 0x00143490, .data 0x0025B408, .rodata 0x002B4D60, .bss 0x00692940 */

#include "MEMPACK.h"

// /* 00143490 00000048 */ void MEMPACK_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_Init);

// /* 001434d8 00000018 */ uint32 MEMPACK_ReportFreeMemory() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_ReportFreeMemory);

// /* 001434f0 00000028 */ uint32 MEMPACK_Size(/* a0 4 */ void *address) {
//     /* v1 3 */ int size;
//     /* a0 4 */ MemHeader *cur;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_Size);

// /* 00143518 0000000c */ uint32 MEMPACK_ReportTotalMemory() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_ReportTotalMemory);

// /* 00143528 00000218 */ void* MEMPACK_MallocAlign(/* s0 16 */ uint32 allocSize, /* s1 17 */ uint8 memType, /* a2 6 */ int alignment) {
//     /* a3 7 */ MemHeader *memAddress;
//     /* t0 8 */ MemHeader *best;
//     /* t1 9 */ MemHeader *prev;
//     /* t4 12 */ MemHeader *prevBest;
//     /* t2 10 */ int prefixSize;
//     {
//         /* v0 2 */ uint32 newAddr;
//     }
//     {
//         /* a2 6 */ MemHeader *new;
//     }
//     {
//         /* v1 3 */ MemHeader *new;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_MallocAlign);

// /* 00143740 00000020 */ void* MEMPACK_Malloc(/* a0 4 */ uint32 allocSize, /* a1 5 */ uint8 memType) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_Malloc);

// /* 00143760 00000064 */ void* MEMPACK_ChainMalloc(/* a0 4 */ uint32 allocSize, /* a1 5 */ uint8 memType, /* s0 16 */ void *parent) {
//     /* a0 4 */ MemHeader *addr;
//     {
//         /* a2 6 */ MemHeader *prev;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_ChainMalloc);

// /* 001437c8 00000130 */ void MEMPACK_Free(/* v1 3 */ void *address) {
//     /* v1 3 */ MemHeader *cur;
//     /* a0 4 */ MemHeader *rawCur;
//     {
//         /* a2 6 */ MemHeader *before;
//         /* a1 5 */ MemHeader *after;
//         /* v1 3 */ MemHeader *addr;
//         /* t0 8 */ MemHeader *next;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_Free);

// /* 001438f8 0000006c */ void MEMPACK_ReportMemory() {
//     /* v1 3 */ MemHeader *address;
//     /* a0 4 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_ReportMemory);

// /* 00143968 00000008 */ void MEMPACK_VerifyIntegrityOfMemory() {}
void MEMPACK_VerifyIntegrityOfMemory(void) {
}

// /* 00143970 00000028 */ void MEMPACK_VerifyMemoryChain(/* a0 4 */ void *address) {
//     /* a0 4 */ MemHeader *cur;
//     /* a0 4 */ MemHeader *rawCur;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_VerifyMemoryChain);

// /* 00143998 00000074 */ void* MEMPACK_Remalloc(/* s0 16 */ void *oldAddress, /* s1 17 */ uint32 allocSize, /* a2 6 */ uint8 memType) {
//     /* s2 18 */ void *newAddress;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/MEMPACK", MEMPACK_Remalloc);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/MEMPACK", D_002B4D60);

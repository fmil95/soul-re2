/* Original path: C:\sr2\game\ps2\iopmem.c */
/* .text 0x001D7E40, .rodata 0x002B8968, .bss 0x01E9C9D0 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* bss 1e9c9d0 */ extern sceSifClientData iopmemman0;
/* bss 1e9ca00 */ extern int param;
/* bss 1e9ca10 */ extern void *address;

// /* 001d7e40 0000009c */ void IOPMEM_Init() {
//     {
//         /* v0 2 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopmem", IOPMEM_Init);

// /* 001d7ee0 00000070 */ void* IOPMEM_Malloc(/* a0 4 */ int len) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopmem", IOPMEM_Malloc);

// /* 001d7f50 00000074 */ void IOPMEM_Free(/* a0 4 */ void *address) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/iopmem", IOPMEM_Free);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopmem", D_002B8968);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopmem", D_002B8978);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopmem", D_002B8990);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopmem", D_002B89B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopmem", D_002B89D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/iopmem", D_002B89E0);

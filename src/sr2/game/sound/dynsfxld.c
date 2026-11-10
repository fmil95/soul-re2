/* Original path: C:\sr2\game\sound\dynsfxld.c */
/* .text 0x00101AC8, .data 0x00207D30, .rodata 0x002B1E40, .bss 0x002BDA48 */

#include "sound/dynsfxld.h"

// /* 00101ac8 000000ec */ void DYNSFX_FreeDynamicSfx(/* a0 4 */ int handle) {
//     /* s2 18 */ int i;
//     /* s1 17 */ AadDynSfxSnfFileHdr *snfFile;
//     /* v1 3 */ uint16 *sfxIDListPtr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfxld", DYNSFX_FreeDynamicSfx);

// /* 00101bb8 00000300 */ void LoadDynamicSfxSampleBlockLoadCallback(/* s5 21 */ void *buffer, /* a1 5 */ int length, /* a2 6 */ int memType, /* a3 7 */ FILEREQUEST *filereq) {
//     /* s3 19 */ uint32 dataOffset;
//     /* s2 18 */ uint32 bytesRemaining;
//     /* s1 17 */ DynamicSfxLoadInfo *info;
//     /* s0 16 */ AadLoadedSfxToneAttr *toneAttr;
//     /* s0 16 */ uint32 n;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfxld", LoadDynamicSfxSampleBlockLoadCallback);

// /* 00101eb8 00000038 */ void LoadDynamicSfxCancelCallback(/* s0 16 */ FILEREQUEST *filereq) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfxld", LoadDynamicSfxCancelCallback);

// /* 00101ef0 00000050 */ void LoadDynamicSfxSampleReturnAfterBlock(/* a0 4 */ void *loadedDataPtr, /* s0 16 */ void *context) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfxld", LoadDynamicSfxSampleReturnAfterBlock);

// /* 00101f40 00000104 */ void LoadDynamicSfxReturn(/* a0 4 */ void *loadedDataPtr, /* a1 5 */ void *context) {
//     /* v1 3 */ AadDynSfxSnfFileHdr *p;
//     /* s0 16 */ DynamicSfxLoadInfo *info;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfxld", LoadDynamicSfxReturn);

// /* 00102048 000000a0 */ int DYNSFX_LoadDynamicSfx(/* s1 17 */ char *fileName) {
//     /* v0 2 */ char *p;
//     /* s0 16 */ DynamicSfxLoadInfo *info;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfxld", DYNSFX_LoadDynamicSfx);

// /* 001020e8 00000074 */ static void FreeSingleDynSfx(/* a0 4 */ uint16 sfxID) {
//     /* a0 4 */ AadLoadedSfxToneAttr *toneAttr;
//     /* a0 4 */ AadLoadedSfxWaveAttr *waveAttr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfxld", FreeSingleDynSfx);

// /* 00102160 00000060 */ void DYNSFX_RelocateSfxMemory(/* a0 4 */ void *oldAddress, /* a1 5 */ int offset) {
//     /* v1 3 */ AadDynSfxSnfFileHdr *snfFile;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfxld", DYNSFX_RelocateSfxMemory);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfxld", D_002B1E40);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfxld", D_002B1E60);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfxld", D_002B1E88);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfxld", D_002B1E90);

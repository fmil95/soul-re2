/* Original path: C:\sr2\game\sound\music\musplay.c */
/* .text 0x001062A8, .data 0x00229468, .rodata 0x002B2080 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 229468 */ extern float masterVolume;
/* data 22946c */ extern float reductionVolume;
/* data 229470 */ extern float targetReductionVolume;
/* data 229474 */ extern float reductionTime;
/* data 229478 */ extern float MUSIC_reducedMasterVolume;
/* data 22947c */ extern float MUSIC_masterVolumeSfx;
/* data 229480 */ extern int MUSIC_Paused;
/* data 229484 */ extern uint32 numUpdates;
/* data 229488 */ extern float totalUpdateTime;
/* data 229490 */ extern MUS_LoadingVars musicLoadingVars[2];

// /* 001062a8 00000028 */ static void InitLoadingVars(/* a0 4 */ MUS_LoadingVars *vars) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", InitLoadingVars);

// /* 001062d0 000000b0 */ void MUSIC_Play(/* a0 4 */ MUSHANDLE musHandle) {
//     /* s0 16 */ MUS_Song *song;
//     /* a1 5 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_Play);

// /* 00106380 00000028 */ void MUSIC_Stop(/* s0 16 */ MUSHANDLE musHandle) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_Stop);

// /* 001063a8 000000b0 */ void MUSIC_Update(/* f20 58 */ float deltaTime) {
//     /* s2 18 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_Update);

// /* 00106458 00000090 */ int32 MUSIC_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_Init);

// /* 001064e8 00000020 */ int32 MUSIC_Shutdown() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_Shutdown);

// /* 00106508 0000001c */ int32 MUSIC_LoadBank(/* a0 4 */ MUSHANDLE musHandle, /* a1 5 */ void *samData) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_LoadBank);

// /* 00106528 0000001c */ int32 MUSIC_LoadBankChunk(/* a0 4 */ MUSHANDLE musHandle, /* a1 5 */ void *samData, /* a2 6 */ int len) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_LoadBankChunk);

// /* 00106548 000001d0 */ MUSHANDLE MUSIC_LoadMUS(/* s1 17 */ void *musFile, /* s2 18 */ char *name) {
//     /* s0 16 */ MUS_Song *curSong;
//     /* a2 6 */ uint8 *musPtr;
//     /* a1 5 */ int32 i;
//     {
//         /* a0 4 */ int32 *ptrList;
//     }
//     {
//         /* a0 4 */ int32 *ptrList;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_LoadMUS);

// /* 00106718 00000070 */ int32 MUSIC_CalcSRAM() {
//     /* a1 5 */ int totalMem;
//     /* a0 4 */ int i;
//     /* a0 4 */ int j;
//     {
//         /* v1 3 */ MUS_Song *song;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_CalcSRAM);

// /* 00106788 000000e0 */ int32 MUSIC_FreeMUS(/* s2 18 */ MUSHANDLE musHandle) {
//     /* s1 17 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_FreeMUS);

// /* 00106868 000002a8 */ void MUSIC_RelocateMUS(/* a0 4 */ MemHeader *newAddress, /* s0 16 */ int32 offset, /* a2 6 */ void *oldFile) {
//     /* s2 18 */ uint8 *musPtr;
//     /* a1 5 */ int32 i;
//     /* s1 17 */ MUS_Header *musHeader;
//     /* s3 19 */ MUS_Song *song;
//     /* a2 6 */ uint8 *oldPtr;
//     /* a2 6 */ int32 count;
//     /* a0 4 */ int foundLoadVars;
//     {
//         /* a0 4 */ int32 *ptrList;
//     }
//     {
//         /* a0 4 */ int32 *ptrList;
//     }
//     {
//         /* a2 6 */ int32 seqNr;
//         {
//             /* a3 7 */ MUSMIDI_Song *midiSong;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_RelocateMUS);

// /* 00106b10 00000098 */ void MUSIC_InvalidateVolume() {
//     /* v1 3 */ int32 i;
//     /* s1 17 */ int32 j;
//     /* a0 4 */ MUS_Song *musSong;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_InvalidateVolume);

// /* 00106ba8 00000020 */ void MUSIC_SetMasterVolume(/* f12 50 */ float newVolume) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_SetMasterVolume);

// /* 00106bc8 00000020 */ void MUSIC_SetMasterVolumeSfx(/* f12 50 */ float newVolume) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_SetMasterVolumeSfx);

// /* 00106be8 0000000c */ float MUSIC_GetMasterVolume() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_GetMasterVolume);

// /* 00106bf8 0000004c */ void MUSIC_SetVolumeReduction(/* a0 4 */ int32 newVolume, /* a1 5 */ int32 newFrames) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_SetVolumeReduction);

// /* 00106c48 00000178 */ void MUSIC_UpdateVolumeReduction(/* f20 58 */ float deltaTime) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_UpdateVolumeReduction);

// /* 00106dc0 00000010 */ void MUSIC_Pause() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_Pause);

// /* 00106dd0 0000000c */ void MUSIC_Resume() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musplay", MUSIC_Resume);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/music/musplay", D_002B2080);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/music/musplay", D_002B20C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/music/musplay", D_002B20F0);

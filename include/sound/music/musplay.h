#ifndef SOUND_MUSIC_MUSPLAY_H
#define SOUND_MUSIC_MUSPLAY_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
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

/* Non-static functions of this unit (STABS signatures). */
void MUSIC_Play(MUSHANDLE musHandle);
void MUSIC_Stop(MUSHANDLE musHandle);
void MUSIC_Update(float deltaTime);
int32 MUSIC_Init(void);
int32 MUSIC_Shutdown(void);
int32 MUSIC_LoadBank(MUSHANDLE musHandle, void *samData);
int32 MUSIC_LoadBankChunk(MUSHANDLE musHandle, void *samData, int len);
MUSHANDLE MUSIC_LoadMUS(void *musFile, char *name);
int32 MUSIC_CalcSRAM(void);
int32 MUSIC_FreeMUS(MUSHANDLE musHandle);
void MUSIC_RelocateMUS(MemHeader *newAddress, int32 offset, void *oldFile);
void MUSIC_InvalidateVolume(void);
void MUSIC_SetMasterVolume(float newVolume);
void MUSIC_SetMasterVolumeSfx(float newVolume);
float MUSIC_GetMasterVolume(void);
void MUSIC_SetVolumeReduction(int32 newVolume, int32 newFrames);
void MUSIC_UpdateVolumeReduction(float deltaTime);
void MUSIC_Pause(void);
void MUSIC_Resume(void);

#endif /* SOUND_MUSIC_MUSPLAY_H */

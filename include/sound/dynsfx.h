#ifndef SOUND_DYNSFX_H
#define SOUND_DYNSFX_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 207b80 */ extern int sfxMasterVol;
/* data 207b88 */ extern void (*sfxCmdFunction[5])(/* parameters unknown */);
/* data 207b9c */ extern int DYNSFX_UnloadedSounds;
/* data 207ba0 */ extern int DYNSFX_ShowSRAMUsage;
/* bss 2bc388 */ extern AadSynthVoice synthVoice[48];
/* data 207ba8 */ extern AadSfxSlot sfxSlot;
/* bss 2bd108 */ extern float ARTable1[128];
/* bss 2bd308 */ extern float ARTable2[128];
/* bss 2bd508 */ extern float SRTable1[128];
/* bss 2bd708 */ extern float SRTable2[128];
/* bss 2bd908 */ extern float DRTable[16];
/* bss 2bd948 */ extern float RRTable1[32];
/* bss 2bd9c8 */ extern float RRTable2[32];

/* Non-static functions of this unit (STABS signatures). */
void DYNSFX_Init(void);
void DYNSFX_Update(float time);
void DYNSFX_PrintDebug(void);
void DYNSFX_PrintUnloaded(void);
void DYNSFX_SetMasterVolume(int vol);
float DYNSFX_GetMasterVolume(void);
void SpuSetVoiceADSR1ADSR2(AadSynthVoice *v, uint16 adsr1, uint16 adsr2);
uint32 DYNSFX_PlaySfx(AadSfxToneID toneID, int volume, int pan, float pitchOffset);
uint32 DYNSFX_StopSfx(uint32 handle);
void DYNSFX_StopAllSfx(void);
int DYNSFX_IsSfxLoaded(AadSfxToneID toneID);
int DYNSFX_SfxDefaultVolume(AadSfxToneID toneID);
int DYNSFX_SfxDefaultVolumeFromHandle(uint32 handle);
int DYNSFX_IsSfxPlaying(uint32 handle);
int DYNSFX_IsSfxPlayingOrRequested(uint32 handle);
int DYNSFX_IsSfxTypePlaying(AadSfxToneID toneID);
int DYNSFX_IsSfxTypePlayingOrRequested(AadSfxToneID sfxToneID);
int DYNSFX_NumSfxTypePlaying(AadSfxToneID toneID);
uint32 DYNSFX_SetSfxVolumeAndPan(uint32 handle, int volume, int pan);
uint32 DYNSFX_SetSfxVolPanPitch(uint32 handle, int volume, int pan, float pitch);

#endif /* SOUND_DYNSFX_H */

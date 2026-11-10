#ifndef SOUND_SOUND_H
#define SOUND_SOUND_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25bff0 */ extern int32 musicDebug;
/* data 25bff4 */ extern float musUpdateDelta;
/* data 25bff8 */ extern int gDisableDistanceAttenuation;
/* data 25bffc */ extern int underWater;
/* data 25c000 */ extern int32 objectOneShotTriggerTbl[3];
/* data 25c018 */ extern char debugMusicName[32];
/* bss 1e92ba0 */ extern int32 sfxReverbVolume;
/* bss 1e92ba4 */ extern int32 sfxReverbType;
/* data 25c038 */ extern SoundEffectChannel soundEffectChannelTbl[16];
/* bss 1e92ba8 */ extern Instance *SoundMicInstance;

/* Non-static functions of this unit (STABS signatures). */
SoundEffectChannel*SndOpenSfxChannel(uint8 *channelNum);
void SndCloseSfxChannel(int channelNum);
SoundEffectChannel*SndGetSfxChannel(int channelNum);
void SOUND_ProcessInstanceSounds(uint8 *sfxFileData, SoundInstance *soundInstTbl, Vector4f *position, int livesInOnePlace, int inSpectral, int hidden, int burning, int32 *triggerFlags);
void SOUND_EndInstanceSounds(uint8 *sfxFileData, SoundInstance *soundInstTbl);
int isOkayToPlaySound(int flags, int spectralPlane, int hidden, int burning);
int isSoundEnabledToPlay(int flags, int triggerFlags);
void setPeriodicSoundStateOff(SoundInstance *soundInst, ObjectPeriodicSound *sound);
void processPeriodicSound(Vector4f *position, int livesInOnePlane, int inSpectral, int hidden, int burning, SoundInstance *soundInst, ObjectPeriodicSound *sound);
void processEventSound(Vector4f *position, SoundInstance *soundInst, ObjectEventSound *sound);
void processExtendedEventSound(Vector4f *position, SoundInstance *soundInst, ObjectExtendedEventSound *sound);
void SOUND_StartInstanceSound(SoundInstance *soundInst);
void SOUND_StopInstanceSound(SoundInstance *soundInst);
int SOUND_IsInstanceSoundLoaded(uint8 *sfxFileData, int32 soundNumber);
void SOUND_SetInstanceSoundPitch(SoundInstance *soundInst, int32 pitchChangeAmt, int32 time);
void SOUND_SetInstanceSoundVolume(SoundInstance *soundInst, int32 volumeChangeAmt, int32 time);
void processOneShotSound(Vector4f *position, int hidden, int burning, int32 *triggerFlags, SoundInstance *soundInst, ObjectOneShotSound *sound);
uint32 SOUND_Play3dSound(Vector4f *position, int sfxToneID, float pitch, int maxVolume, int minVolDist);
void SOUND_GetVolumeForPosition(Vector4f *position, int maxVolume, int minVolDist, int *leftVolume, int *rightVolume);
uint32 SOUND_Update3dSound(Vector4f *position, uint32 handle, float pitch, int maxVolume, int minVolDist);
Signal*SOUND_HandleSignal(Instance *instance, Signal *signal);
void MUS_AsyncLoadingCallback(void *dataPtr, void *context, void *context2);
void MUS_AsyncLoadingCallback2(void *dataPtr, void *context, void *context2);
void MUS_AsyncLoadingBlockCallback(void *buffer, int length, int memType, FILEREQUEST *filereq);
void MUS_AsyncLoadingAfterBlockCallback(void *dataPtr, void *context, void *context2);
void MUS_AsyncLoadingCancelCallback(FILEREQUEST *filereq);
void SOUND_CheckMusic(void);
void SOUND_LoadMusic(char *dynamicMusicName, char *transitionName);
void SOUND_UpdateSound(float time);
void SOUND_Init(void);
void SOUND_Free(void);
void SOUND_SetMusicVariable(int32 variable, int32 value);
void SOUND_SetMusicVolume(int newVolume);
void SOUND_SetSfxVolume(int newVolume);
void SOUND_SetVoiceVolume(int newVolume);
void SOUND_SetSFXReverb(int32 type, int32 volume);
int SOUND_GetMonoMode(void);
void SOUND_SetMonoMode(int useMono);
void SOUND_PauseAllSound(void);
void SOUND_ResumeAllSound(void);
void SOUND_StopAllSound(void);
void SOUND_StopMusicSlot(int slotNr);
void SOUND_StopMusic(void);
void SOUND_MusicOff(void);
void SOUND_MusicOn(void);
void SOUND_SfxOff(void);
void SOUND_SfxOn(void);
int SOUND_SndTypeIsPlayingOrRequested(int sfxToneID);
int SndPlay(int sample);
void SndEndLoop(int handle);
int SndPlayVolPan(int sample, uint16 vol, uint16 pan, float pitch);
int SndUpdateVolPan(int handle, uint16 vol, uint16 pan);
int SndUpdateVolPanPitch(int handle, uint16 vol, uint16 pan, float pitch);
void SOUND_PlaneShift(int newPlane);
void SOUND_SetMicInstance(Instance *inst);
void SOUND_SetUnderWater(void);
void SOUND_ResetUnderWater(void);

#endif /* SOUND_SOUND_H */

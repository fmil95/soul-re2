/* Original path: C:\sr2\game\sound\Sound.c */
/* .text 0x00157B28, .data 0x0025BFF0, .rodata 0x002B5250, .bss 0x01E92B98 */
/* Code from other files was inlined here: math3d.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
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

// /* 00157b28 00000048 */ SoundEffectChannel* SndOpenSfxChannel(/* a0 4 */ uint8 *channelNum) {
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndOpenSfxChannel);

// /* 00157b70 00000028 */ void SndCloseSfxChannel(/* a0 4 */ int channelNum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndCloseSfxChannel);

// /* 00157b98 00000028 */ SoundEffectChannel* SndGetSfxChannel(/* a0 4 */ int channelNum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndGetSfxChannel);

// /* 00157bc0 00000218 */ void SOUND_ProcessInstanceSounds(/* s0 16 */ uint8 *sfxFileData, /* s3 19 */ SoundInstance *soundInstTbl, /* s4 20 */ Vector4f *position, /* 0x0(sp) */ int livesInOnePlace, /* fp 30 */ int inSpectral, /* s6 22 */ int hidden, /* s5 21 */ int burning, /* s2 18 */ int32 *triggerFlags) {
//     /* s7 23 */ int numSounds;
//     /* v0 2 */ int numSfxIDs;
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_ProcessInstanceSounds);

// /* 00157dd8 00000184 */ void SOUND_EndInstanceSounds(/* s1 17 */ uint8 *sfxFileData, /* s4 20 */ SoundInstance *soundInstTbl) {
//     /* s3 19 */ int numSounds;
//     /* v0 2 */ int numSfxIDs;
//     /* s2 18 */ int i;
//     /* s0 16 */ SoundInstance *soundInst;
//     /* v0 2 */ SoundEffectChannel *channel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_EndInstanceSounds);

// /* 00157f60 00000058 */ int isOkayToPlaySound(/* a0 4 */ int flags, /* a1 5 */ int spectralPlane, /* a2 6 */ int hidden, /* a3 7 */ int burning) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", isOkayToPlaySound);

// /* 00157fb8 0000002c */ int isSoundEnabledToPlay(/* a0 4 */ int flags, /* a1 5 */ int triggerFlags) {
//     /* a1 5 */ int disabled;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", isSoundEnabledToPlay);

// /* 00157fe8 000000a4 */ void setPeriodicSoundStateOff(/* s0 16 */ SoundInstance *soundInst, /* s1 17 */ ObjectPeriodicSound *sound) {
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", setPeriodicSoundStateOff);

// /* 00158090 00000588 */ void processPeriodicSound(/* 0x0(sp) */ Vector4f *position, /* s4 20 */ int livesInOnePlane, /* s5 21 */ int inSpectral, /* s6 22 */ int hidden, /* s7 23 */ int burning, /* s2 18 */ SoundInstance *soundInst, /* s0 16 */ ObjectPeriodicSound *sound) {
//     /* s1 17 */ SoundEffectChannel *channel;
//     /* a0 4 */ int sfxIDNum;
//     /* s3 19 */ int spectralPlane;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* a0 4 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", processPeriodicSound);

// /* 00158618 000003b4 */ void processEventSound(/* s6 22 */ Vector4f *position, /* s1 17 */ SoundInstance *soundInst, /* s2 18 */ ObjectEventSound *sound) {
//     /* s0 16 */ SoundEffectChannel *channel;
//     /* a0 4 */ int sfxIDNum;
//     /* s5 21 */ int spectralPlane;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", processEventSound);

// /* 001589d0 0000067c */ void processExtendedEventSound(/* s5 21 */ Vector4f *position, /* s1 17 */ SoundInstance *soundInst, /* s2 18 */ ObjectExtendedEventSound *sound) {
//     /* s0 16 */ SoundEffectChannel *channel;
//     /* a0 4 */ int sfxIDNum;
//     /* s4 20 */ int spectralPlane;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* a0 4 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", processExtendedEventSound);

// /* 00159050 00000020 */ void SOUND_StartInstanceSound(/* a0 4 */ SoundInstance *soundInst) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_StartInstanceSound);

// /* 00159070 00000050 */ void SOUND_StopInstanceSound(/* s0 16 */ SoundInstance *soundInst) {
//     /* v0 2 */ SoundEffectChannel *channel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_StopInstanceSound);

// /* 001590c0 00000100 */ int SOUND_IsInstanceSoundLoaded(/* a0 4 */ uint8 *sfxFileData, /* a1 5 */ int32 soundNumber) {
//     /* s1 17 */ uint16 *sfxIDList;
//     /* a3 7 */ int numSounds;
//     /* s0 16 */ int numSfxIDs;
//     /* a2 6 */ int i;
//     /* v0 2 */ int status;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_IsInstanceSoundLoaded);

// /* 001591c0 000000a8 */ void SOUND_SetInstanceSoundPitch(/* a0 4 */ SoundInstance *soundInst, /* a1 5 */ int32 pitchChangeAmt, /* s0 16 */ int32 time) {
//     /* v1 3 */ SoundEffectChannel *channel;
//     /* f20 58 */ float floatpitchchange;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetInstanceSoundPitch);

// /* 00159268 000000f8 */ void SOUND_SetInstanceSoundVolume(/* a0 4 */ SoundInstance *soundInst, /* s0 16 */ int32 volumeChangeAmt, /* s1 17 */ int32 time) {
//     /* a2 6 */ SoundEffectChannel *channel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetInstanceSoundVolume);

// /* 00159360 000003ac */ void processOneShotSound(/* s6 22 */ Vector4f *position, /* v1 3 */ int hidden, /* t1 9 */ int burning, /* s3 19 */ int32 *triggerFlags, /* s1 17 */ SoundInstance *soundInst, /* s2 18 */ ObjectOneShotSound *sound) {
//     /* s0 16 */ SoundEffectChannel *channel;
//     /* a0 4 */ int sfxIDNum;
//     /* s4 20 */ int32 triggerMask;
//     /* t2 10 */ int spectralPlane;
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
//     {
//         /* v1 3 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", processOneShotSound);

// /* 00159710 00000288 */ uint32 SOUND_Play3dSound(/* s0 16 */ Vector4f *position, /* s2 18 */ int sfxToneID, /* f21 59 */ float pitch, /* s1 17 */ int maxVolume, /* s3 19 */ int minVolDist) {
//     /* f0 38 */ float dx;
//     /* f1 39 */ float dy;
//     /* f3 41 */ float dz;
//     /* f7 45 */ float cdx;
//     /* f6 44 */ float cdy;
//     /* f2 40 */ float cdz;
//     /* f20 58 */ float objDist;
//     /* f3 41 */ float workMinVolDist;
//     /* v1 3 */ int angle;
//     /* v1 3 */ int quadrant;
//     /* a2 6 */ int qpos;
//     /* v0 2 */ int pan;
//     /* s0 16 */ int volume;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_Play3dSound);

// /* 00159998 000002a0 */ void SOUND_GetVolumeForPosition(/* t1 9 */ Vector4f *position, /* a1 5 */ int maxVolume, /* t2 10 */ int minVolDist, /* s2 18 */ int *leftVolume, /* s3 19 */ int *rightVolume) {
//     /* f0 38 */ float dx;
//     /* f1 39 */ float dy;
//     /* f3 41 */ float dz;
//     /* f7 45 */ float cdx;
//     /* f6 44 */ float cdy;
//     /* f2 40 */ float cdz;
//     /* s1 17 */ int32 objDist;
//     /* v1 3 */ int32 workMinVolDist;
//     /* v1 3 */ int angle;
//     /* v1 3 */ int quadrant;
//     /* a0 4 */ int qpos;
//     /* v1 3 */ int pan;
//     /* s0 16 */ int volume;
//     {
//         /* f0 38 */ float result;
//     }
//     {
//         /* f0 38 */ float worldPan;
//     }
//     {
//         /* f0 38 */ float worldPan;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_GetVolumeForPosition);

// /* 00159c38 00000244 */ uint32 SOUND_Update3dSound(/* s0 16 */ Vector4f *position, /* s3 19 */ uint32 handle, /* f20 58 */ float pitch, /* a2 6 */ int maxVolume, /* s1 17 */ int minVolDist) {
//     /* f0 38 */ float dx;
//     /* f1 39 */ float dy;
//     /* f3 41 */ float dz;
//     /* f7 45 */ float cdx;
//     /* f6 44 */ float cdy;
//     /* f2 40 */ float cdz;
//     /* s2 18 */ int32 objDist;
//     /* v1 3 */ int32 workMinVolDist;
//     /* v1 3 */ int angle;
//     /* v1 3 */ int quadrant;
//     /* a2 6 */ int qpos;
//     /* v1 3 */ int pan;
//     /* s0 16 */ int volume;
//     {
//         /* f0 38 */ float result;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_Update3dSound);

// /* 00159e80 00000054 */ Signal* SOUND_HandleSignal(/* a0 4 */ Instance *instance, /* s0 16 */ Signal *signal) {
//     /* v0 2 */ int params;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_HandleSignal);

// /* 00159ed8 000000bc */ void MUS_AsyncLoadingCallback(/* a0 4 */ void *dataPtr, /* s1 17 */ void *context, /* s2 18 */ void *context2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", MUS_AsyncLoadingCallback);

// /* 00159f98 00000094 */ void MUS_AsyncLoadingCallback2(/* s0 16 */ void *dataPtr, /* s1 17 */ void *context, /* s2 18 */ void *context2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", MUS_AsyncLoadingCallback2);

// /* 0015a030 0000002c */ void MUS_AsyncLoadingBlockCallback(/* v1 3 */ void *buffer, /* a2 6 */ int length, /* a2 6 */ int memType, /* a3 7 */ FILEREQUEST *filereq) {
//     /* v0 2 */ MUS_LoadingVars *vars;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", MUS_AsyncLoadingBlockCallback);

// /* 0015a060 00000068 */ void MUS_AsyncLoadingAfterBlockCallback(/* a0 4 */ void *dataPtr, /* s0 16 */ void *context, /* a2 6 */ void *context2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", MUS_AsyncLoadingAfterBlockCallback);

// /* 0015a0c8 00000008 */ void MUS_AsyncLoadingCancelCallback(/* a0 4 */ FILEREQUEST *filereq) {}
void MUS_AsyncLoadingCancelCallback(void) {
}

// /* 0015a0d0 000000f4 */ static void StartMusicLoad(/* s0 16 */ MUS_LoadingVars *vars, /* s3 19 */ char *musicName, /* s4 20 */ int instantStart) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", StartMusicLoad);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/Sound", D_002B5288);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/Sound", D_002B52A8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/Sound", D_002B52B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/Sound", D_002B52B8);

// /* 0015a1c8 00000120 */ void SOUND_CheckMusic() {
//     /* s1 17 */ MUS_LoadingVars *varsM;
//     /* s0 16 */ MUS_LoadingVars *varsT;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_CheckMusic);

// /* 0015a2e8 000001c4 */ void SOUND_LoadMusic(/* s0 16 */ char *dynamicMusicName, /* s2 18 */ char *transitionName) {
//     /* s1 17 */ int useDyn;
//     /* v0 2 */ int useTrans;
//     {
//         /* s1 17 */ MUS_LoadingVars *vars;
//     }
//     {
//         /* s1 17 */ MUS_LoadingVars *varsM;
//         /* s3 19 */ MUS_LoadingVars *varsT;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_LoadMusic);

// /* 0015a4b0 000001e0 */ static void SOUND_UpdateReverb() {
//     /* bss 1e92b98 */ static int TargetReverbType;
//     /* bss 1e92b9c */ static int CurrentReverbType;
//     /* data 25c00c */ static int ReverbTypeFader;
//     /* data 25c010 */ static int TargetReverbVolume;
//     /* data 25c014 */ static int CurrentReverbVolume;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_UpdateReverb);

// /* 0015a690 00000078 */ void SOUND_UpdateSound(/* f20 58 */ float time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_UpdateSound);

// /* 0015a708 0000009c */ void SOUND_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_Init);

// /* 0015a7a8 00000008 */ void SOUND_Free() {}
void SOUND_Free(void) {
}

// /* 0015a7b0 00000014 */ void SOUND_SetMusicVariable(/* a0 4 */ int32 variable, /* a1 5 */ int32 value) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetMusicVariable);

// /* 0015a7c8 00000050 */ void SOUND_SetMusicVolume(/* a0 4 */ int newVolume) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetMusicVolume);

// /* 0015a818 0000004c */ void SOUND_SetSfxVolume(/* v1 3 */ int newVolume) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetSfxVolume);

// /* 0015a868 00000020 */ void SOUND_SetVoiceVolume(/* a0 4 */ int newVolume) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetVoiceVolume);

// /* 0015a888 00000050 */ void SOUND_SetSFXReverb(/* s1 17 */ int32 type, /* s0 16 */ int32 volume) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetSFXReverb);

// /* 0015a8d8 0000000c */ int SOUND_GetMonoMode() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_GetMonoMode);

// /* 0015a8e8 00000020 */ void SOUND_SetMonoMode(/* a0 4 */ int useMono) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetMonoMode);

// /* 0015a908 00000024 */ void SOUND_PauseAllSound() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_PauseAllSound);

// /* 0015a930 00000024 */ void SOUND_ResumeAllSound() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_ResumeAllSound);

// /* 0015a958 0000002c */ void SOUND_StopAllSound() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_StopAllSound);

// /* 0015a988 00000064 */ void SOUND_StopMusicSlot(/* a0 4 */ int slotNr) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_StopMusicSlot);

// /* 0015a9f0 00000034 */ void SOUND_StopMusic() {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_StopMusic);

// /* 0015aa28 00000008 */ void SOUND_MusicOff() {}
void SOUND_MusicOff(void) {
}

// /* 0015aa30 00000008 */ void SOUND_MusicOn() {}
void SOUND_MusicOn(void) {
}

// /* 0015aa38 0000001c */ void SOUND_SfxOff() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SfxOff);

// /* 0015aa58 00000008 */ void SOUND_SfxOn() {}
void SOUND_SfxOn(void) {
}

// /* 0015aa60 0000001c */ int SOUND_SndTypeIsPlayingOrRequested(/* a0 4 */ int sfxToneID) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SndTypeIsPlayingOrRequested);

// /* 0015aa80 00000038 */ int SndPlay(/* a0 4 */ int sample) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndPlay);

// /* 0015aab8 0000001c */ void SndEndLoop(/* a0 4 */ int handle) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndEndLoop);

// /* 0015aad8 00000038 */ int SndPlayVolPan(/* a0 4 */ int sample, /* a1 5 */ uint16 vol, /* a2 6 */ uint16 pan, /* f12 50 */ float pitch) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndPlayVolPan);

// /* 0015ab10 00000044 */ int SndUpdateVolPan(/* a0 4 */ int handle, /* a1 5 */ uint16 vol, /* a2 6 */ uint16 pan) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndUpdateVolPan);

// /* 0015ab58 00000044 */ int SndUpdateVolPanPitch(/* a0 4 */ int handle, /* a1 5 */ uint16 vol, /* a2 6 */ uint16 pan, /* f12 50 */ float pitch) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SndUpdateVolPanPitch);

// /* 0015aba0 00000008 */ void SOUND_PlaneShift(/* a0 4 */ int newPlane) {}
void SOUND_PlaneShift(void) {
}

// /* 0015aba8 0000000c */ void SOUND_SetMicInstance(/* a0 4 */ Instance *inst) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetMicInstance);

// /* 0015abb8 00000010 */ void SOUND_SetUnderWater() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_SetUnderWater);

// /* 0015abc8 0000000c */ void SOUND_ResetUnderWater() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/Sound", SOUND_ResetUnderWater);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/Sound", D_002B5308);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/Sound", D_002B5330);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/Sound", D_002B5338);

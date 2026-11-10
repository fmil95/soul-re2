/* Original path: C:\sr2\game\Signal.c */
/* .text 0x00156E50, .data 0x0025BE88, .rodata 0x002B5230, .bss 0x01E92B18 */

#include "Signal.h"

// /* 00156e50 00000024 */ int32 SIGNAL_HandleLightGroup(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleLightGroup);

// /* 00156e78 00000028 */ int32 SIGNAL_HandleCameraAdjust(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCameraAdjust);

// /* 00156ea0 00000028 */ int32 SIGNAL_HandleCamera(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCamera);

// /* 00156ec8 00000014 */ void SIGNAL_RelocateCamera(/* a0 4 */ Signal *signal, /* a1 5 */ int32 offset) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_RelocateCamera);

// /* 00156ee0 00000028 */ int32 SIGNAL_HandleCameraMode(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCameraMode);

// /* 00156f08 00000028 */ int32 SIGNAL_HandleCameraLock(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCameraLock);

// /* 00156f30 00000028 */ int32 SIGNAL_HandleCameraUnlock(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCameraUnlock);

// /* 00156f58 00000028 */ int32 SIGNAL_HandleCameraSmooth(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCameraSmooth);

// /* 00156f80 00000028 */ int32 SIGNAL_HandleCameraTimer(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCameraTimer);

// /* 00156fa8 00000028 */ int32 SIGNAL_HandleCameraSave(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCameraSave);

// /* 00156fd0 00000028 */ int32 SIGNAL_HandleCameraRestore(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCameraRestore);

// /* 00156ff8 00000008 */ int32 SIGNAL_HandleCameraValue(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCameraValue);

// /* 00157000 00000134 */ int32 SIGNAL_HandleStreamLevel(/* s1 17 */ Instance *instance, /* s3 19 */ Signal *signal) {
//     /* 0x0(sp) */ char areaName[16];
//     /* s4 20 */ int signalnum;
//     /* s0 16 */ char *commapos;
//     /* s2 18 */ int32 newStreamID;
//     /* data 25be88 */ static int lastTimeCrossed;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleStreamLevel);

// /* 00157138 0000003c */ int32 SIGNAL_HandleFogNear(/* a0 4 */ Instance *instance, /* s0 16 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleFogNear);

// /* 00157178 0000003c */ int32 SIGNAL_HandleFogFar(/* a0 4 */ Instance *instance, /* s0 16 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleFogFar);

// /* 001571b8 00000014 */ void SIGNAL_RelocateVertexMorph(/* a0 4 */ Signal *signal, /* a1 5 */ int32 offset) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_RelocateVertexMorph);

// /* 001571d0 0000002c */ int32 SIGNAL_HandleCameraShake(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCameraShake);

// /* 00157200 00000028 */ int32 SIGNAL_HandleCallSignal(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCallSignal);

// /* 00157228 0000001c */ int32 SIGNAL_HandleStopPlayerControl(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleStopPlayerControl);

// /* 00157248 00000030 */ int32 SIGNAL_HandleStartPlayerControl(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleStartPlayerControl);

// /* 00157278 00000064 */ int32 SIGNAL_HandleSoundEffect(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleSoundEffect);

// /* 001572e0 00000020 */ int32 SIGNAL_HandleMusicControl(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleMusicControl);

// /* 00157300 0000003c */ int32 SIGNAL_HandleSetMusicVariable(/* a0 4 */ Instance *instance, /* v0 2 */ Signal *signal) {
//     /* 0x0(sp) */ Signal dummy;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleSetMusicVariable);

// /* 00157340 00000008 */ int32 SIGNAL_HandleVoiceControl(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleVoiceControl);

// /* 00157348 00000008 */ int32 SIGNAL_HandleBankChange(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleBankChange);

// /* 00157350 0000003c */ int32 SIGNAL_HandleHideObjectGroup(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {
//     /* v1 3 */ Intro **link;
//     /* a0 4 */ int32 i;
//     /* v0 2 */ int32 num;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleHideObjectGroup);

// /* 00157390 00000044 */ int32 SIGNAL_HandleUnhideObjectGroup(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {
//     /* v1 3 */ Intro **link;
//     /* a0 4 */ int32 i;
//     /* v0 2 */ int32 num;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleUnhideObjectGroup);

// /* 001573d8 00000014 */ void SIGNAL_RelocateCameraSpline(/* a0 4 */ Signal *signal, /* a1 5 */ int32 offset) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_RelocateCameraSpline);

// /* 001573f0 00000060 */ int32 SIGNAL_HandleCameraSpline(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleCameraSpline);

// /* 00157450 00000008 */ int32 SIGNAL_HandleScreenWipe(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleScreenWipe);

// /* 00157458 00000008 */ int32 SIGNAL_HandleBlendStart(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleBlendStart);

// /* 00157460 00000008 */ int32 SIGNAL_HandleScreenWipeColor(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleScreenWipeColor);

// /* 00157468 0000002c */ int32 SIGNAL_HandleSetSlideAngle(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {
//     /* a2 6 */ int32 slideAngle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleSetSlideAngle);

// /* 00157498 0000002c */ int32 SIGNAL_HandleResetSlideAngle(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleResetSlideAngle);

// /* 001574c8 00000068 */ int32 SIGNAL_HandleSetCameraTilt(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {
//     /* v0 2 */ int32 tilt;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleSetCameraTilt);

// /* 00157530 00000030 */ int32 SIGNAL_HandleReverb(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {
//     /* v0 2 */ int32 type;
//     /* v1 3 */ int32 volume;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleReverb);

// /* 00157560 0000002c */ int32 SIGNAL_HandleSetCameraDistance(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {
//     /* a1 5 */ int32 distance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleSetCameraDistance);

// /* 00157590 00000028 */ int32 SIGNAL_HandleObjectHitSignal(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleObjectHitSignal);

// /* 001575b8 00000008 */ int32 SIGNAL_HandleEnd(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleEnd);

// /* 001575c0 00000114 */ void COLLIDE_HandleSignal(/* s2 18 */ Instance *instance, /* s0 16 */ Signal *signal, /* a2 6 */ int32 numSignals, /* a3 7 */ int dontForceDoSignal) {
//     /* v1 3 */ int32 signalNumber;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", COLLIDE_HandleSignal);

// /* 001576d8 00000078 */ int32 SIGNAL_IsStreamSignal(/* a0 4 */ Signal *signal) {
//     /* a3 7 */ int32 result;
//     /* a2 6 */ int32 done;
//     /* v0 2 */ int32 signalNumber;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_IsStreamSignal);

// /* 00157750 00000020 */ void SIGNAL_HandleSignal(/* a0 4 */ Instance *instance, /* a1 5 */ Signal *signal, /* a2 6 */ int dontForceDoSignal) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_HandleSignal);

// /* 00157770 000000dc */ MultiSignal* SIGNAL_RelocateSignal(/* s3 19 */ MultiSignal *multiSignal, /* s6 22 */ int32 offset) {
//     /* s2 18 */ int i;
//     /* s0 16 */ Signal *signal;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_RelocateSignal);

// /* 00157850 000000c8 */ MultiSignal* SIGNAL_FindSignal(/* a0 4 */ Level *level, /* a1 5 */ int32 id) {
//     /* a2 6 */ int i;
//     /* t0 8 */ Signal *signal;
//     /* s0 16 */ MultiSignal *msignal;
//     /* v1 3 */ int32 signalNumber;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_FindSignal);

// /* 00157918 00000068 */ void SIGNAL_OutOfWater(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ StreamUnit *unit;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_OutOfWater);

// /* 00157980 00000068 */ void SIGNAL_InWater(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ StreamUnit *unit;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_InWater);

// /* 001579e8 0000006c */ void SIGNAL_ResetSignals() {
//     /* a2 6 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_ResetSignals);

// /* 00157a58 00000064 */ void SIGNAL_AddSignalToReset(/* a0 4 */ MultiSignal *mSignal) {
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_AddSignalToReset);

// /* 00157ac0 00000064 */ void SIGNAL_UpdateResetSignalArray(/* a0 4 */ Level *oldLevel, /* a1 5 */ Level *newLevel, /* a2 6 */ int32 sizeOfLevel) {
//     /* a1 5 */ int32 offset;
//     /* t0 8 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Signal", SIGNAL_UpdateResetSignalArray);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Signal", D_002B5230);

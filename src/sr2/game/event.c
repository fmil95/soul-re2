/* Original path: C:\sr2\game\event.c */
/* .text 0x00125AC8, .data 0x00256B60, .rodata 0x002B4540, .bss 0x0068E120 */
/* Code from other files was inlined here: math3d.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 256b60 */ extern float gEventStrFrames;
/* data 256b64 */ extern char *gEventStr;
/* data 256b68 */ extern int gEventDebugPage;
/* data 256b6c */ extern int gTraceLevel;
/* data 256b70 */ extern GlobalData gGlobalData;
/* data 256e70 */ extern short int currentSoundStreamEventHandle;
/* data 256e74 */ extern void *ambientstream;
/* data 256e80 */ extern HintSystemStruct gHintSystem;
/* bss 68e120 */ extern int MoviePlayed;
/* bss 68e124 */ extern int MovieToPlay;
/* bss 68e128 */ extern EventSoundStream EventSoundStreams[8];
/* bss 68e168 */ extern char ambientstreamname[64];

// /* 00125ac8 00000008 */ void EVENT_Dummy() {}
void EVENT_Dummy(void) {
}

// /* 00125ad0 00000028 */ void HINT_ResetHint() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", HINT_ResetHint);

// /* 00125af8 00000070 */ void HINT_StartHint(/* a3 7 */ int hintNumber) {
//     /* v0 2 */ int h;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", HINT_StartHint);

// /* 00125b68 00000064 */ void HINT_StopHint() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", HINT_StopHint);

// /* 00125bd0 00000028 */ void HINT_KillSpecificHint(/* a0 4 */ int hintNumber) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", HINT_KillSpecificHint);

// /* 00125bf8 00000024 */ int HINT_GetCurrentHint() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", HINT_GetCurrentHint);

// /* 00125c20 00000230 */ void HINT_ProcessHints() {
//     {
//         /* 0x0(sp) */ char string[128];
//         /* a2 6 */ int32 alpha;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", HINT_ProcessHints);

// /* 00125e50 00000030 */ int MOVIE_PlayIngame(/* a0 4 */ int number) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", MOVIE_PlayIngame);

// /* 00125e80 00000040 */ static void EVENT_InitTerrainMovement() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_InitTerrainMovement);

// /* 00125ec0 00000048 */ void EVENT_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_Init);

// /* 00125f08 00000008 */ int32 EVENT_DebugGetAreaNameFromID(/* a0 4 */ int32 uniqueID, /* a1 5 */ char *areaName) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DebugGetAreaNameFromID);

// /* 00125f10 00000008 */ int32 EVENT_DebugGetObjectNameFromID(/* a0 4 */ int32 uniqueID, /* a1 5 */ char *objectName) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DebugGetObjectNameFromID);

// /* 00125f18 0000006c */ void EVENT_ProcessSoundStreams() {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_ProcessSoundStreams);

// /* 00125f88 000000ec */ int EVENT_CreateSoundStream(/* s1 17 */ char *name) {
//     /* v1 3 */ int i;
//     {
//         /* f20 58 */ float vol;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_CreateSoundStream);

// /* 00126078 00000074 */ int EVENT_DumpSoundStream(/* s2 18 */ int handle) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DumpSoundStream);

// /* 001260f0 00000068 */ void EVENT_PlaySoundStream(/* s2 18 */ int handle) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_PlaySoundStream);

// /* 00126158 000000fc */ void EVENT_PositionSoundStream(/* s5 21 */ int handle, /* s4 20 */ Vector4f *pos, /* s2 18 */ int maxVolume, /* s3 19 */ int minVolDist) {
//     /* s1 17 */ int i;
//     {
//         /* 0x0(sp) */ int leftVolume;
//         /* 0x4(sp) */ int rightVolume;
//         /* f20 58 */ float vol;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_PositionSoundStream);

// /* 00126258 00000078 */ void EVENT_StopSoundStream(/* s2 18 */ int handle) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_StopSoundStream);

// /* 001262d0 00000038 */ int EVENT_AnySoundStreamPlaying() {
//     /* a0 4 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_AnySoundStreamPlaying);

// /* 00126308 0000005c */ int EVENT_IsSoundStreamPlaying(/* a2 6 */ int handle) {
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_IsSoundStreamPlaying);

// /* 00126368 0000005c */ int EVENT_IsSoundStreamCueing(/* a2 6 */ int handle) {
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_IsSoundStreamCueing);

// /* 001263c8 00000118 */ void EVENT_PlayAmbient(/* s0 16 */ char *name, /* a1 5 */ int32 fadetime) {
//     {
//         /* f0 38 */ float vol;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_PlayAmbient);

// /* 001264e0 00000010 */ int EVENT_IsAmbientPlaying() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_IsAmbientPlaying);

// /* 001264f0 00000068 */ void EVENT_UpdateWaterMovement(/* a0 4 */ Level *oldLevel, /* a1 5 */ Level *newLevel, /* a2 6 */ int32 sizeOfLevel) {
//     /* a1 5 */ int32 offset;
//     /* t0 8 */ int32 i;
//     {
//         /* a3 7 */ WaterLevelProcess *curWater;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_UpdateWaterMovement);

// /* 00126558 0000014c */ void EVENT_ProcessMovingWater() {
//     /* a2 6 */ int32 curOffset;
//     /* a3 7 */ int32 i;
//     /* t0 8 */ int32 inUse;
//     {
//         /* a1 5 */ WaterLevelProcess *curWater;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_ProcessMovingWater);

// /* 001266a8 0000002c */ void EVENT_InstanceSplineSet(/* a0 4 */ Instance *instance, /* a1 5 */ int32 frame) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_InstanceSplineSet);

// /* 001266d8 00000298 */ void EVENT_Process() {
//     /* s1 17 */ StreamUnit *unit;
//     /* v1 3 */ int d;
//     /* data 256e78 */ static int gEventDebugLineOffset;
//     {
//         /* s0 16 */ int32 *debugInfo;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_Process);

// /* 00126970 00000080 */ void EVENT_LinkInstanceToBSP(/* a0 4 */ Instance *instance) {
//     {
//         /* a2 6 */ int j;
//         /* a1 5 */ BSPTree *bsp;
//         /* v1 3 */ Terrain *terrain;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_LinkInstanceToBSP);

// /* 001269f0 0000005c */ void EVENT_TextureMorph(/* a0 4 */ BSPTree *bsp, /* a1 5 */ int morph, /* a2 6 */ int time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_TextureMorph);

// /* 00126a50 00000020 */ int EVENT_FP_GreaterThan(/* f12 50 */ float a, /* f13 51 */ float b) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_FP_GreaterThan);

// /* 00126a70 00000020 */ int EVENT_FP_LessThan(/* f12 50 */ float a, /* f13 51 */ float b) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_FP_LessThan);

// /* 00126a90 00000020 */ int EVENT_FP_GreaterEqual(/* f12 50 */ float a, /* f13 51 */ float b) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_FP_GreaterEqual);

// /* 00126ab0 00000020 */ int EVENT_FP_LessEqual(/* f12 50 */ float a, /* f13 51 */ float b) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_FP_LessEqual);

// /* 00126ad0 00000020 */ int EVENT_FP_Equal(/* f12 50 */ float a, /* f13 51 */ float b) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_FP_Equal);

// /* 00126af0 00000020 */ int EVENT_FP_NotEqual(/* f12 50 */ float a, /* f13 51 */ float b) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_FP_NotEqual);

// /* 00126b10 00000020 */ void EVENT_DisplayString(/* a0 4 */ char *str, /* a1 5 */ int time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DisplayString);

// /* 00126b30 0000002c */ void EVENT_ClearAlarm(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 sectionID, /* a2 6 */ uint32 flag) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_ClearAlarm);

// /* 00126b60 0000002c */ void EVENT_SetAlarm(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 sectionID, /* a2 6 */ uint32 flag) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_SetAlarm);

// /* 00126b90 00000008 */ void EVENT_Trace(/* a0 4 */ char *str, /* a1 5 */ int level) {}
void EVENT_Trace(void) {
}

// /* 00126b98 00000054 */ int EVENT_DoorInit(/* s1 17 */ Instance *lock, /* a1 5 */ int32 splineID, /* a2 6 */ int32 cameraSID, /* a3 7 */ int32 cameraTID) {
//     /* s0 16 */ evObjectDoorData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DoorInit);

// /* 00126bf0 00000054 */ int EVENT_DoorAddSpline(/* s1 17 */ Instance *lock, /* a1 5 */ int32 splineID) {
//     /* s0 16 */ evObjectDoorData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DoorAddSpline);

// /* 00126c48 00000044 */ int32 EVENT_Random(/* a0 4 */ int32 a, /* a1 5 */ int32 b) {
//     {
//         /* a2 6 */ uint32 newSeed;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_Random);

// /* 00126c90 0000004c */ int EVENT_DoorAddCamera(/* s1 17 */ Instance *lock, /* a1 5 */ int32 cameraSID, /* a2 6 */ int32 cameraTID) {
//     /* s0 16 */ evObjectDoorData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DoorAddCamera);

// /* 00126ce0 0000000c */ void EVENT_SetBendMode(/* a0 4 */ int vector, /* a1 5 */ int mode) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_SetBendMode);

// /* 00126cf0 000000e8 */ void EVENT_StartWaterMove(/* a0 4 */ BSPTree *bspTree, /* a1 5 */ StreamUnit *unit, /* a2 6 */ int zValueTo, /* a3 7 */ int maxSteps) {
//     /* t1 9 */ int i;
//     /* t0 8 */ WaterLevelProcess *curWater;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_StartWaterMove);

// /* 00126dd8 00000068 */ int EVENT_LinkToParent(/* s1 17 */ Instance *instance, /* a1 5 */ int32 parentID, /* s0 16 */ int32 segment) {
//     /* v0 2 */ Instance *parent;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_LinkToParent);

// /* 00126e40 0000006c */ int EVENT_DynamicLinkToParent(/* s0 16 */ Instance *instance, /* a1 5 */ int32 parentID, /* s1 17 */ int32 segment) {
//     /* a1 5 */ Instance *parent;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_DynamicLinkToParent);

// /* 00126eb0 00000030 */ void EVENT_SetCameraProjDistance(/* a0 4 */ int32 distance, /* a1 5 */ int32 time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_SetCameraProjDistance);

// /* 00126ee0 00000070 */ int EVENT_AttachStartSound(/* s1 17 */ SoundInstance *sound, /* a1 5 */ int32 instanceID, /* s2 18 */ int32 splineID) {
//     /* s0 16 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_AttachStartSound);

// /* 00126f50 00000070 */ int EVENT_AttachEndSound(/* s1 17 */ SoundInstance *sound, /* a1 5 */ int32 instanceID, /* s2 18 */ int32 splineID) {
//     /* s0 16 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/event", EVENT_AttachEndSound);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/event", D_002B4540);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/event", D_002B4548);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/event", D_002B4570);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/event", D_002B4588);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/event", D_002B45A0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/event", D_002B45B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/event", D_002B45B8);

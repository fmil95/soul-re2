/* Original path: C:\sr2\game\g2\AnimG2.c */
/* .text 0x00194688, .bss 0x01E97198 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, g2/AnmCtrlr.c, g2/AnmDecmp.c, g2/AnmIntrp.c, g2/QuatG2.h, g2/anmg2ilf.c, math3d.h */

#include "g2/AnimG2.h"

// /* 00194688 0000006c */ void G2Anim_ClearAlarm(/* s2 18 */ G2Anim *anim, /* s3 19 */ uint32 flag) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_ClearAlarm);

// /* 001946f8 0000006c */ void G2Anim_SetAlarm(/* s2 18 */ G2Anim *anim, /* s3 19 */ uint32 flag) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetAlarm);

// /* 00194768 0000005c */ void G2Anim_ClearCallback(/* s2 18 */ G2Anim *anim) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_ClearCallback);

// /* 001947c8 00000030 */ void G2Anim_ClearSWAlarmTime(/* a0 4 */ G2Anim *anim) {
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_ClearSWAlarmTime);

// /* 001947f8 00000010 */ void G2Anim_DisableRootTranslation(/* a0 4 */ G2Anim *anim) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_DisableRootTranslation);

// /* 00194808 00000010 */ void G2Anim_EnableRootTranslation(/* a0 4 */ G2Anim *anim) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_EnableRootTranslation);

// /* 00194818 00000018 */ G2TimerAtomicUnit G2Anim_GetElapsedTime(/* a0 4 */ G2Anim *anim) {
//     /* v0 2 */ G2AnimSection *section;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_GetElapsedTime);

// /* 00194830 00000018 */ G2AnimInterpInfo* G2Anim_GetInterpInfo(/* a0 4 */ G2Anim *anim) {
//     /* v1 3 */ G2AnimSection *section;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_GetInterpInfo);

// /* 00194848 0000002c */ G2AnimKeyframeNumber G2Anim_GetKeyframeNumber(/* a0 4 */ G2Anim *anim) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_GetKeyframeNumber);

// /* 00194878 00000018 */ G2AnimKeylist* G2Anim_GetKeylist(/* a0 4 */ G2Anim *anim) {
//     /* v1 3 */ G2AnimSection *section;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_GetKeylist);

// /* 00194890 00000018 */ G2AnimKeylistID G2Anim_GetKeylistID(/* a0 4 */ G2Anim *anim) {
//     /* v1 3 */ G2AnimSection *section;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_GetKeylistID);

// /* 001948a8 00000040 */ void G2Anim_GetRootMotionOverInterval(/* a0 4 */ G2Anim *anim, /* f12 50 */ G2TimerAtomicUnit intervalStart, /* f13 51 */ G2TimerAtomicUnit intervalEnd, /* a1 5 */ Vector4f *motionVector) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_GetRootMotionOverInterval);

// /* 001948e8 0000002c */ G2AnimKeyframeNumber G2Anim_GetStoredKeyframeNumber(/* a0 4 */ G2Anim *anim) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_GetStoredKeyframeNumber);

// /* 00194918 0000009c */ void G2Anim_InterpToKeylist(/* s2 18 */ G2Anim *anim, /* s5 21 */ G2AnimKeylist *keylist, /* s4 20 */ G2AnimKeylistID keylistID, /* f20 58 */ G2TimerAtomicUnit duration, /* s3 19 */ G2AnimFxHeader *fxList) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_InterpToKeylist);

// /* 001949b8 000000ac */ void G2Anim_InterpToKeylistAtTime(/* s2 18 */ G2Anim *anim, /* s5 21 */ G2AnimKeylist *keylist, /* s4 20 */ G2AnimKeylistID keylistID, /* f21 59 */ G2TimerAtomicUnit targetTime, /* f20 58 */ G2TimerAtomicUnit duration, /* s3 19 */ G2AnimFxHeader *fxList) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_InterpToKeylistAtTime);

// /* 00194a68 000000ac */ void G2Anim_InterpToKeylistFrame(/* s2 18 */ G2Anim *anim, /* s6 22 */ G2AnimKeylist *keylist, /* s5 21 */ G2AnimKeylistID keylistID, /* s4 20 */ G2AnimKeyframeNumber targetFrame, /* f20 58 */ G2TimerAtomicUnit duration, /* s3 19 */ G2AnimFxHeader *fxList) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_InterpToKeylistFrame);

// /* 00194b18 00000020 */ G2Bool G2Anim_IsAlarmSet(/* a0 4 */ G2Anim *anim, /* a1 5 */ uint32 flag) {
//     /* v1 3 */ G2AnimSection *section;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_IsAlarmSet);

// /* 00194b38 00000008 */ G2Bool G2Anim_IsInInterpolation(/* a0 4 */ G2Anim *anim) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_IsInInterpolation);

// /* 00194b40 00000008 */ G2Bool G2Anim_IsPaused(/* a0 4 */ G2Anim *anim) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_IsPaused);

// /* 00194b48 0000006c */ void G2Anim_JumpToTime(/* s2 18 */ G2Anim *anim, /* f20 58 */ G2TimerAtomicUnit targetTime) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_JumpToTime);

// /* 00194bb8 0000005c */ void G2Anim_NextKeyframe(/* s2 18 */ G2Anim *anim) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_NextKeyframe);

// /* 00194c18 0000006c */ void G2Anim_SetAlphaTable(/* s2 18 */ G2Anim *anim, /* s3 19 */ G2AnimAlphaTable *table) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetAlphaTable);

// /* 00194c88 00000034 */ void G2Anim_SetCallback(/* a0 4 */ G2Anim *anim, /* a1 5 */ G2AnimCallback callback, /* a2 6 */ void *data) {
//     /* a3 7 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetCallback);

// /* 00194cc0 00000030 */ void G2Anim_SetElapsedTime(/* a0 4 */ G2Anim *anim, /* f12 50 */ G2TimerAtomicUnit elapsedTime) {
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetElapsedTime);

// /* 00194cf0 00000018 */ void G2Anim_SetFlags(/* a0 4 */ G2Anim *anim, /* a1 5 */ uint8 newFlags) {
//     /* v0 2 */ G2AnimSection *section;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetFlags);

// /* 00194d08 0000002c */ void G2Anim_SetInterpInfo(/* a0 4 */ G2Anim *anim, /* a1 5 */ G2AnimInterpInfo *newInfoPtr) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetInterpInfo);

// /* 00194d38 0000006c */ void G2Anim_SetKeyframeNumber(/* s2 18 */ G2Anim *anim, /* s3 19 */ G2AnimKeyframeNumber frame) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetKeyframeNumber);

// /* 00194da8 0000005c */ void G2Anim_SetKeyframeToLast(/* s2 18 */ G2Anim *anim) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetKeyframeToLast);

// /* 00194e08 0000005c */ void G2Anim_SetLooping(/* s2 18 */ G2Anim *anim) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetLooping);

// /* 00194e68 0000007c */ void G2Anim_SetLoopRangeByKeys(/* s2 18 */ G2Anim *anim, /* s4 20 */ G2AnimKeyframeNumber startKey, /* s3 19 */ G2AnimKeyframeNumber endKey) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetLoopRangeByKeys);

// /* 00194ee8 00000034 */ void G2Anim_SetLoopRangeByTime(/* a0 4 */ G2Anim *anim, /* f12 50 */ G2TimerAtomicUnit startTime, /* f13 51 */ G2TimerAtomicUnit endTime) {
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetLoopRangeByTime);

// /* 00194f20 0000005c */ void G2Anim_SetNoLooping(/* s2 18 */ G2Anim *anim) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetNoLooping);

// /* 00194f80 0000005c */ void G2Anim_SetPaused(/* s2 18 */ G2Anim *anim) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetPaused);

// /* 00194fe0 00000030 */ void G2Anim_SetSpeedAdjustment(/* a0 4 */ G2Anim *anim, /* f12 50 */ float adjustment) {
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetSpeedAdjustment);

// /* 00195010 00000030 */ void G2Anim_SetSWAlarmTime(/* a0 4 */ G2Anim *anim, /* a1 5 */ G2TimerAtomicUnit *timeTable) {
//     /* a2 6 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetSWAlarmTime);

// /* 00195040 0000005c */ void G2Anim_SetUnpaused(/* s2 18 */ G2Anim *anim) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetUnpaused);

// /* 001950a0 0000004c */ void G2Anim_SwitchControllerType(/* s0 16 */ G2Anim *anim, /* s1 17 */ int segNumber, /* a2 6 */ int oldType, /* s2 18 */ int newType) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SwitchControllerType);

// /* 001950f0 0000008c */ void G2Anim_SwitchToKeylist(/* s2 18 */ G2Anim *anim, /* s5 21 */ G2AnimKeylist *keylist, /* s4 20 */ G2AnimKeylistID keylistID, /* s3 19 */ G2AnimFxHeader *fxList) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SwitchToKeylist);

// /* 00195180 0000009c */ void G2Anim_SwitchToKeylistAtTime(/* s2 18 */ G2Anim *anim, /* s5 21 */ G2AnimKeylist *keylist, /* s4 20 */ G2AnimKeylistID keylistID, /* f20 58 */ G2TimerAtomicUnit targetTime, /* s3 19 */ G2AnimFxHeader *fxList) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SwitchToKeylistAtTime);

// /* 00195220 0000009c */ void G2Anim_SwitchToKeylistFrame(/* s2 18 */ G2Anim *anim, /* s6 22 */ G2AnimKeylist *keylist, /* s5 21 */ G2AnimKeylistID keylistID, /* s4 20 */ G2AnimKeyframeNumber targetFrame, /* s3 19 */ G2AnimFxHeader *fxList) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SwitchToKeylistFrame);

// /* 001952c0 0000006c */ void G2Anim_UpdateOverInterval(/* s2 18 */ G2Anim *anim, /* f20 58 */ G2TimerAtomicUnit interval) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_UpdateOverInterval);

// /* 00195330 00000030 */ int G2AnimKeylist_GetFPS(/* a0 4 */ G2AnimKeylist *keylist) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimKeylist_GetFPS);

// /* 00195360 0000002c */ G2TimerAtomicUnit G2AnimKeylist_GetDuration(/* a0 4 */ G2AnimKeylist *keylist) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimKeylist_GetDuration);

// /* 00195390 00000038 */ G2AnimKeyframeNumber G2AnimKeylist_GetKeyframeCount(/* a0 4 */ G2AnimKeylist *keylist) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimKeylist_GetKeyframeCount);

// /* 001953c8 00000014 */ void G2AnimSection_ClearAlarm(/* a0 4 */ G2AnimSection *section, /* a1 5 */ uint32 flag) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_ClearAlarm);

// /* 001953e0 00000010 */ void G2AnimSection_SetAlarm(/* a0 4 */ G2AnimSection *section, /* a1 5 */ uint32 flag) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SetAlarm);

// /* 001953f0 0000000c */ void G2AnimSection_ClearCallback(/* a0 4 */ G2AnimSection *section) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_ClearCallback);

// /* 00195400 0000006c */ G2AnimKeyframeNumber G2AnimSection_GetKeyframeNumber(/* s0 16 */ G2AnimSection *section) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_GetKeyframeNumber);

// /* 00195470 0000002c */ G2AnimKeyframeNumber G2AnimSection_GetStoredKeyframeNumber(/* a0 4 */ G2AnimSection *section) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_GetStoredKeyframeNumber);

// /* 001954a0 00000024 */ void G2AnimSection_InterpToKeylist(/* a0 4 */ G2AnimSection *section, /* a1 5 */ G2AnimKeylist *keylist, /* a2 6 */ G2AnimKeylistID keylistID, /* f13 51 */ G2TimerAtomicUnit duration, /* a3 7 */ G2AnimFxHeader *fxList) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_InterpToKeylist);

// /* 001954c8 00000034 */ void G2AnimSection_InterpToKeylistFrame(/* a0 4 */ G2AnimSection *section, /* a1 5 */ G2AnimKeylist *keylist, /* a2 6 */ G2AnimKeylistID keylistID, /* a3 7 */ G2AnimKeyframeNumber targetFrame, /* f12 50 */ G2TimerAtomicUnit duration, /* t0 8 */ G2AnimFxHeader *fxList) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_InterpToKeylistFrame);

// /* 00195500 00000028 */ G2Bool G2AnimSection_IsInInterpolation(/* a0 4 */ G2AnimSection *section) {
//     /* v0 2 */ G2AnimInterpInfo *interpInfo;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_IsInInterpolation);

// /* 00195528 00000050 */ G2TimerAtomicUnit G2AnimSection_NextKeyframe(/* s0 16 */ G2AnimSection *section) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_NextKeyframe);

// /* 00195578 00000014 */ void G2AnimSection_SetAlphaTable(/* a0 4 */ G2AnimSection *section, /* a1 5 */ G2AnimAlphaTable *table) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SetAlphaTable);

// /* 00195590 0000002c */ void G2AnimSection_SetInterpInfo(/* a0 4 */ G2AnimSection *section, /* a1 5 */ G2AnimInterpInfo *newInfoPtr) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SetInterpInfo);

// /* 001955c0 0000004c */ void G2AnimSection_SetKeyframeNumber(/* s0 16 */ G2AnimSection *section, /* a1 5 */ G2AnimKeyframeNumber keyNumber) {
//     /* f20 58 */ G2TimerAtomicUnit targetTime;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SetKeyframeNumber);

// /* 00195610 00000050 */ void G2AnimSection_SetKeyframeToLast(/* s0 16 */ G2AnimSection *section) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SetKeyframeToLast);

// /* 00195660 0000003c */ void G2AnimSection_SetLooping(/* s0 16 */ G2AnimSection *section) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SetLooping);

// /* 001956a0 00000030 */ void G2AnimSection_SetLoopRangeAll(/* s0 16 */ G2AnimSection *section) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SetLoopRangeAll);

// /* 001956d0 00000038 */ void G2AnimSection_SetLoopRangeByKeys(/* a0 4 */ G2AnimSection *section, /* a1 5 */ G2AnimKeyframeNumber startKey, /* a2 6 */ G2AnimKeyframeNumber endKey) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SetLoopRangeByKeys);

// /* 00195708 00000010 */ void G2AnimSection_SetNoLooping(/* a0 4 */ G2AnimSection *section) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SetNoLooping);

// /* 00195718 00000010 */ void G2AnimSection_SetPaused(/* a0 4 */ G2AnimSection *section) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SetPaused);

// /* 00195728 00000010 */ void G2AnimSection_SetUnpaused(/* a0 4 */ G2AnimSection *section) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SetUnpaused);

// /* 00195738 00000020 */ void G2AnimSection_SwitchToKeylist(/* a0 4 */ G2AnimSection *section, /* a1 5 */ G2AnimKeylist *keylist, /* a2 6 */ G2AnimKeylistID keylistID, /* a3 7 */ G2AnimFxHeader *fxList) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SwitchToKeylist);

// /* 00195758 00000030 */ void G2AnimSection_SwitchToKeylistFrame(/* a0 4 */ G2AnimSection *section, /* a1 5 */ G2AnimKeylist *keylist, /* a2 6 */ G2AnimKeylistID keylistID, /* a3 7 */ G2AnimKeyframeNumber targetFrame, /* t0 8 */ G2AnimFxHeader *fxList) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SwitchToKeylistFrame);

// /* 00195788 00000094 */ static void _G2Anim_DecompressChannel_Linear(/* a0 4 */ G2AnimDecompressChannelInfo *dcInfo, /* t1 9 */ G2AnimChanStatus *status) {
//     /* a2 6 */ float *chanData;
//     /* a3 7 */ uint8 *chanLen;
//     /* v1 3 */ int rangeLength;
//     /* t0 8 */ int targetKey;
//     /* a1 5 */ int chanLength;
//     /* f3 41 */ float rangeBase;
//     /* f1 39 */ float rangeOffset;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_DecompressChannel_Linear);

// /* 00195820 00000034 */ static void _G2Anim_InitializeChannel_Linear(/* a0 4 */ G2AnimDecompressChannelInfo *dcInfo, /* a1 5 */ G2AnimChanStatus *status) {
//     /* v0 2 */ float *chanData;
//     /* a2 6 */ int chanLength;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_InitializeChannel_Linear);

// /* 00195858 00000038 */ void G2Anim_AttachControllerToSeg(/* s0 16 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_AttachControllerToSeg);

// /* 00195890 00000094 */ void G2Anim_DetachControllerFromSeg(/* s0 16 */ G2Anim *anim, /* s1 17 */ int segNumber, /* s2 18 */ int type) {
//     /* v0 2 */ G2AnimController *controller;
//     /* 0x0(sp) */ uint16 *controllerNextPtr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_DetachControllerFromSeg);

// /* 00195928 00000044 */ void G2Anim_DetachAllControllersFromSeg(/* s1 17 */ G2Anim *anim, /* s0 16 */ int segNumber) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_DetachAllControllersFromSeg);

// /* 00195970 00000038 */ void G2Anim_DetachAllControllers(/* s0 16 */ G2Anim *anim) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_DetachAllControllers);

// /* 001959a8 000000d8 */ void G2Anim_EnableController(/* s2 18 */ G2Anim *anim, /* s1 17 */ int segNumber, /* a2 6 */ int type) {
//     /* s0 16 */ G2AnimController *controller;
//     /* v1 3 */ Matrixf *segMatrix;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_EnableController);

// /* 00195a80 00000030 */ void G2Anim_EnableAllControllers(/* s0 16 */ G2Anim *anim) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_EnableAllControllers);

// /* 00195ab0 00000040 */ void G2Anim_DisableController(/* s0 16 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type) {
//     /* v0 2 */ G2AnimController *controller;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_DisableController);

// /* 00195af0 00000030 */ void G2Anim_DisableAllControllers(/* s0 16 */ G2Anim *anim) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_DisableAllControllers);

// /* 00195b20 00000114 */ void G2Anim_InterpDisableController(/* s2 18 */ G2Anim *anim, /* s4 20 */ int segNumber, /* s3 19 */ int type, /* f20 58 */ G2TimerAtomicUnit duration) {
//     /* s1 17 */ G2AnimController *controller;
//     /* 0x0(sp) */ Vector4f zeroVector;
//     /* 0x10(sp) */ Vector4f targetQuat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_InterpDisableController);

// /* 00195c38 00000020 */ G2Bool G2Anim_DoesControllerExist(/* a0 4 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_DoesControllerExist);

// /* 00195c58 0000003c */ G2Bool G2Anim_IsControllerActive(/* a0 4 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type) {
//     /* v0 2 */ G2AnimController *controller;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_IsControllerActive);

// /* 00195c98 0000004c */ G2Bool G2Anim_IsControllerInterpolating(/* a0 4 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type) {
//     /* v0 2 */ G2AnimController *controller;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_IsControllerInterpolating);

// /* 00195ce8 0000001c */ G2AnimController* G2Anim_GetController(/* a0 4 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_GetController);

// /* 00195d08 00000118 */ void G2Anim_GetControllerCurrentInterpVector(/* s1 17 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type, /* s0 16 */ Vector4f *vector) {
//     /* v1 3 */ G2AnimController *controller;
//     /* v1 3 */ Matrixf *segMatrix;
//     {
//         /* s0 16 */ Vector4f *dest;
//     }
//     {
//         /* s0 16 */ Vector4f *dest;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_GetControllerCurrentInterpVector);

// /* 00195e20 00000028 */ void G2Anim_SetControllerAlphaTable(/* a0 4 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type, /* s0 16 */ G2AnimAlphaTable *newTable) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetControllerAlphaTable);

// /* 00195e48 00000028 */ void G2Anim_SetControllerCallbackData(/* a0 4 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type, /* s0 16 */ void *callbackData) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetControllerCallbackData);

// /* 00195e70 00000034 */ void G2Anim_SetControllerAngleOrder(/* a0 4 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type, /* s0 16 */ int order) {
//     /* v0 2 */ G2AnimController *controller;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetControllerAngleOrder);

// /* 00195ea8 00000044 */ void G2Anim_SetController_Vector(/* a0 4 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type, /* s0 16 */ Vector4f *vector) {
//     /* v0 2 */ G2AnimController *controller;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetController_Vector);

// /* 00195ef0 00000038 */ void G2Anim_SetController_Function(/* a0 4 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type, /* s1 17 */ G2AnimControllerFn function, /* s0 16 */ void *fnData) {
//     /* v0 2 */ G2AnimController *controller;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetController_Function);

// /* 00195f28 00000144 */ void G2Anim_SetInterpController_Vector(/* s1 17 */ G2Anim *anim, /* s4 20 */ int segNumber, /* s5 21 */ int type, /* s3 19 */ Vector4f *vector, /* f21 59 */ G2TimerAtomicUnit duration) {
//     /* s2 18 */ G2AnimController *controller;
//     /* 0x0(sp) */ G2EulerAngles eulerVector;
//     /* s0 16 */ Vector4f *base;
//     /* s1 17 */ Vector4f *offset;
//     /* 0x10(sp) */ Vector4f quat;
//     {
//         /* f20 58 */ float fdur;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetInterpController_Vector);

// /* 00196070 00000068 */ void G2Anim_SetInterpController_Matrix(/* s1 17 */ G2Anim *anim, /* s2 18 */ int segNumber, /* s0 16 */ int type, /* a3 7 */ float *matrix[4], /* f20 58 */ G2TimerAtomicUnit duration) {
//     /* 0x0(sp) */ Vector4f quat;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetInterpController_Matrix);

// /* 001960d8 00000074 */ void G2Anim_SetInterpController_Quat(/* s1 17 */ G2Anim *anim, /* a1 5 */ int segNumber, /* a2 6 */ int type, /* s2 18 */ Vector4f *quat, /* f20 58 */ G2TimerAtomicUnit duration) {
//     /* s0 16 */ G2AnimController *controller;
//     {
//         /* s2 18 */ Vector4f *source;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SetInterpController_Quat);

// /* 00196150 00000078 */ static void _G2Anim_ApplyControllersToStoredFrame(/* s2 18 */ G2Anim *anim) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_ApplyControllersToStoredFrame);

// /* 001961c8 00000134 */ static void _G2Anim_BuildTransformsWithControllers(/* s4 20 */ G2Anim *anim) {
//     /* s3 19 */ Segment *segment;
//     /* s1 17 */ G2AnimController *controller;
//     /* s2 18 */ Matrixf *segMatrix;
//     /* a1 5 */ Matrixf *parentMatrix;
//     /* a2 6 */ G2Bool bRootTransUpdated;
//     /* s0 16 */ int segIndex;
//     /* s5 21 */ int segCount;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_BuildTransformsWithControllers);

// /* 00196300 0000025c */ static void _G2Anim_BuildSegTransformWithControllers(/* s0 16 */ float *segMatrix[4], /* s2 18 */ float *parentMatrix[4], /* s1 17 */ G2AnimController *controller, /* s7 23 */ G2Bool bRootTransUpdated, /* s5 21 */ int segIndex) {
//     /* s3 19 */ G2AnimSegValue *segValue;
//     /* s4 20 */ uint32 flags;
//     {
//         /* s0 16 */ float *m[4];
//     }
//     {
//         /* s2 18 */ float *mat1[4];
//         /* s0 16 */ float *mat2[4];
//         /* s0 16 */ float *m4[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* s0 16 */ float *matrix[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             /* BADREGISTER -1 */ Vector4fr m2;
//             /* BADREGISTER -1 */ Vector4fr m1;
//             /* BADREGISTER -1 */ Vector4fr m0;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//     }
//     {
//         /* s2 18 */ float *matrix[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             /* BADREGISTER -1 */ Vector4fr m2;
//             /* BADREGISTER -1 */ Vector4fr m1;
//             /* BADREGISTER -1 */ Vector4fr m0;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_BuildSegTransformWithControllers);

// /* 00196560 00000318 */ static uint32 _G2AnimController_ApplyToSegValue(/* t0 8 */ G2AnimController *controller, /* s0 16 */ G2AnimSegValue *segValue, /* s1 17 */ float *segMatrix[4], /* s2 18 */ float *parentMatrix[4]) {
//     /* 0x0(sp) */ Matrixf tempMatrix;
//     /* 0x40(sp) */ Vector4f tempVector;
//     /* s3 19 */ uint32 flags;
//     {
//         /* s2 18 */ float *mat1[4];
//         /* s1 17 */ float *mat2[4];
//         /* s1 17 */ float *m4[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* s1 17 */ float *mat2[4];
//         /* s1 17 */ float *m4[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimController_ApplyToSegValue);

// /* 00196878 00000158 */ static void _G2Anim_UpdateControllers(/* s1 17 */ G2Anim *anim) {
//     /* s0 16 */ G2AnimController *controller;
//     /* v0 2 */ G2AnimSection *section;
//     /* f20 58 */ G2TimerAtomicUnit elapsedTime;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_UpdateControllers);

// /* 001969d0 00000050 */ static void _G2Anim_CopyVectorWithOrder(/* a0 4 */ Vector4f *sourceVector, /* a1 5 */ G2EulerAngles *destVector, /* a2 6 */ int order) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_CopyVectorWithOrder);

// /* 00196a20 000002b8 */ static void _G2AnimSection_ApplyControllersToStoredFrame(/* s0 16 */ G2AnimSection *section) {
//     /* s7 23 */ G2Anim *anim;
//     /* s0 16 */ G2AnimController *controller;
//     /* s1 17 */ G2AnimSegValue *segValue;
//     /* s3 19 */ Segment *segment;
//     /* 0x0(sp) */ Matrixf segMatrix;
//     /* 0x40(sp) */ Matrixf parentMatrix;
//     /* 0x80(sp) */ Matrixf invParentMatrix;
//     /* 0xc0(sp) */ G2EulerAngles eulerAngles;
//     /* s2 18 */ int segIndex;
//     /* 0xe0(sp) */ int segCount;
//     {
//         /* BADREGISTER -1 */ Vector4fr _m12;
//         /* BADREGISTER -1 */ Vector4fr _m11;
//         /* BADREGISTER -1 */ Vector4fr _m10;
//         /* BADREGISTER -1 */ Vector4fr _m02;
//         /* BADREGISTER -1 */ Vector4fr _m01;
//         /* BADREGISTER -1 */ Vector4fr _m00;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp22;
//         /* BADREGISTER -1 */ Vector4fr temp21;
//         /* BADREGISTER -1 */ Vector4fr temp20;
//     }
//     {
//         /* 0xd0(sp) */ Vector4f tempQuat;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimSection_ApplyControllersToStoredFrame);

// /* 00196cd8 00000178 */ static uint32 _G2AnimController_ApplyWorldToParentMatrix(/* a0 4 */ G2AnimController *controller, /* s0 16 */ float *parentMatrix[4]) {
//     /* 0x0(sp) */ Matrixf tempMatrix;
//     /* 0x40(sp) */ Vector4f tempVector;
//     {
//         /* s0 16 */ float *mat2[4];
//         /* s0 16 */ float *m4[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* s0 16 */ float *m[4];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimController_ApplyWorldToParentMatrix);

// /* 00196e50 000000e0 */ static void _G2AnimController_GetMatrix(/* s0 16 */ G2AnimController *controller, /* s1 17 */ float *matrix[4]) {
//     /* 0x0(sp) */ Vector4f tempQuat;
//     {
//         /* 0x10(sp) */ Vector4f tempVector;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimController_GetMatrix);

// /* 00196f30 00000048 */ static void _G2AnimController_GetVector(/* a0 4 */ G2AnimController *controller, /* a1 5 */ Vector4f *vector) {
//     {
//         /* a1 5 */ Vector4f *dest;
//     }
//     {
//         /* a1 5 */ Vector4f *dest;
//         /* a1 5 */ Vector4f *base;
//         {
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimController_GetVector);

// /* 00196f78 00000060 */ static G2AnimController* _G2Anim_FindController(/* s2 18 */ G2Anim *anim, /* s0 16 */ int segNumber, /* s1 17 */ int type) {
//     /* v0 2 */ G2AnimController *controller;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_FindController);

// /* 00196fd8 0000015c */ static void _G2Anim_MergeControllerLists(/* a0 4 */ uint16 *srcListPtr, /* a1 5 */ uint16 *destListPtr) {
//     /* a3 7 */ G2AnimController *srcController;
//     /* a0 4 */ G2AnimController *destController;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_MergeControllerLists);

// /* 00197138 0000006c */ static G2AnimController* _G2AnimController_Create(/* s2 18 */ int segNumber, /* s1 17 */ int type) {
//     /* s0 16 */ G2AnimController *controller;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimController_Create);

// /* 001971a8 00000068 */ static G2AnimController* _G2AnimController_Destroy(/* a0 4 */ G2AnimController *controller) {
//     /* s0 16 */ int nextControllerIndex;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimController_Destroy);

// /* 00197210 000000d0 */ static void _G2AnimController_InsertIntoList(/* a3 7 */ G2AnimController *controller, /* t0 8 */ uint16 *listPtr) {
//     /* a0 4 */ G2AnimController *testController;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimController_InsertIntoList);

// /* 001972e0 00000110 */ static void _G2AnimController_GetCurrentInterpQuat(/* s0 16 */ G2AnimController *controller, /* a3 7 */ G2Anim *anim, /* s1 17 */ Vector4f *quat) {
//     /* 0x0(sp) */ G2EulerAngles eulerVector;
//     {
//         /* s1 17 */ Vector4f *quat;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimController_GetCurrentInterpQuat);

// /* 001973f0 000000b8 */ static void _G2AnimController_GetSimpleWorldRotQuat(/* a0 4 */ G2AnimController *controller, /* a1 5 */ G2Anim *anim, /* s1 17 */ Vector4f *quat) {
//     /* v1 3 */ Segment *segment;
//     /* s0 16 */ Matrixf *parentMatrix;
//     /* 0x0(sp) */ Matrixf segMatrix;
//     /* a0 4 */ int segNumber;
//     {
//         /* s0 16 */ float *mat1[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimController_GetSimpleWorldRotQuat);

// /* 001974a8 0000007c */ static G2AnimController* _G2AnimControllerST_FindInList(/* t0 8 */ int segNumber, /* a1 5 */ int type, /* a2 6 */ uint16 *listPtr) {
//     /* a2 6 */ G2AnimController *controller;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimControllerST_FindInList);

// /* 00197528 00000090 */ static G2AnimController* _G2AnimControllerST_FindPtrInList(/* t0 8 */ int segNumber, /* a1 5 */ int type, /* t1 9 */ uint16 **listPtrPtr) {
//     /* a3 7 */ G2AnimController *controller;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimControllerST_FindPtrInList);

// /* 001975b8 000000e8 */ static void _G2AnimControllerST_DestroyAllInList(/* s0 16 */ int segNumber, /* s1 17 */ uint16 *listPtr) {
//     /* a0 4 */ G2AnimController *controller;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimControllerST_DestroyAllInList);

// /* 001976a0 000000d4 */ static G2AnimController* _G2AnimControllerST_RemoveFromList(/* t0 8 */ int segNumber, /* a1 5 */ int type, /* a3 7 */ uint16 *listPtr) {
//     /* a2 6 */ G2AnimController *controller;
//     /* a1 5 */ G2AnimController *stepController;
//     /* a0 4 */ G2AnimController *nextController;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimControllerST_RemoveFromList);

// /* 00197778 0000038c */ void G2AnimSection_InterpToKeylistAtTime(/* s1 17 */ G2AnimSection *section, /* s5 21 */ G2AnimKeylist *keylist, /* s6 22 */ G2AnimKeylistID keylistID, /* f21 59 */ G2TimerAtomicUnit targetTime, /* f22 60 */ G2TimerAtomicUnit duration, /* s7 23 */ G2AnimFxHeader *fxList) {
//     /* s3 19 */ G2Anim *anim;
//     /* s4 20 */ G2AnimInterpInfo *interpInfo;
//     /* v1 3 */ G2AnimInterpStateBlock *stateBlockList;
//     /* v0 2 */ G2AnimQuatInfo *quatInfo;
//     /* s0 16 */ uint32 alarmFlags;
//     /* f20 58 */ G2TimerAtomicUnit elapsedTime;
//     /* a0 4 */ int quatInfoChunkCount;
//     /* s2 18 */ int segCount;
//     {
//         /* 0x0(sp) */ Vector4f motionVector;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_InterpToKeylistAtTime);

// /* 00197b08 00000138 */ static void _G2AnimSection_UpdateStoredFrameFromQuat(/* s4 20 */ G2AnimSection *section) {
//     /* s1 17 */ G2AnimSegValue *segValue;
//     /* s0 16 */ G2AnimInterpInfo *interpInfo;
//     /* s2 18 */ G2AnimInterpStateBlock *stateBlockList;
//     /* s0 16 */ G2AnimQuatInfo *quatInfo;
//     /* f20 58 */ float alpha;
//     /* 0x0(sp) */ Vector4f newQuat;
//     /* s5 21 */ int quatInfoChunkCount;
//     /* s3 19 */ int segCount;
//     {
//         /* f20 58 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
//     {
//         /* f20 58 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimSection_UpdateStoredFrameFromQuat);

// /* 00197c40 000000e8 */ static void _G2AnimSection_InterpStateToQuat(/* v0 2 */ G2AnimSection *section) {
//     /* s0 16 */ G2AnimInterpInfo *interpInfo;
//     /* s1 17 */ G2AnimInterpStateBlock *stateBlockList;
//     /* s0 16 */ G2AnimQuatInfo *quatInfo;
//     /* f20 58 */ float alpha;
//     /* 0x0(sp) */ Vector4f newQuat;
//     /* s3 19 */ int quatInfoChunkCount;
//     /* s2 18 */ int segCount;
//     {
//         /* s0 16 */ Vector4f *dest;
//     }
//     {
//         /* f20 58 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
//     {
//         /* f20 58 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimSection_InterpStateToQuat);

// /* 00197d28 0000013c */ static void _G2AnimSection_SegValueToQuat(/* a0 4 */ G2AnimSection *section, /* s5 21 */ int zeroOne) {
//     /* s1 17 */ G2AnimSegValue *segValue;
//     /* a3 7 */ G2AnimInterpInfo *interpInfo;
//     /* s3 19 */ G2AnimInterpStateBlock *stateBlockList;
//     /* s0 16 */ G2AnimQuatInfo *quatInfo;
//     /* 0x0(sp) */ G2EulerAngles preQuat;
//     /* s4 20 */ int quatInfoChunkCount;
//     /* s2 18 */ int segCount;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimSection_SegValueToQuat);

// /* 00197e68 00000098 */ static G2AnimInterpStateBlock* _G2Anim_AllocateInterpStateBlockList(/* a0 4 */ G2AnimSection *section) {
//     /* s2 18 */ G2AnimInterpInfo *interpInfo;
//     /* s1 17 */ G2AnimInterpStateBlock *newBlock;
//     /* s0 16 */ int segCount;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_AllocateInterpStateBlockList);

// /* 00197f00 0000004c */ static void _G2Anim_FreeInterpStateBlockList(/* a0 4 */ G2AnimInterpStateBlock *block) {
//     /* s0 16 */ G2AnimInterpStateBlock *nextBlock;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_FreeInterpStateBlockList);

// /* 00197f50 0000007c */ G2Bool G2Anim_Install() {
//     /* v1 3 */ G2AnimController *dummyController;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_Install);

// /* 00197fd0 0000005c */ void G2Anim_ResetInternalState() {
//     /* v0 2 */ G2AnimController *dummyController;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_ResetInternalState);

// /* 00198030 00000050 */ void G2Anim_UnInstall() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_UnInstall);

// /* 00198080 0000009c */ void G2Anim_Init(/* s1 17 */ G2Anim *anim, /* s2 18 */ _Model *modelData) {
//     /* v0 2 */ int sectionID;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_Init);

// /* 00198120 000000a0 */ G2AnimSection* G2Anim_AddSection(/* s1 17 */ G2Anim *anim, /* s2 18 */ int firstSegID, /* s3 19 */ int segCount) {
//     /* s0 16 */ G2AnimSection *section;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_AddSection);

// /* 001981c0 0000009c */ void G2Anim_Free(/* s3 19 */ G2Anim *anim) {
//     /* s2 18 */ int sectionID;
//     /* s0 16 */ G2AnimInterpInfo *interpInfo;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_Free);

// /* 00198260 00000080 */ void G2Anim_Restore(/* s2 18 */ G2Anim *anim) {
//     /* s1 17 */ int sectionID;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_Restore);

// /* 001982e0 000000ac */ void G2Anim_BuildTransforms(/* s0 16 */ G2Anim *anim) {
//     {
//         /* s0 16 */ Vector4f *vector;
//     }
//     {
//         /* s0 16 */ Vector4f *source;
//     }
//     {
//         /* s0 16 */ Vector4f *vector;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_BuildTransforms);

// /* 00198390 00000124 */ void G2Anim_UpdateStoredFrame(/* s2 18 */ G2Anim *anim) {
//     /* s0 16 */ G2AnimSection *section;
//     /* f20 58 */ G2TimerAtomicUnit storedTime;
//     /* f21 59 */ G2TimerAtomicUnit elapsedTime;
//     /* 0x0(sp) */ Vector4f motionVector;
//     /* s1 17 */ int sectionCount;
//     /* v0 2 */ G2AnimInterpInfo *interpInfo;
//     {
//         /* s2 18 */ Vector4f *result;
//         /* s2 18 */ Vector4f *v1;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_UpdateStoredFrame);

// /* 001984b8 0000006c */ G2AnimSection* G2Anim_GetSectionWithSeg(/* a0 4 */ G2Anim *anim, /* a1 5 */ int segNumber) {
//     /* t0 8 */ G2AnimSection *section;
//     /* a2 6 */ G2AnimSection *tempSection;
//     /* a3 7 */ G2AnimSection *endSection;
//     /* v0 2 */ int firstSeg;
//     /* v0 2 */ int lastSeg;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_GetSectionWithSeg);

// /* 00198528 00000134 */ G2Bool G2Anim_SegmentHasActiveChannels(/* s0 16 */ G2Anim *anim, /* s1 17 */ int segNumber, /* s2 18 */ G2AnimChanMask chanMask) {
//     /* a0 4 */ uint8 *segChanFlagStream;
//     /* t1 9 */ uint8 activeChanBits;
//     /* a2 6 */ uint16 dataFlagBits;
//     /* a1 5 */ uint16 segFlagBits;
//     /* a3 7 */ int flagBytesPerSeg;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_SegmentHasActiveChannels);

// /* 00198660 00000098 */ void G2Anim_GetSegChannelValue(/* s0 16 */ G2Anim *anim, /* s1 17 */ int segIndex, /* s4 20 */ float *valueTable, /* s3 19 */ G2AnimChanMask channelMask) {
//     /* v1 3 */ G2AnimChanFinalValue *chanFinalValue;
//     {
//         /* s0 16 */ Vector4f *source;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_GetSegChannelValue);

// /* 001986f8 000002e8 */ void G2Anim_GetRootMotionFromTimeForDuration(/* s4 20 */ G2Anim *anim, /* f22 60 */ G2TimerAtomicUnit durationStart, /* f23 61 */ G2TimerAtomicUnit duration, /* s1 17 */ Vector4f *motionVector) {
//     /* 0x0(sp) */ G2Anim dummyAnim;
//     /* s5 21 */ G2AnimSection *section;
//     /* s0 16 */ G2AnimKeylist *keylist;
//     /* f21 59 */ G2TimerAtomicUnit storedKeyEndTime;
//     /* f24 62 */ G2TimerAtomicUnit durationMinusEnd;
//     /* f20 58 */ G2TimerAtomicUnit timePerKey;
//     /* f2 40 */ G2TimerAtomicUnit keyTime;
//     /* f12 50 */ float alpha;
//     /* s0 16 */ G2AnimInterpInfo *interpInfo;
//     /* s3 19 */ G2AnimQuatInfo *quatInfo;
//     {
//         /* 0xe0(sp) */ Vector4f motionVector2;
//         {
//             /* s1 17 */ Vector4f *dest;
//             /* f12 50 */ float alpha;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//                 /* BADREGISTER -1 */ Vector4fr alphav;
//             }
//         }
//         {
//             /* f12 50 */ float alpha;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//                 /* BADREGISTER -1 */ Vector4fr alphav;
//             }
//         }
//         {
//             /* s1 17 */ Vector4f *result;
//             /* s1 17 */ Vector4f *v2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* f12 50 */ float scalar;
//             /* s1 17 */ Vector4f *vec1;
//             /* s1 17 */ Vector4f *vec2;
//             {
//                 /* BADREGISTER -1 */ Vector4fr scalarv;
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//     }
//     {
//         /* s1 17 */ Vector4f *vector;
//     }
//     {
//         /* s1 17 */ Vector4f *dest;
//         /* s1 17 */ Vector4f *base;
//         /* f12 50 */ float alpha;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//             /* BADREGISTER -1 */ Vector4fr alphav;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_GetRootMotionFromTimeForDuration);

// /* 001989e0 00000008 */ void G2Anim_DumpStats(/* a0 4 */ char *buffer) {}
void G2Anim_DumpStats(char *buffer) {
}

// /* 001989e8 00000194 */ void G2AnimSection_SwitchToKeylistAtTime(/* s0 16 */ G2AnimSection *section, /* s3 19 */ G2AnimKeylist *keylist, /* s5 21 */ G2AnimKeylistID keylistID, /* f20 58 */ G2TimerAtomicUnit targetTime, /* s4 20 */ G2AnimFxHeader *fxList) {
//     /* s2 18 */ G2Anim *anim;
//     /* 0x0(sp) */ Vector4f rootMotion;
//     /* s1 17 */ G2AnimInterpInfo *interpInfo;
//     {
//         /* s2 18 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* f2 40 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f0 38 */ float _z1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_SwitchToKeylistAtTime);

// /* 00198b80 000000a0 */ void G2AnimSection_JumpToTime(/* s0 16 */ G2AnimSection *section, /* f20 58 */ G2TimerAtomicUnit targetTime) {
//     /* s1 17 */ G2Anim *anim;
//     {
//         /* s1 17 */ Vector4f *vector;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_JumpToTime);

// /* 00198c20 00000194 */ G2TimerAtomicUnit G2AnimSection_UpdateOverInterval(/* s0 16 */ G2AnimSection *section, /* f20 58 */ G2TimerAtomicUnit interval) {
//     /* s2 18 */ G2Anim *anim;
//     /* 0x0(sp) */ Vector4f motionVector;
//     /* s1 17 */ G2AnimInterpInfo *interpInfo;
//     /* f22 60 */ G2TimerAtomicUnit elapsedTime;
//     /* f0 38 */ G2TimerAtomicUnit newTime;
//     /* f20 58 */ G2TimerAtomicUnit extraTime;
//     {
//         /* f0 38 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f2 40 */ float _z1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_UpdateOverInterval);

// /* 00198db8 000003b0 */ G2TimerAtomicUnit G2AnimSection_AdvanceOverInterval(/* s0 16 */ G2AnimSection *section, /* f20 58 */ G2TimerAtomicUnit interval) {
//     /* a0 4 */ G2AnimKeylist *keylist;
//     /* f20 58 */ G2TimerAtomicUnit newTime;
//     /* f23 61 */ G2TimerAtomicUnit extraTime;
//     /* f22 60 */ G2TimerAtomicUnit elapsedTime;
//     /* f21 59 */ G2TimerAtomicUnit endTime;
//     /* f0 38 */ G2TimerAtomicUnit userNewTime;
//     /* f26 64 */ G2TimerAtomicUnit loopExtraTime;
//     /* s1 17 */ G2TimerAtomicUnit *swAlarmTable;
//     /* f1 39 */ G2TimerAtomicUnit swAlarmTime;
//     /* s2 18 */ G2Anim *anim;
//     /* 0x0(sp) */ Vector4f motionVector;
//     /* s1 17 */ uint32 message;
//     {
//         /* f0 38 */ float _x1;
//         /* f1 39 */ float _y1;
//         /* f2 40 */ float _z1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_AdvanceOverInterval);

// /* 00199168 00000010 */ void G2Anim_ResetCache(/* a0 4 */ G2Anim *anim) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2Anim_ResetCache);

// /* 00199178 0000009c */ static void _G2Anim_BuildTransformsNoControllers(/* s3 19 */ G2Anim *anim) {
//     /* s1 17 */ Segment *segment;
//     /* s2 18 */ Matrixf *segMatrix;
//     /* a2 6 */ G2Bool bRootTransUpdated;
//     /* s0 16 */ int segIndex;
//     /* s4 20 */ int segCount;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_BuildTransformsNoControllers);

// /* 00199218 000000e8 */ static void _G2Anim_BuildSegTransformNoControllers(/* s2 18 */ float *segMatrix[4], /* s3 19 */ float *parentMatrix[4], /* s1 17 */ G2Bool bRootTransUpdated, /* a3 7 */ int segIndex) {
//     /* s0 16 */ G2AnimSegValue *segValue;
//     /* BADREGISTER -1 */ Vector4fr p0;
//     /* BADREGISTER -1 */ Vector4fr p1;
//     /* BADREGISTER -1 */ Vector4fr p2;
//     /* BADREGISTER -1 */ Vector4fr p3;
//     /* BADREGISTER -1 */ Vector4fr s0;
//     /* BADREGISTER -1 */ Vector4fr s1;
//     /* BADREGISTER -1 */ Vector4fr s2;
//     /* BADREGISTER -1 */ Vector4fr s3;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_BuildSegTransformNoControllers);

// /* 00199300 0000006c */ static void _G2Anim_BuildSegLocalRotMatrix(/* s0 16 */ G2AnimSegValue *segValue, /* s1 17 */ float *segMatrix[4]) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_BuildSegLocalRotMatrix);

// /* 00199370 00000030 */ static void wombat(/* a0 4 */ uint8 *segKeyList, /* a1 5 */ int flagBitOffset, /* a2 6 */ G2AnimSegKeyflagInfo *kfInfo) {
//     /* v0 2 */ int flagDWordOffset;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", wombat);

// /* 001993a0 0000006c */ static uint32 kangaroo(/* a0 4 */ G2AnimSegKeyflagInfo *kfInfo) {
//     /* a3 7 */ uint32 keyflags;
//     /* v1 3 */ uint32 tempFlags;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", kangaroo);

// /* 00199410 0000005c */ static void _G2Anim_InitializeSegValue(/* a0 4 */ G2Anim *anim, /* a1 5 */ G2AnimSegValue *segValue, /* a2 6 */ int segIndex) {
//     /* v1 3 */ Segment *segment;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_InitializeSegValue);

// /* 00199470 00000284 */ static void _G2AnimSection_InitStatus(/* s4 20 */ G2AnimSection *section, /* 0x40(sp) */ G2Anim *anim) {
//     /* 0x0(sp) */ G2AnimDecompressChannelInfo dcInfo;
//     /* s2 18 */ G2AnimSegValue *segValue;
//     /* s3 19 */ G2AnimChanStatusBlock **chanStatusNextBlockPtr;
//     /* v0 2 */ G2AnimChanStatusBlock *chanStatusBlock;
//     /* s5 21 */ G2AnimChanStatus *chanStatus;
//     /* s6 22 */ int chanStatusChunkCount;
//     /* 0x10(sp) */ G2AnimSegKeyflagInfo rotKfInfo;
//     /* 0x20(sp) */ G2AnimSegKeyflagInfo scaleKfInfo;
//     /* 0x30(sp) */ G2AnimSegKeyflagInfo transKfInfo;
//     /* s0 16 */ int type;
//     /* s1 17 */ uint32 segChanFlags;
//     /* s0 16 */ int segIndex;
//     /* 0x44(sp) */ int lastSeg;
//     {
//         /* 0x40(sp) */ G2Anim *anim;
//         /* s4 20 */ G2AnimSection *section;
//         {
//             /* s1 17 */ int bitsPerFlagType;
//             /* s0 16 */ int flagBitOffset;
//             /* s3 19 */ uint32 activeChanBits;
//             /* s2 18 */ uint8 *segKeyList;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimSection_InitStatus);

// /* 001996f8 00000460 */ void FooBar(/* s5 21 */ G2AnimSection *section, /* 0x70(sp) */ G2Anim *anim, /* s4 20 */ int decompressedKey, /* 0x74(sp) */ int targetKey, /* f20 58 */ float timeOffset) {
//     /* 0x0(sp) */ G2AnimDecompressChannelInfo dcInfo;
//     /* s3 19 */ G2AnimSegValue *segValue;
//     /* s1 17 */ G2AnimChanFinalValue *chanValue;
//     /* s6 22 */ G2AnimChanStatusBlock *chanStatusBlock;
//     /* s4 20 */ G2AnimChanStatus *chanStatus;
//     /* s7 23 */ int chanStatusChunkCount;
//     /* 0x10(sp) */ G2AnimSegKeyflagInfo rotKfInfo;
//     /* 0x20(sp) */ G2AnimSegKeyflagInfo scaleKfInfo;
//     /* 0x30(sp) */ G2AnimSegKeyflagInfo transKfInfo;
//     /* s0 16 */ int type;
//     /* s2 18 */ uint32 segChanFlags;
//     /* s5 21 */ int segIndex;
//     /* 0x78(sp) */ int lastSeg;
//     /* 0x40(sp) */ G2AnimDecompressChannelInfo nextDCInfo;
//     /* 0x50(sp) */ G2AnimDecompressChannelInfo initDCInfo;
//     /* 0x60(sp) */ G2AnimChanStatus nextChanStatus;
//     {
//         /* 0x70(sp) */ G2Anim *anim;
//         /* s5 21 */ G2AnimSection *section;
//         {
//             /* s1 17 */ int bitsPerFlagType;
//             /* s0 16 */ int flagBitOffset;
//             /* s3 19 */ uint32 activeChanBits;
//             /* s2 18 */ uint8 *segKeyList;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", FooBar);

// /* 00199b58 000000dc */ static void _G2AnimSection_UpdateStoredFrameFromData(/* s0 16 */ G2AnimSection *section, /* s2 18 */ G2Anim *anim) {
//     /* 0x0(sp) */ G2TimerAtomicUnit timePerKey;
//     /* a2 6 */ int32 storedKey;
//     /* s1 17 */ int32 targetKey;
//     /* f12 50 */ float timeOffset;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimSection_UpdateStoredFrameFromData);

// /* 00199c38 00000018 */ static G2Anim* _G2AnimSection_GetAnim(/* a0 4 */ G2AnimSection *section) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimSection_GetAnim);

// /* 00199c50 0000021c */ static void _G2AnimSection_TriggerEffects(/* s2 18 */ G2AnimSection *section, /* f20 58 */ G2TimerAtomicUnit startTime, /* f21 59 */ G2TimerAtomicUnit endTime) {
//     {
//         /* s1 17 */ G2AnimFxHeader *fxHeader;
//         /* 0x0(sp) */ int timePerKey;
//         {
//             /* s3 19 */ int fxSectionID;
//             /* s5 21 */ uint32 fxSize;
//             {
//                 /* f1 39 */ G2TimerAtomicUnit fxTime;
//                 {
//                     /* s0 16 */ int type;
//                     /* a0 4 */ int disable;
//                     /* s4 20 */ int oneShot;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimSection_TriggerEffects);

// /* 00199e70 0000004c */ static void _G2Anim_FreeChanStatusBlockList(/* a0 4 */ G2AnimChanStatusBlock *block) {
//     /* s0 16 */ G2AnimChanStatusBlock *nextBlock;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2Anim_FreeChanStatusBlockList);

// /* 00199ec0 00000074 */ static float _G2AnimAlphaTable_GetValue(/* a0 4 */ G2AnimAlphaTable *table, /* f0 38 */ float trueAlpha) {
//     /* a0 4 */ int positionInt;
//     /* f3 41 */ float value;
//     /* f1 39 */ float position;
//     /* f1 39 */ float positionFrac;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", _G2AnimAlphaTable_GetValue);

// /* 00199f38 0000009c */ static void G2AnimSection_ClearOneshotFX(/* a0 4 */ G2AnimSection *section, /* a1 5 */ G2AnimFxHeader *fxList) {
//     {
//         /* a0 4 */ G2AnimFxHeader *fxHeader;
//         {
//             /* a2 6 */ uint32 fxSize;
//             /* a1 5 */ int type;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/g2/AnimG2", G2AnimSection_ClearOneshotFX);

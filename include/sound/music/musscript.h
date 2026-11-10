#ifndef SOUND_MUSIC_MUSSCRIPT_H
#define SOUND_MUSIC_MUSSCRIPT_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 228f68 */ extern MUSSCRIPT_CommandFunc commandFunctions[0];
/* data 229368 */ extern uint8 g_userVariables[256];
/* bss 2bf220 */ extern uint8 commandData[256];

/* Non-static functions of this unit (STABS signatures). */
void Assert(char *msg, int line);
void MUSSCRIPT_InitScriptData(MUSSCRIPT_ScriptData *scriptData, int songNr, int sequenceNr);
int MUSSCRIPT_ProcessScript(uint8 *data, void *midiSong, void *midiTrack);
void MUSSCRIPT_GotoOffset(MUSMIDI_Track *midiTrack, int32 offset);
void MUSSCRIPT_MuteChannel(MUSMIDI_Song *song, int32 channel);
void MUSSCRIPT_UnMuteChannel(MUSMIDI_Song *song, int32 channel);
void MUSSCRIPT_SelectChannel(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SelectSlot(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_AssignSequence(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetTempo(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetTempoFromSequence(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_ChangeTempo(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_StartSlot(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_StopSlot(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_PauseSlot(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_ResumeSlot(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetSlotVolume(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetSlotPan(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetChannelVolume(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetChannelPan(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_MuteChannelCommand(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_UnMuteChannelCommand(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_MuteChannelList(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_UnMuteChannelList(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_ChannelVolumeFade(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_ChannelPanFade(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SlotVolumeFade(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SlotPanFade(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetChannelProgram(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetChannelTranspose(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_IgnoreChannelTranspose(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_RespectChannelTranspose(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_GetSequenceAssigned(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_GetTempo(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_GetSlotStatus(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_GetSlotVolume(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_GetSlotPan(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_GetChannelVolume(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_GetChannelPan(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_GetChannelMute(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_GetChannelProgram(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetLoopStart(MUSMIDI_Track *midiTrack, int loopCount, int offset);
void MUSSCRIPT_LoopStart(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetLoopEnd(MUSMIDI_Track *midiTrack);
void MUSSCRIPT_LoopEnd(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_LoopBreak(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_GotoLabel(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetVariable(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_CopyVariable(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_AddVariable(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SubtractVariable(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetVariableBits(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_ClearVariableBits(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_BranchIfVarEqual(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_BranchIfVarNotEqual(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_BranchIfVarLess(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_BranchIfVarGreater(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_BranchIfVarLessOrEqual(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_BranchIfVarGreaterOrEqual(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_BranchIfVarBitsSet(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_BranchIfVarBitsClear(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SubstituteVariableParam1(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SubstituteVariableParam2(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SubstituteVariableParam3(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_EndOfTrack(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetSequencePosition(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_SetChannelMute(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_DelayMute(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_UpdateMute(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_LinkChannelsToMusic(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_LinkChannelsToSfx(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_GetSourceFilename(MUSSCRIPT_ScriptAtt *attributes);
void MUSSCRIPT_GetSourceLineNr(MUSSCRIPT_ScriptAtt *attributes);

#endif /* SOUND_MUSIC_MUSSCRIPT_H */

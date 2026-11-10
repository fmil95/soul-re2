#ifndef SOUND_MUSIC_MUSMIDI_H
#define SOUND_MUSIC_MUSMIDI_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 211f68 */ extern uint8 controllerDefaults[128];
/* data 211fe8 */ extern MUS_Song g_songs[2];
/* data 21eb68 */ extern MUSMIDI_Track g_midiTracks[256];

/* Non-static functions of this unit (STABS signatures). */
void MUSMIDI_InitChannel(MUSMIDI_Channel *channel);
void MUSMIDI_InitTrack(MUSMIDI_Track *track);
void MUSMIDI_StopSequence(MUSMIDI_Song *song);
void MUSMIDI_ResumeSequence(MUSMIDI_Song *song);
void MUSMIDI_PauseSequence(MUSMIDI_Song *song);
MUSMIDI_Song*MUSMIDI_LoadSequence(MUS_Song *musSong, int32 sequenceNr, int32 slotNr);
int MUSMIDI_Free(MUS_Song *musSong, MUSMIDI_Song *midiSong);
void MUSMIDI_UpdateSongs(MUS_Song *musSong, float deltaTime);
void MUSMIDI_Init(void);
void MUSMIDI_DeInit(void);
void MUSMIDI_MuteChannel(MUSMIDI_Song *song, int32 chanNr);
void MUSMIDI_UnMuteChannel(MUSMIDI_Song *song, int32 chanNr);
void MUSMIDI_Play(MUS_Song *musSong);
void MUSMIDI_Stop(MUS_Song *musSong);
void MUSMIDI_Update(MUSMIDI_Song *song);
void MUSMIDI_NoteOn(MUSMIDI_Song *song, int32 chanNr, uint8 noteNr, uint8 velocity);
void MUSMIDI_NoteOff(MUSMIDI_Song *song, int32 chanNr, uint8 noteNr, uint8 velocity);
void MUSMIDI_AfterTouch(MUSMIDI_Song *song, int32 chanNr, uint8 noteNr, uint8 pressure);
void MUSMIDI_Controller(MUSMIDI_Song *song, MUSMIDI_Track *track, int32 chanNr, uint8 controller, uint8 value);
void MUSMIDI_PatchChange(MUSMIDI_Song *song, int32 chanNr, uint8 patch);
void MUSMIDI_ChannelPressure(MUSMIDI_Song *song, int32 chanNr, uint8 pressure);
void MUSMIDI_PitchWheel(MUSMIDI_Song *song, int32 chanNr, int32 pitch);
void MUSMIDI_SetSequenceFade(MUSMIDI_Song *song, int32 time, int32 target, int32 type);
void MUSMIDI_SetChannelFade(MUSMIDI_Song *song, int32 chanNr, int32 time, int32 target, int32 type);
void MUSMIDI_UpdateChannel(MUSMIDI_Channel *channel, float deltaTime);

#endif /* SOUND_MUSIC_MUSMIDI_H */

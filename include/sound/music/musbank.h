#ifndef SOUND_MUSIC_MUSBANK_H
#define SOUND_MUSIC_MUSBANK_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 20fd40 */ extern int MUSIC_MonoMode;
/* data 20fd48 */ extern float largePitch[120];
/* data 20ff28 */ extern float smallPitch[256];
/* data 210328 */ extern MUSBANK_GlobalChannel g_bankGlobalChannels[48];
/* data 211d68 */ extern float concaveTable[128];
/* bss 2bda50 */ extern float sinTable[513];
/* bss 2be258 */ extern float dbTable[1010];

/* Non-static functions of this unit (STABS signatures). */
void MUSBANK_Init(void);
int32 MUSBANK_LoadBankChunk(MUS_Song *musSong, void *samData, int len);
int32 MUSBANK_LoadBank(MUS_Song *musSong, void *samData);
int32 MUSBANK_FreeBank(MUS_Song *musSong);
void MUSBANK_CalcFrequency(MUSBANK_GlobalChannel *bankChannel);
void MUSBANK_UpdatePitch(MUSBANK_GlobalChannel *bankChannel);
void MUSBANK_UpdateVolume(MUSBANK_GlobalChannel *bankChannel);
void MUSBANK_SetPriority(MUSBANK_GlobalChannel *channel);
void MUSBANK_ChannelOn(MUSBANK_GlobalChannel *channel);
void MUSBANK_NoteOn(MUSMIDI_Song *song, int32 chanNr, uint32 noteNr, uint8 velocity);
void MUSBANK_NoteOff(MUSMIDI_Song *song, int32 chanNr, uint32 noteNr, uint8 velocity);
void MUSBANK_ProcessNote(MUSMIDI_Song *song, int32 midiChanNr, uint8 noteNr, uint8 velocity);
void MUSBANK_FreeChannel(MUSBANK_GlobalChannel *globalChannel);
void MUSBANK_UpdateDeltaTime(float deltaTime);
void MUSBANK_UpdateChannels(void);
void MUSBANK_UpdateModEnvelope(MUSBANK_GlobalChannel *bankChannel);
void MUSBANK_UpdateVolEnvelope(MUSBANK_GlobalChannel *bankChannel);
void MUSBANK_UpdateChannel(MUSBANK_GlobalChannel *channel);
void MUSBANK_InvalidateChanPitch(MUSMIDI_Channel *midiChannel);
void MUSBANK_InvalidateChanVol(MUSMIDI_Channel *midiChannel);
void MUSBANK_InvalidateSeqVol(MUSMIDI_Song *midiSong);
MUSBANK_GlobalChannel*MUSBANK_GlobalChannelInfo(int chanNr);

#endif /* SOUND_MUSIC_MUSBANK_H */

/* Original path: C:\sr2\game\sound\music\musmidi.c */
/* .text 0x00103D58, .data 0x00211F68, .rodata 0x002B1F50 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 211f68 */ extern uint8 controllerDefaults[128];
/* data 211fe8 */ extern MUS_Song g_songs[2];
/* data 21eb68 */ extern MUSMIDI_Track g_midiTracks[256];

// /* 00103d58 00000040 */ static MUSMIDI_Track* AllocTrack() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", AllocTrack);

// /* 00103d98 00000038 */ static int ReadVarLen(/* a2 6 */ int8 **data) {
//     /* a1 5 */ int32 res;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", ReadVarLen);

// /* 00103dd0 000000bc */ void MUSMIDI_InitChannel(/* a0 4 */ MUSMIDI_Channel *channel) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_InitChannel);

// /* 00103e90 00000024 */ void MUSMIDI_InitTrack(/* a0 4 */ MUSMIDI_Track *track) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_InitTrack);

// /* 00103eb8 00000104 */ void MUSMIDI_StopSequence(/* s2 18 */ MUSMIDI_Song *song) {
//     /* s1 17 */ int32 i;
//     {
//         /* s0 16 */ MUSBANK_GlobalChannel *bankChannel;
//         /* s1 17 */ MUSMIDI_Channel *channel;
//         {
//             /* s0 16 */ MUSBANK_GlobalChannel *next;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_StopSequence);

// /* 00103fc0 00000030 */ void MUSMIDI_ResumeSequence(/* a0 4 */ MUSMIDI_Song *song) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_ResumeSequence);

// /* 00103ff0 000000a0 */ void MUSMIDI_PauseSequence(/* s1 17 */ MUSMIDI_Song *song) {
//     /* v1 3 */ int32 i;
//     {
//         /* s0 16 */ MUSBANK_GlobalChannel *bankChannel;
//         /* v0 2 */ MUSMIDI_Channel *channel;
//         {
//             /* s0 16 */ MUSBANK_GlobalChannel *next;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_PauseSequence);

// /* 00104090 00000218 */ MUSMIDI_Song* MUSMIDI_LoadSequence(/* a3 7 */ MUS_Song *musSong, /* s7 23 */ int32 sequenceNr, /* a2 6 */ int32 slotNr) {
//     /* s5 21 */ int8 *midiPtr;
//     /* a0 4 */ int32 i;
//     /* a1 5 */ int32 seqIndex;
//     /* s2 18 */ MUSMIDI_Song *newSong;
//     /* s6 22 */ MUS_SequenceHeader *seqHeader;
//     {
//         /* s1 17 */ int32 i;
//     }
//     {
//         /* s4 20 */ int32 curTrack;
//         {
//             /* s0 16 */ MUSMIDI_Track *track;
//             /* s1 17 */ uint32 trackOffset;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_LoadSequence);

// /* 001042a8 000000a0 */ int MUSMIDI_Free(/* a0 4 */ MUS_Song *musSong, /* a1 5 */ MUSMIDI_Song *midiSong) {
//     /* v1 3 */ int32 i;
//     /* a2 6 */ int32 curSong;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_Free);

// /* 00104348 000001d0 */ void MUSMIDI_UpdateSongs(/* s3 19 */ MUS_Song *musSong, /* f20 58 */ float deltaTime) {
//     /* s1 17 */ int32 i;
//     /* s0 16 */ MUSMIDI_Song *song;
//     {
//         /* f1 39 */ float numBeats;
//         /* v0 2 */ int32 tmp;
//         /* s2 18 */ int32 j;
//     }
//     {
//         /* v1 3 */ MUSMIDI_Song *firstSong;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_UpdateSongs);

// /* 00104518 00000074 */ void MUSMIDI_Init() {
//     /* a0 4 */ int32 i;
//     /* v1 3 */ int32 j;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_Init);

// /* 00104590 00000008 */ void MUSMIDI_DeInit() {}
void MUSMIDI_DeInit(void) {
}

// /* 00104598 00000084 */ void MUSMIDI_MuteChannel(/* s1 17 */ MUSMIDI_Song *song, /* s2 18 */ int32 chanNr) {
//     /* s0 16 */ MUSBANK_GlobalChannel *bankChannel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_MuteChannel);

// /* 00104620 00000028 */ void MUSMIDI_UnMuteChannel(/* a0 4 */ MUSMIDI_Song *song, /* a1 5 */ int32 chanNr) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_UnMuteChannel);

// /* 00104648 0000004c */ void MUSMIDI_Play(/* a0 4 */ MUS_Song *musSong) {
//     /* s0 16 */ MUSMIDI_Song *song;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_Play);

// /* 00104698 00000054 */ void MUSMIDI_Stop(/* a0 4 */ MUS_Song *musSong) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_Stop);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/music/musmidi", D_002B1F50);

// /* 001046f0 00000370 */ void MUSMIDI_Update(/* s1 17 */ MUSMIDI_Song *song) {
//     /* v1 3 */ int curTrack;
//     {
//         /* s0 16 */ MUSMIDI_Track *track;
//         {
//             /* 0x0(sp) */ uint8 *dataPtr;
//             /* s2 18 */ uint32 deltaTime;
//             {
//                 /* a2 6 */ uint8 noteNr;
//                 /* a3 7 */ uint8 velocity;
//             }
//             {
//                 /* a2 6 */ int32 pitch;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_Update);

// /* 00104a60 00000050 */ void MUSMIDI_NoteOn(/* a0 4 */ MUSMIDI_Song *song, /* a1 5 */ int32 chanNr, /* a2 6 */ uint8 noteNr, /* a3 7 */ uint8 velocity) {
//     {
//         /* a2 6 */ int32 playNote;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_NoteOn);

// /* 00104ab0 00000020 */ void MUSMIDI_NoteOff(/* a0 4 */ MUSMIDI_Song *song, /* a1 5 */ int32 chanNr, /* a2 6 */ uint8 noteNr, /* a3 7 */ uint8 velocity) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_NoteOff);

// /* 00104ad0 00000038 */ void MUSMIDI_AfterTouch(/* a0 4 */ MUSMIDI_Song *song, /* a1 5 */ int32 chanNr, /* a2 6 */ uint8 noteNr, /* a3 7 */ uint8 pressure) {
//     /* v1 3 */ MUSBANK_GlobalChannel *globalChannel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_AfterTouch);

// /* 00104b08 000000d0 */ void MUSMIDI_Controller(/* a0 4 */ MUSMIDI_Song *song, /* a1 5 */ MUSMIDI_Track *track, /* a2 6 */ int32 chanNr, /* a3 7 */ uint8 controller, /* t0 8 */ uint8 value) {
//     /* a2 6 */ MUSMIDI_Channel *channel;
//     {
//         /* v0 2 */ int32 RPNValue;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_Controller);

// /* 00104bd8 00000014 */ void MUSMIDI_PatchChange(/* a0 4 */ MUSMIDI_Song *song, /* a1 5 */ int32 chanNr, /* a2 6 */ uint8 patch) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_PatchChange);

// /* 00104bf0 00000014 */ void MUSMIDI_ChannelPressure(/* a0 4 */ MUSMIDI_Song *song, /* a1 5 */ int32 chanNr, /* a2 6 */ uint8 pressure) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_ChannelPressure);

// /* 00104c08 00000030 */ void MUSMIDI_PitchWheel(/* a0 4 */ MUSMIDI_Song *song, /* a1 5 */ int32 chanNr, /* a2 6 */ int32 pitch) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_PitchWheel);

// /* 00104c38 0000007c */ void MUSMIDI_SetSequenceFade(/* s4 20 */ MUSMIDI_Song *song, /* s3 19 */ int32 time, /* s2 18 */ int32 target, /* s1 17 */ int32 type) {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_SetSequenceFade);

// /* 00104cb8 00000160 */ void MUSMIDI_SetChannelFade(/* a0 4 */ MUSMIDI_Song *song, /* a1 5 */ int32 chanNr, /* t1 9 */ int32 time, /* a3 7 */ int32 target, /* t0 8 */ int32 type) {
//     /* a1 5 */ MUSMIDI_Channel *channel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_SetChannelFade);

// /* 00104e18 000000fc */ void MUSMIDI_UpdateChannel(/* a0 4 */ MUSMIDI_Channel *channel, /* f12 50 */ float deltaTime) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musmidi", MUSMIDI_UpdateChannel);

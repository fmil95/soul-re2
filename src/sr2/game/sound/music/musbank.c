/* Original path: C:\sr2\game\sound\music\musbank.c */
/* .text 0x001024A0, .data 0x0020FD40, .rodata 0x002B1E98, .bss 0x002BDA50 */

#include "sound/music/musbank.h"

// /* 001024a0 0000007c */ static float FastLog2(/* f12 50 */ float x) {
//     /* v0 2 */ uint32 exp;
//     /* a0 4 */ uint32 ix;
//     /* v1 3 */ uint32 mantissa;
//     /* f1 39 */ float log2;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", FastLog2);

// /* 00102520 0000002c */ static void StreamChannelLost(/* a0 4 */ int channum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", StreamChannelLost_00102520);

// /* 00102550 000002e0 */ void MUSBANK_Init() {
//     /* s0 16 */ int32 i;
//     {
//         /* f12 50 */ float dbval;
//     }
//     {
//         /* f12 50 */ float index;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_Init);

// /* 00102830 00000190 */ int32 MUSBANK_LoadBankChunk(/* s1 17 */ MUS_Song *musSong, /* a1 5 */ void *samData, /* a2 6 */ int len) {
//     /* s4 20 */ char *dataPtr;
//     /* s3 19 */ int32 curLen;
//     {
//         /* data 20fd44 */ static char *sramPtr;
//         /* s0 16 */ MUS_Sample *sam;
//         /* s2 18 */ int samLen;
//         /* s0 16 */ int uploadLen;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_LoadBankChunk);

// /* 001029c0 00000118 */ int32 MUSBANK_LoadBank(/* s2 18 */ MUS_Song *musSong, /* a1 5 */ void *samData) {
//     /* s1 17 */ int32 i;
//     /* s3 19 */ uint8 *samPtr;
//     {
//         /* s0 16 */ MUS_Sample *sam;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_LoadBank);

// /* 00102ad8 000000e8 */ int32 MUSBANK_FreeBank(/* s2 18 */ MUS_Song *musSong) {
//     /* s1 17 */ int32 i;
//     {
//         /* s0 16 */ MUS_Sample *sam;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_FreeBank);

// /* 00102bc0 000000b8 */ void MUSBANK_CalcFrequency(/* a0 4 */ MUSBANK_GlobalChannel *bankChannel) {
//     /* v1 3 */ int32 period;
//     /* v0 2 */ int32 rootKey;
//     /* v0 2 */ int32 pitchWheel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_CalcFrequency);

// /* 00102c78 000001d4 */ void MUSBANK_UpdatePitch(/* s0 16 */ MUSBANK_GlobalChannel *bankChannel) {
//     /* f12 50 */ float newFreq;
//     {
//         /* f0 38 */ float vibTime;
//         /* f0 38 */ float vibDepth;
//         /* v0 2 */ int32 adjustedPitch;
//         /* v0 2 */ int32 sinIndex;
//     }
//     {
//         /* v0 2 */ int32 adjustedPitch;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_UpdatePitch);

// /* 00102e50 00000298 */ void MUSBANK_UpdateVolume(/* s0 16 */ MUSBANK_GlobalChannel *bankChannel) {
//     /* f21 59 */ float volume;
//     /* f22 60 */ float finalPan;
//     /* f2 40 */ float channelPan;
//     {
//         /* f20 58 */ float masterVol;
//         {
//             /* v1 3 */ int index;
//         }
//         {
//             /* v1 3 */ int index;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_UpdateVolume);

// /* 001030e8 00000040 */ void MUSBANK_SetPriority(/* a0 4 */ MUSBANK_GlobalChannel *channel) {
//     /* f0 38 */ float priority;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_SetPriority);

// /* 00103128 000002d8 */ void MUSBANK_ChannelOn(/* s1 17 */ MUSBANK_GlobalChannel *channel) {
//     /* f20 58 */ float keyNumAdjust;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_ChannelOn);

// /* 00103400 00000020 */ void MUSBANK_NoteOn(/* a0 4 */ MUSMIDI_Song *song, /* a1 5 */ int32 chanNr, /* a2 6 */ uint32 noteNr, /* a3 7 */ uint8 velocity) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_NoteOn);

// /* 00103420 00000094 */ void MUSBANK_NoteOff(/* a0 4 */ MUSMIDI_Song *song, /* a1 5 */ int32 chanNr, /* a2 6 */ uint32 noteNr, /* a3 7 */ uint8 velocity) {
//     /* v1 3 */ MUSBANK_GlobalChannel *bankChannel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_NoteOff);

// /* 001034b8 00000300 */ void MUSBANK_ProcessNote(/* t0 8 */ MUSMIDI_Song *song, /* 0x0(sp) */ int32 midiChanNr, /* s5 21 */ uint8 noteNr, /* s4 20 */ uint8 velocity) {
//     /* s7 23 */ MUS_Song *musSong;
//     /* 0x4(sp) */ uint8 bankNr;
//     /* 0x8(sp) */ uint8 patchNr;
//     /* a1 5 */ int32 curPreset;
//     {
//         /* s3 19 */ MUS_Preset *preset;
//         {
//             /* a0 4 */ int32 curPresetZone;
//             {
//                 /* s1 17 */ MUS_PresetZone *zone;
//                 {
//                     /* s6 22 */ int32 curInsZone;
//                     /* s2 18 */ MUS_Instrument *instrument;
//                     {
//                         /* a0 4 */ int32 channelNr;
//                         /* a1 5 */ int32 basePriority;
//                         {
//                             /* v1 3 */ MUSBANK_GlobalChannel *bankChannel;
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_ProcessNote);

// /* 001037b8 00000058 */ void MUSBANK_FreeChannel(/* a0 4 */ MUSBANK_GlobalChannel *globalChannel) {
//     /* a1 5 */ MUSBANK_GlobalChannel *channel;
//     /* v1 3 */ MUSBANK_GlobalChannel *tmp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_FreeChannel);

// /* 00103810 0000003c */ void MUSBANK_UpdateDeltaTime(/* f12 50 */ float deltaTime) {
//     /* a0 4 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_UpdateDeltaTime);

// /* 00103850 00000068 */ void MUSBANK_UpdateChannels() {
//     /* s2 18 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_UpdateChannels);

// /* 001038b8 00000190 */ void MUSBANK_UpdateModEnvelope(/* s0 16 */ MUSBANK_GlobalChannel *bankChannel) {
//     /* a0 4 */ MUS_Envelope *env;
//     /* f3 41 */ float cumulativeTime;
//     {
//         /* f0 38 */ float segmentTime;
//         /* f20 58 */ float amplitude;
//     }
//     {
//         /* f1 39 */ float segmentTime;
//     }
//     {
//         /* f0 38 */ float releaseTime;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_UpdateModEnvelope);

// /* 00103a48 000001e8 */ void MUSBANK_UpdateVolEnvelope(/* s0 16 */ MUSBANK_GlobalChannel *bankChannel) {
//     /* a0 4 */ MUS_Envelope *env;
//     /* f2 40 */ float cumulativeTime;
//     {
//         /* f0 38 */ float segmentTime;
//         /* f20 58 */ float amplitude;
//     }
//     {
//         /* f0 38 */ float segmentTime;
//     }
//     {
//         /* f1 39 */ float releaseTime;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_UpdateVolEnvelope);

// /* 00103c30 0000004c */ void MUSBANK_UpdateChannel(/* s0 16 */ MUSBANK_GlobalChannel *channel) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_UpdateChannel);

// /* 00103c80 0000002c */ void MUSBANK_InvalidateChanPitch(/* a0 4 */ MUSMIDI_Channel *midiChannel) {
//     /* v1 3 */ MUSBANK_GlobalChannel *channel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_InvalidateChanPitch);

// /* 00103cb0 0000002c */ void MUSBANK_InvalidateChanVol(/* a0 4 */ MUSMIDI_Channel *midiChannel) {
//     /* v1 3 */ MUSBANK_GlobalChannel *channel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_InvalidateChanVol);

// /* 00103ce0 00000040 */ void MUSBANK_InvalidateSeqVol(/* a0 4 */ MUSMIDI_Song *midiSong) {
//     /* s1 17 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_InvalidateSeqVol);

// /* 00103d20 00000034 */ MUSBANK_GlobalChannel* MUSBANK_GlobalChannelInfo(/* a0 4 */ int chanNr) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/music/musbank", MUSBANK_GlobalChannelInfo);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/music/musbank", D_002B1E98);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/music/musbank", D_002B1EA0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/music/musbank", D_002B1ED8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/music/musbank", D_002B1F00);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/music/musbank", D_002B1F38);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/music/musbank", D_002B1F40);

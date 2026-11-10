/* Original path: C:\sr2\game\sound\dynsfx.c */
/* .text 0x001000C0, .data 0x00207B80, .rodata 0x002B1D00, .bss 0x002BC388 */

#include "sound/dynsfx.h"

// /* 001000c0 000002c4 */ void DYNSFX_Init() {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_Init);

// /* 00100388 000002fc */ static void DYNSFX_OutputSRAMUsage() {
//     /* v1 3 */ int i;
//     /* a2 6 */ int waves;
//     /* a1 5 */ int numbytes;
//     /* a1 5 */ MUS_Song *song;
//     /* s0 16 */ int totalMem;
//     /* s1 17 */ int totalsram;
//     {
//         /* a2 6 */ int j;
//     }
//     {
//         /* 0x84(sp) */ int blocklen;
//         /* 0x80(sp) */ void *blockaddr;
//         /* 0x88(sp) */ int blocktype;
//         {
//             /* 0x0(sp) */ DRAWVERTEX verts[4];
//             /* f1 39 */ float x;
//             /* f2 40 */ float y;
//             /* f0 38 */ float xnext;
//             /* f3 41 */ float ynext;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_OutputSRAMUsage);

// /* 00100688 00000124 */ void DYNSFX_Update(/* f20 58 */ float time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_Update);

// /* 001007b0 00000174 */ void DYNSFX_PrintDebug() {
//     /* s0 16 */ int i;
//     /* v0 2 */ MUSBANK_GlobalChannel *bankChannel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_PrintDebug);

// /* 00100928 00000098 */ void DYNSFX_PrintUnloaded() {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_PrintUnloaded);

// /* 001009c0 00000020 */ static void SFXChannelLost(/* a0 4 */ int channum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", SFXChannelLost);

// /* 001009e0 0000000c */ void DYNSFX_SetMasterVolume(/* a0 4 */ int vol) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_SetMasterVolume);

// /* 001009f0 00000020 */ float DYNSFX_GetMasterVolume() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_GetMasterVolume);

// /* 00100a10 000000f0 */ static void SetADSR(/* t4 12 */ AadSynthVoice *voice, /* a1 5 */ int ar, /* a2 6 */ int dr, /* a3 7 */ int sr, /* t0 8 */ int rr, /* t1 9 */ int sl, /* t2 10 */ int arm, /* t3 11 */ int srm, /* 0x0(sp) */ int rrm) {
//     /* v0 2 */ int rrm;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", SetADSR);

// /* 00100b00 00000158 */ static void UpdateEnvelopeVolume(/* a0 4 */ AadSynthVoice *voice) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", UpdateEnvelopeVolume);

// /* 00100c58 00000098 */ void SpuSetVoiceADSR1ADSR2(/* a0 4 */ AadSynthVoice *v, /* a1 5 */ uint16 adsr1, /* t4 12 */ uint16 adsr2) {
//     /* t1 9 */ uint16 sl;
//     /* t8 24 */ uint16 dr;
//     /* t7 15 */ uint16 ar;
//     /* t2 10 */ uint16 arm;
//     /* t0 8 */ uint16 rr;
//     /* t5 13 */ uint16 rrm;
//     /* a3 7 */ uint16 sr;
//     /* t3 11 */ uint16 srm;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", SpuSetVoiceADSR1ADSR2);

// /* 00100cf0 00000064 */ uint32 DYNSFX_PlaySfx(/* a0 4 */ AadSfxToneID toneID, /* s1 17 */ int volume, /* s2 18 */ int pan, /* f20 58 */ float pitchOffset) {
//     /* s0 16 */ uint32 handle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_PlaySfx);

// /* 00100d58 0000003c */ uint32 DYNSFX_StopSfx(/* s0 16 */ uint32 handle) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_StopSfx);

// /* 00100d98 0000002c */ void DYNSFX_StopAllSfx() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_StopAllSfx);

// /* 00100dc8 0000001c */ int DYNSFX_IsSfxLoaded(/* a0 4 */ AadSfxToneID toneID) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_IsSfxLoaded);

// /* 00100de8 0000001c */ int DYNSFX_SfxDefaultVolume(/* a0 4 */ AadSfxToneID toneID) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_SfxDefaultVolume);

// /* 00100e08 0000009c */ int DYNSFX_SfxDefaultVolumeFromHandle(/* s2 18 */ uint32 handle) {
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_SfxDefaultVolumeFromHandle);

// /* 00100ea8 00000098 */ int DYNSFX_IsSfxPlaying(/* s2 18 */ uint32 handle) {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_IsSfxPlaying);

// /* 00100f40 00000074 */ int DYNSFX_IsSfxPlayingOrRequested(/* a0 4 */ uint32 handle) {
//     /* a1 5 */ int commandOut;
//     /* a2 6 */ int i;
//     /* v1 3 */ AadSfxCommand *sfxCmd;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_IsSfxPlayingOrRequested);

// /* 00100fb8 00000098 */ int DYNSFX_IsSfxTypePlaying(/* a0 4 */ AadSfxToneID toneID) {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_IsSfxTypePlaying);

// /* 00101050 00000074 */ int DYNSFX_IsSfxTypePlayingOrRequested(/* a0 4 */ AadSfxToneID sfxToneID) {
//     /* a1 5 */ int commandOut;
//     /* a2 6 */ int i;
//     /* v1 3 */ AadSfxCommand *sfxCmd;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_IsSfxTypePlayingOrRequested);

// /* 001010c8 00000098 */ int DYNSFX_NumSfxTypePlaying(/* a0 4 */ AadSfxToneID toneID) {
//     /* s0 16 */ int i;
//     /* s2 18 */ int n;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_NumSfxTypePlaying);

// /* 00101160 0000003c */ uint32 DYNSFX_SetSfxVolumeAndPan(/* s0 16 */ uint32 handle, /* a1 5 */ int volume, /* a2 6 */ int pan) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_SetSfxVolumeAndPan);

// /* 001011a0 00000038 */ uint32 DYNSFX_SetSfxVolPanPitch(/* s0 16 */ uint32 handle, /* a1 5 */ int volume, /* a2 6 */ int pan, /* f12 50 */ float pitch) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", DYNSFX_SetSfxVolPanPitch);

// /* 001011d8 00000038 */ static uint32 createSfxHandle(/* a0 4 */ AadSfxToneID toneID) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", createSfxHandle);

// /* 00101210 00000078 */ static void aadPutSfxCommand(/* t1 9 */ int statusByte, /* a1 5 */ int dataByte0, /* a2 6 */ int dataByte1, /* a3 7 */ uint32 ulongParam, /* f12 50 */ float floatParam) {
//     /* v1 3 */ AadSfxCommand *sfxCmd;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", aadPutSfxCommand);

// /* 00101288 00000040 */ static void aadExecuteSfxCommand(/* a0 4 */ AadSfxCommand *sfxCmd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", aadExecuteSfxCommand);

// /* 001012c8 000001c8 */ static void CalculateVolume(/* s2 18 */ AadSynthVoice *voice, /* s0 16 */ int volume, /* s1 17 */ int pan) {
//     /* f3 41 */ float voll;
//     /* f4 42 */ float volr;
//     {
//         /* f0 38 */ float worldPan;
//     }
//     {
//         /* f0 38 */ float worldPan;
//     }
//     {
//         /* f0 38 */ float customPan;
//     }
//     {
//         /* f0 38 */ float customPan;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", CalculateVolume);

// /* 00101490 0000010c */ static void CalculateFrequency(/* s2 18 */ AadSynthVoice *voice, /* f12 50 */ float pitch) {
//     /* f20 58 */ float fPlayRate;
//     /* f0 38 */ float pitchMult;
//     /* v0 2 */ int iPitch;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", CalculateFrequency);

// /* 001015a0 000001d0 */ static void sfxCmdPlayTone(/* s2 18 */ AadSfxCommand *sfxCmd) {
//     /* s4 20 */ uint32 handle;
//     /* s0 16 */ AadSynthVoice *voice;
//     /* a0 4 */ int channel;
//     /* s1 17 */ AadLoadedSfxToneAttr *sfxToneAttr;
//     /* s3 19 */ AadLoadedSfxWaveAttr *sfxWaveAttr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", sfxCmdPlayTone);

// /* 00101770 000000cc */ static void sfxCmdStopTone(/* a0 4 */ AadSfxCommand *sfxCmd) {
//     /* s2 18 */ uint32 handle;
//     /* s0 16 */ AadSynthVoice *voice;
//     /* s1 17 */ uint16 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", sfxCmdStopTone);

// /* 00101840 000000b4 */ static void sfxCmdStopAllTones(/* a0 4 */ AadSfxCommand *sfxCmd) {
//     /* s0 16 */ AadSynthVoice *voice;
//     /* s1 17 */ uint16 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", sfxCmdStopAllTones);

// /* 001018f8 000000dc */ static void sfxCmdSetToneVolumeAndPan(/* s1 17 */ AadSfxCommand *sfxCmd) {
//     /* s3 19 */ uint32 handle;
//     /* s0 16 */ AadSynthVoice *voice;
//     /* s2 18 */ uint16 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", sfxCmdSetToneVolumeAndPan);

// /* 001019d8 000000ec */ static void sfxCmdSetToneVolPanPitch(/* s1 17 */ AadSfxCommand *sfxCmd) {
//     /* s3 19 */ uint32 handle;
//     /* s0 16 */ AadSynthVoice *voice;
//     /* s2 18 */ uint16 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/sound/dynsfx", sfxCmdSetToneVolPanPitch);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D00);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D08);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D10);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D18);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D20);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D28);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D30);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D38);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D40);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D48);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D50);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D58);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D60);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D68);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D70);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1D88);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1DA0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1DB0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1DC8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1DE0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1DF0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1DF8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/sound/dynsfx", D_002B1E18);

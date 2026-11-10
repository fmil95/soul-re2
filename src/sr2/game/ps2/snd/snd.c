/* Original path: C:\sr2\game\ps2\snd\snd.c */
/* .text 0x00106DE0, .data 0x00229CC0, .rodata 0x002B20F8, .bss 0x002BF340 */

#include "ps2/snd/snd.h"

// /* 00106de0 0000010c */ static void FlushBatch() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", FlushBatch);

// /* 00106ef0 00000080 */ void AddCommandToBatch(/* t2 10 */ int cmd, /* t0 8 */ int param1, /* t1 9 */ int param2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", AddCommandToBatch);

// /* 00106f70 0000005c */ static SAMPLE* AllocSample() {
//     /* v1 3 */ SAMPLEMEM *sm;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", AllocSample);

// /* 00106fd0 0000003c */ static void FreeSample(/* a0 4 */ SAMPLE *sample) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", FreeSample);

// /* 00107010 0000005c */ static SRAMChunk* AllocSRAMChunk() {
//     /* v1 3 */ SRAMMEM *sm;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", AllocSRAMChunk);

// /* 00107070 00000014 */ static void FreeSRAMChunk(/* a0 4 */ SRAMChunk *sramchunk) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", FreeSRAMChunk);

// /* 00107088 00000008 */ void SND_EnumerateDevices() {}
void SND_EnumerateDevices(void) {
}

// /* 00107090 000001bc */ int SND_AllocChannel(/* s2 18 */ int pool, /* s3 19 */ int priority, /* s4 20 */ SNDCHANNELLOSTFUNC func) {
//     /* s0 16 */ int i;
//     /* s5 21 */ int chan;
//     /* s1 17 */ int chanpriority;
//     {
//         /* a2 6 */ int c;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_AllocChannel);

// /* 00107250 0000001c */ void* SND_GetUserData(/* a0 4 */ int channum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_GetUserData);

// /* 00107270 0000001c */ void SND_SetUserData(/* a0 4 */ int channum, /* a1 5 */ void *userdata) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetUserData);

// /* 00107290 00000088 */ void SND_FreeChannel(/* s1 17 */ int channum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_FreeChannel);

// /* 00107318 00000364 */ int SND_Init() {
//     /* v1 3 */ int i;
//     {
//         /* v0 2 */ SRAMChunk *schunkrev1;
//         /* s1 17 */ SRAMChunk *schunkrev0;
//         /* s0 16 */ SRAMChunk *schunkfree1;
//         /* s2 18 */ SRAMChunk *schunkfree2;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_Init);

// /* 00107680 0000008c */ void SND_Shutdown() {
//     {
//         /* s0 16 */ int i;
//         /* s0 16 */ SAMPLE *sample;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_Shutdown);

// /* 00107710 00000054 */ static void CalcHWVol(/* a0 4 */ int i) {
//     /* f1 39 */ float linvoll;
//     /* f0 38 */ float linvolr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", CalcHWVol);

// /* 00107768 0000001c */ void SND_SetSample(/* a0 4 */ int channum, /* a1 5 */ void *sample) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetSample);

// /* 00107788 0000001c */ void* SND_GetSample(/* a0 4 */ int channum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_GetSample);

// /* 001077a8 000000bc */ void SND_SetFrequency(/* a2 6 */ int channum, /* f12 50 */ float freq) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetFrequency);

// /* 00107868 00000070 */ void SND_SetReverb(/* v1 3 */ int channum, /* a1 5 */ int vol) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetReverb);

// /* 001078d8 00000028 */ void SND_SetReverbType(/* a0 4 */ int pool, /* a1 5 */ int type) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetReverbType);

// /* 00107900 00000028 */ void SND_SetReverbVolume(/* a0 4 */ int pool, /* a1 5 */ int volume) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetReverbVolume);

// /* 00107928 0000001c */ float SND_GetFrequency(/* a0 4 */ int channum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_GetFrequency);

// /* 00107948 00000074 */ void SND_Pause() {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_Pause);

// /* 001079c0 000000a0 */ void SND_Restart() {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_Restart);

// /* 00107a60 000000a8 */ void SND_SetFrequencyMultiply(/* f12 50 */ float mul) {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetFrequencyMultiply);

// /* 00107b08 000000bc */ void SND_SetVolume(/* s1 17 */ int channum, /* a1 5 */ int leftvol, /* a2 6 */ int rightvol) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetVolume);

// /* 00107bc8 00000008 */ void SND_Set3DPosition(/* a0 4 */ int channum, /* f12 50 */ float xpos, /* f13 51 */ float ypos, /* f14 52 */ float zpos, /* f15 53 */ float maxdist) {}
void SND_Set3DPosition(int channum, float xpos, float ypos, float zpos, float maxdist) {
}

// /* 00107bd0 0000001c */ void SND_SetPriority(/* a0 4 */ int channum, /* a1 5 */ int priority) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetPriority);

// /* 00107bf0 0000001c */ void SND_SetLoopMode(/* a0 4 */ int channum, /* a1 5 */ int loopmode) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetLoopMode);

// /* 00107c10 0000001c */ int SND_GetStatus(/* a0 4 */ int channum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_GetStatus);

// /* 00107c30 000001e0 */ void SND_Start(/* s1 17 */ int channum) {
//     /* s2 18 */ SAMPLE *sample;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_Start);

// /* 00107e10 00000078 */ void SND_Stop(/* a3 7 */ int channum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_Stop);

// /* 00107e88 00000034 */ void SND_SetSRAMType(/* a0 4 */ void *data, /* a1 5 */ int type) {
//     /* v1 3 */ SRAMChunk *sc;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetSRAMType);

// /* 00107ec0 0000011c */ static char* AllocSRAM(/* s2 18 */ int len, /* s0 16 */ SRAMChunk *sc) {
//     /* s1 17 */ int i;
//     /* s3 19 */ int free;
//     /* s4 20 */ int total;
//     {
//         /* v1 3 */ SRAMChunk *newchunk;
//         /* s1 17 */ int leftover;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", AllocSRAM);

// /* 00107fe0 00000100 */ static void FreeSRAM(/* a0 4 */ char *data, /* s1 17 */ SRAMChunk *sc) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", FreeSRAM);

// /* 001080e0 00000030 */ void* SND_AllocSRAM(/* a0 4 */ int size) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_AllocSRAM);

// /* 00108110 00000024 */ void SND_FreeSRAM(/* a0 4 */ void *data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_FreeSRAM);

// /* 00108138 00000014 */ void SND_StartSRAMWalk() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_StartSRAMWalk);

// /* 00108150 00000074 */ int SND_NextSRAMChunkInfo(/* a0 4 */ void **addr, /* a1 5 */ int *size, /* a2 6 */ int *type) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_NextSRAMChunkInfo);

// /* 001081c8 00000188 */ void SND_UploadSoundData(/* s3 19 */ void *sram, /* s2 18 */ void *src, /* s1 17 */ int len, /* a3 7 */ int block) {
//     {
//         /* s0 16 */ int size;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_UploadSoundData);

// /* 00108350 0000007c */ void* SND_CreateSample(/* s0 16 */ void *sram, /* s1 17 */ int len, /* a2 6 */ int loopstart, /* a3 7 */ int loopend) {
//     /* v1 3 */ SAMPLE *sample;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_CreateSample);

// /* 001083d0 00000080 */ void* SND_UploadSample(/* s2 18 */ void *data, /* s0 16 */ int len, /* s3 19 */ int loopstart, /* s4 20 */ int loopend) {
//     /* s1 17 */ void *sramdata;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_UploadSample);

// /* 00108450 00000020 */ void SND_SetSampleType(/* a0 4 */ void *smp, /* a1 5 */ int type) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetSampleType);

// /* 00108470 00000104 */ void SND_FreeSample(/* a0 4 */ void *smp) {
//     /* s1 17 */ int i;
//     /* s2 18 */ SAMPLE *sample;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_FreeSample);

// /* 00108578 00000118 */ static void RetrieveStatus() {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", RetrieveStatus);

// /* 00108690 0000000c */ void SND_SetTimerFunc(/* a0 4 */ SNDTIMERFUNC func) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SetTimerFunc);

// /* 001086a0 0000022c */ void SND_SystemTimer(/* f20 58 */ float time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/snd", SND_SystemTimer);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B20F8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2128);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2140);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2160);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2188);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B21A8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B21D8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B21F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2220);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2238);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2248);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2268);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2298);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B22A8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B22C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B22D8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B22F8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2320);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2348);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2380);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B23B8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B23E8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/snd", D_002B2410);

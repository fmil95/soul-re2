/* Original path: C:\sr2\game\ps2\snd\sndstrm.c */
/* .text 0x001088D0, .data 0x00229E00, .rodata 0x002B2430, .bss 0x002E0F50 */

#include "ps2/snd/sndstrm.h"

// /* 001088d0 000000e8 */ static SOUNDSTREAM* AllocStream() {
//     /* v1 3 */ STREAMMEM *sm;
//     {
//         /* s1 17 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", AllocStream);

// /* 001089b8 00000018 */ static void FreeStream(/* a0 4 */ SOUNDSTREAM *stream) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", FreeStream);

// /* 001089d0 000000f0 */ void SNDSTRM_Init() {
//     /* v1 3 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_Init);

// /* 00108ac0 00000108 */ static void SNDSTRM_Prebuffer(/* t0 8 */ SOUNDSTREAM *stream) {
//     /* a1 5 */ SOUNDSTREAM_CHANNEL *chan1;
//     /* a2 6 */ SOUNDSTREAM_CHANNEL *chan2;
//     /* v1 3 */ int diffSize;
//     {
//         /* a2 6 */ int size;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_Prebuffer);

// /* 00108bc8 00000674 */ static void SndStreamLoadCallback(/* a0 4 */ void *buffer, /* s5 21 */ int size, /* s2 18 */ void *context) {
//     /* s1 17 */ SOUNDSTREAM_CHANNEL *chan1;
//     /* s3 19 */ SOUNDSTREAM_CHANNEL *chan2;
//     /* s4 20 */ char *processBuffer;
//     {
//         /* s0 16 */ int dmaSize;
//     }
//     {
//         /* s0 16 */ int dmaSize;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SndStreamLoadCallback);

// /* 00109240 00000044 */ void SNDSTRM_SetBufferSize(/* a1 5 */ int newSize) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_SetBufferSize);

// /* 00109288 0000017c */ void* SNDSTRM_CreateStream(/* s2 18 */ char *name) {
//     /* s0 16 */ SOUNDSTREAM *stream;
//     /* 0x0(sp) */ char filename[256];
//     /* s1 17 */ int size;
//     /* s1 17 */ void *fileHandle;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_CreateStream);

// /* 00109408 00000008 */ static void StreamChannelLost(/* a0 4 */ int channum) {}
void StreamChannelLost_00109408(void) {
}

// /* 00109410 000001f4 */ void SNDSTRM_Play(/* a0 4 */ void *str) {
//     /* s0 16 */ SOUNDSTREAM *stream;
//     /* s2 18 */ SOUNDSTREAM_CHANNEL *chan1;
//     /* s4 20 */ SOUNDSTREAM_CHANNEL *chan2;
//     {
//         /* s1 17 */ int channum;
//     }
//     {
//         /* s1 17 */ int channum;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_Play);

// /* 00109608 00000094 */ void SNDSTRM_SetVolume(/* s0 16 */ void *str, /* a1 5 */ int volleft, /* a2 6 */ int volright) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_SetVolume);

// /* 001096a0 00000094 */ void SNDSTRM_Set3DPosition(/* s0 16 */ void *str, /* f20 58 */ float x, /* f21 59 */ float y, /* f22 60 */ float z, /* f23 61 */ float maxdistance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_Set3DPosition);

// /* 00109738 0000038c */ void SndStreamPoll() {
//     /* s1 17 */ SOUNDSTREAM *stream;
//     /* s0 16 */ SOUNDSTREAM_CHANNEL *chan1;
//     /* s4 20 */ SOUNDSTREAM_CHANNEL *chan2;
//     /* s7 23 */ int i;
//     {
//         /* v1 3 */ int addr;
//         /* s2 18 */ int size;
//         /* s5 21 */ int sramoffset;
//         /* t5 13 */ int offset;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SndStreamPoll);

// /* 00109ac8 00000050 */ static void SNDSTRM_StopChannel(/* s0 16 */ SOUNDSTREAM_CHANNEL *chan) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_StopChannel);

// /* 00109b18 0000005c */ void SNDSTRM_Stop(/* a0 4 */ void *str) {
//     /* s0 16 */ SOUNDSTREAM *stream;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_Stop);

// /* 00109b78 0000002c */ int SNDSTRM_IsCueing(/* a0 4 */ void *str) {
//     /* a0 4 */ SOUNDSTREAM *stream;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_IsCueing);

// /* 00109ba8 00000040 */ int SNDSTRM_IsPlaying(/* a0 4 */ void *str) {
//     /* a0 4 */ SOUNDSTREAM *stream;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_IsPlaying);

// /* 00109be8 0000004c */ static void SNDSTRM_ReleaseChannel(/* s0 16 */ SOUNDSTREAM_CHANNEL *chan) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_ReleaseChannel);

// /* 00109c38 00000064 */ void SNDSTRM_StopAllStreams() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_StopAllStreams);

// /* 00109ca0 0000007c */ void SNDSTRM_ReleaseStream(/* a0 4 */ void *str) {
//     /* s0 16 */ SOUNDSTREAM *stream;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", SNDSTRM_ReleaseStream);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B2430);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B2450);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B2490);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B24A0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B24C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B24D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B24E0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B2500);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B2520);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B2540);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B2560);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B25A8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B25D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B25E8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B2610);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/snd/sndstrm", D_002B2630);

/* Original path: C:\sr2\game\ps2\ps2dma.c */
/* .text 0x001D6F48, .data 0x002A66D0, .bss 0x01E9B320 */
/* Code from other files was inlined here: mempack.h, ps2/ps2dma.h, timer.h */

#include "ps2/ps2dma.h"

// /* 001d6f48 000000a4 */ void DMA_WaitForChannelMask(/* a3 7 */ int channelMask) {
//     /* v1 3 */ uint32 tempDSTAT;
//     /* a2 6 */ uint32 channel;
//     /* t0 8 */ uint32 wait;
//     {
//         /* a1 5 */ int mask;
//         {
//             /* a0 4 */ sceDmaChan *chan;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", DMA_WaitForChannelMask);

// /* 001d6ff0 00000068 */ void DMA_TimeTransfer(/* a0 4 */ int channel) {
//     {
//         /* v1 3 */ int32 counter;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", DMA_TimeTransfer);

// /* 001d7058 00000050 */ void DMA_StartTransfer(/* a0 4 */ int channel, /* a1 5 */ void *address) {
//     /* a3 7 */ sceDmaChan *chan;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", DMA_StartTransfer);

// /* 001d70a8 00000060 */ int DMA_VIFComplete(/* a0 4 */ int dummy) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", DMA_VIFComplete);

// /* 001d7108 00000038 */ int DMA_GIFComplete(/* a0 4 */ int dummy) {
//     {
//         /* v1 3 */ int32 counter;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", DMA_GIFComplete);

// /* 001d7140 00000028 */ void SPAD_DMA_Setup() {
//     /* v0 2 */ uint32 tempPCR;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", SPAD_DMA_Setup);

// /* 001d7168 00000084 */ void SPAD_DMA_Init(/* s0 16 */ int buffersize_qw) {
//     {
//         /* v1 3 */ int size;
//         {
//             /* a1 5 */ void *ret;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", SPAD_DMA_Init);

// /* 001d71f0 00000144 */ void SPAD_DMA_End() {
//     /* t0 8 */ int cnt;
//     {
//         /* a0 4 */ void *dest;
//         /* a3 7 */ unsigned int src;
//         /* t0 8 */ int qwc;
//         {
//             /* v0 2 */ u_int stat;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", SPAD_DMA_End);

// /* 001d7338 00000160 */ void SPAD_DMA_Send() {
//     /* a1 5 */ int cnt;
//     {
//         /* a3 7 */ void *dest;
//         /* a2 6 */ unsigned int src;
//         /* a1 5 */ int qwc;
//         {
//             /* v0 2 */ u_int stat;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", SPAD_DMA_Send);

// /* 001d7498 0000007c */ void SPAD_DMA_Flush() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", SPAD_DMA_Flush);

// /* 001d7518 00000060 */ void SPAD_DMA_Sync() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2dma", SPAD_DMA_Sync);

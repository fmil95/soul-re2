#ifndef PS2_PS2DMA_H
#define PS2_PS2DMA_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a66d0 */ extern void *channelAddr[0];
/* data 2a66f8 */ extern int vifDMARunning;
/* data 2a66fc */ extern int spad_dma_qw_left;
/* data 2a6700 */ extern uint32 spad_dma_buffer_ptr;
/* data 2a6704 */ extern int32 crap;
/* data 2a6708 */ extern int32 gDebugVIFTimeStart;
/* data 2a670c */ extern int32 gDebugGIFTimeStart;
/* bss 1e9b320 */ extern int spad_dma_sendflag;
/* bss 1e9b328 */ extern uint32 spad_dma_buffers[2];
/* bss 1e9b330 */ extern void *spad_mem_addr;
/* bss 1e9b334 */ extern int spad_dma_buffersize_qw;
/* bss 1e9b338 */ extern int spad_dma_current_buffer;

/* Non-static functions of this unit (STABS signatures). */
void DMA_WaitForChannelMask(int channelMask);
void DMA_TimeTransfer(int channel);
void DMA_StartTransfer(int channel, void *address);
int DMA_VIFComplete(int dummy);
int DMA_GIFComplete(int dummy);
void SPAD_DMA_Setup(void);
void SPAD_DMA_Init(int buffersize_qw);
void SPAD_DMA_End(void);
void SPAD_DMA_Send(void);
void SPAD_DMA_Flush(void);
void SPAD_DMA_Sync(void);

#endif /* PS2_PS2DMA_H */

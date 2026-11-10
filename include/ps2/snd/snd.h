#ifndef PS2_SND_SND_H
#define PS2_SND_SND_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 229cc0 */ extern SRAMMEM *FirstSRAMMem;
/* data 229cc4 */ extern SAMPLEMEM *FirstSampleMem;
/* data 229cc8 */ extern SAMPLE *samplelist;
/* data 229ccc */ extern SNDTIMERFUNC PS2SoundTimerFunc;
/* data 229cd0 */ extern float freqmultiply;
/* data 229cd4 */ extern int a64init;
/* data 229cd8 */ extern int Core0ReverbType;
/* data 229cdc */ extern int Core1ReverbType;
/* data 229ce0 */ extern int batchindex;
/* data 229ce4 */ extern int batchflipper;
/* data 229ce8 */ extern sceSifClientData iopsnd0;
/* bss 2bf340 */ extern SRAMMEM SRAMMemBlocks[2048];
/* bss 2cd340 */ extern SAMPLEMEM SampleMemBlocks[2048];
/* bss 2d7340 */ extern CHANNELINFO chans[48];
/* bss 2d7e80 */ extern unsigned int SoundMemPtr;
/* bss 2d7e84 */ extern SRAMChunk *SRAM;
/* bss 2d7e88 */ extern int keyon[2];
/* bss 2d7e90 */ extern int keyoff[2];
/* bss 2d7e98 */ extern int reverb[2];
/* bss 2d7ea0 */ extern int Reverb0Volume;
/* bss 2d7ea4 */ extern int Reverb1Volume;
/* data 229d40 */ extern int statusreturns[48];
/* bss 2d7ec0 */ extern RemoteDataStruct RemoteData[2];
/* bss 2d8f00 */ extern char testbuffer[32832];
/* bss 2e0f40 */ extern SRAMChunk *scwalk;

/* Non-static functions of this unit (STABS signatures). */
void AddCommandToBatch(int cmd, int param1, int param2);
void SND_EnumerateDevices(void);
int SND_AllocChannel(int pool, int priority, SNDCHANNELLOSTFUNC func);
void*SND_GetUserData(int channum);
void SND_SetUserData(int channum, void *userdata);
void SND_FreeChannel(int channum);
int SND_Init(void);
void SND_Shutdown(void);
void SND_SetSample(int channum, void *sample);
void*SND_GetSample(int channum);
void SND_SetFrequency(int channum, float freq);
void SND_SetReverb(int channum, int vol);
void SND_SetReverbType(int pool, int type);
void SND_SetReverbVolume(int pool, int volume);
float SND_GetFrequency(int channum);
void SND_Pause(void);
void SND_Restart(void);
void SND_SetFrequencyMultiply(float mul);
void SND_SetVolume(int channum, int leftvol, int rightvol);
void SND_Set3DPosition(int channum, float xpos, float ypos, float zpos, float maxdist);
void SND_SetPriority(int channum, int priority);
void SND_SetLoopMode(int channum, int loopmode);
int SND_GetStatus(int channum);
void SND_Start(int channum);
void SND_Stop(int channum);
void SND_SetSRAMType(void *data, int type);
void*SND_AllocSRAM(int size);
void SND_FreeSRAM(void *data);
void SND_StartSRAMWalk(void);
int SND_NextSRAMChunkInfo(void **addr, int *size, int *type);
void SND_UploadSoundData(void *sram, void *src, int len, int block);
void*SND_CreateSample(void *sram, int len, int loopstart, int loopend);
void*SND_UploadSample(void *data, int len, int loopstart, int loopend);
void SND_SetSampleType(void *smp, int type);
void SND_FreeSample(void *smp);
void SND_SetTimerFunc(SNDTIMERFUNC func);
void SND_SystemTimer(float time);

#endif /* PS2_SND_SND_H */

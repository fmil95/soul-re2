#ifndef PS2_VRAM_H
#define PS2_VRAM_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25e000 */ extern int gUseMipMap;
/* data 25e004 */ extern int gMipMapK;
/* data 25e008 */ extern VramTracker textureTracker[512];
/* data 264080 */ extern uint16 clutData[512][256];
/* data 2a4080 */ extern int gCurVRAMPtr;
/* bss 1e94c50 */ extern int gFirstEmptyTexture;
/* data 2a4084 */ extern int gNumLoadedTextures;

/* Non-static functions of this unit (STABS signatures). */
int VRAM_FindTextureInCache(int textureID);
int VRAM_FindBehindTextureInCache(int textureID);
uint32 VRAM_CalcMipLevel(int cacheNum, float closeq);
VramPixelPacket*VRAM_SetupTexturePacketMipMap(int cacheNum, VramPixelPacket *loadPacket, TexEnvOpaque *texEnv, int lod, int vlen);
VramPixelPacket*VRAM_SetupTexturePacket(int cacheNum, VramPixelPacket *loadPacket, TexEnvTranslucent *texEnv, int eop, float closeq);
int VRAM_GetDBP(void);
int VRAM_AllocatePreloadedTexture(VramTextureHeader *header, void *pixels, void *clut);
void VRAM_LoadGenericVram(VramLink *textureList, uint32 *tptr);
void VRAM_TransferTerrainToVram(void *dataPtr, void *context, void *bla);
void VRAM_TransferObjectToVram(void *dataPtr, void *context, void *ret2);
void VRAM_FreeTexture(int entry);
void VRAM_FreePreloadedTexture(int entry);
void VRAM_FreeTextureList(char *vramName, VramLink *texture);
void VRAM_FreeObjectVram(char *vramName, Object *object);
void VRAM_FreeUnitVram(char *vramName, StreamUnit *streamUnit);
void VRAM_InitVramBlockCache(void);
void VRAM_CancelCallback(FILEREQUEST *filereq);
void VRAM_LoadReturn(void *dataPtr, void *data1, void *data2);
void VRAM_ScreenCapture(void *dest);
void VRAM_LoadObjectVram(ObjectTracker *objectTracker);
void VRAM_LoadUnitVram(char *vramName, StreamUnit *streamUnit);
int VRAM_AllocateTextureNew(VramTextureHeader *header, int tlen);
void VRAM_LoadCallback(void *buffer, int length, int memType, FILEREQUEST *filereq);
void VRAM_CreateTexture(TexEnvTranslucent *source, TexEnvTranslucent *target);

#endif /* PS2_VRAM_H */

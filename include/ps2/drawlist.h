#ifndef PS2_DRAWLIST_H
#define PS2_DRAWLIST_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 236a40 */ extern int32 gTexturing;
/* data 236a44 */ extern int32 gUseOldVU1Code;
/* data 236a48 */ extern int32 gQWCAdjust;
/* data 236a50 */ extern VramPixelPacket *firstPdat;
/* data 236a54 */ extern DmaTag *firstTag;
/* data 236a58 */ extern VramPixelPacket **firstTextureTag;
/* data 236a5c */ extern VramPixelPacket **tempTextureTag;
/* data 236a60 */ extern void *firstVifTag;
/* data 236a64 */ extern VramPixelPacket **firstGifTag;
/* data 236a68 */ extern void *oldFirstVifTag;
/* data 236a6c */ extern VramPixelPacket **oldFirstGifTag;
/* data 236a70 */ extern TexEnvTranslucent *DRAWLIST_zSortTexEnv;
/* data 236a74 */ extern _TextureItem *PS2_drawList;
/* data 236a80 */ extern TexEnvTranslucent PS2_SpecialTextures[2];
/* data 236b40 */ extern ZBucket PS2_sortedDrawList[16384];
/* data 256b40 */ extern int numZSortedTextures;
/* data 256b44 */ extern uint8 *gDrawListNextMem;
/* bss 30e100 */ extern uint8 drawListPool[2][1835008];
/* bss 68e100 */ extern uint8 *gDrawListStartMem;
/* data 256b48 */ extern int numItems;
/* data 256b4c */ extern int numTextures;
/* data 256b50 */ extern int ZSortedItemFlag;
/* bss 68e104 */ extern VramPixelPacket *oldPdat;
/* bss 68e108 */ extern DmaTag *oldTag;
/* data 256b54 */ extern VramPixelPacket **oldTextureTag;
/* data 256b58 */ extern int vblDrawEnabled;
/* bss 68e10c */ extern int32 vblCount;
/* bss 68e110 */ extern int vifHandler;
/* bss 68e114 */ extern int gifHandler;
/* bss 68e118 */ extern int vifIntHandler;

/* Non-static functions of this unit (STABS signatures). */
int DRAWLIST_GetUsedMem(void);
void*DRAWLIST_GetTempBuffer(int size);
void DRAWLIST_ClearList(void);
void DRAWLIST_AddDrawItem(int texture, float close_q, void *data, void *nextPtr);
void DRAWLIST_AddZSortedDrawItem(int texture, void *data, int32 z, float close_q, int32 attr, void *nextTag);
void DRAWLIST_AddZSortedDrawItemSpad(int texture, void *data, int32 z, float close_q, int32 attr, void *nextTag);
int DRAWLIST_NextTexture(int dummy);
int DRAWLIST_VBL(int dummy);
void DRAWLIST_WaitVBL(void);
void DRAWLIST_DrawList(void);
void DRAWLIST_InitTexEnvMem(void);
void DRAWLIST_BuildList(void);
void DRAWLIST_Disable(void);
void DRAWLIST_Enable(void);
void DRAWLIST_AlignMem64(void);

#endif /* PS2_DRAWLIST_H */

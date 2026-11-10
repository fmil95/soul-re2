#ifndef GLYPH_H
#define GLYPH_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25aeb0 */ extern short int fx_going;
/* data 25aeb4 */ extern FXBlastringEffect *fx_blastring;
/* data 25aeb8 */ extern short int HUD_Captured;
/* bss 6928e0 */ extern short int MANNA_Position;
/* bss 6928e2 */ extern short int MANNA_Pos_vel;
/* bss 6928e4 */ extern float glyph_time;
/* bss 6928e8 */ extern short int glyph_trigger;
/* bss 6928ea */ extern short int glyph_cost;
/* bss 6928ec */ extern Instance *glyphInstance;
/* bss 6928f0 */ extern short int HUD_Count;
/* bss 6928f2 */ extern short int HUD_Count_Overall;
/* bss 6928f4 */ extern int blast_range;
/* bss 6928f8 */ extern int fx_radius_old;
/* bss 6928fc */ extern float MANNA_Pickup_Time;
/* bss 692900 */ extern short int HUD_Rotation;
/* bss 692902 */ extern short int HUD_Rot_vel;
/* bss 692904 */ extern short int HUD_Position;
/* bss 692906 */ extern short int HUD_Pos_vel;
/* bss 692908 */ extern short int HUD_State;
/* bss 69290a */ extern short int HUD_Wait;
/* bss 692910 */ extern Vector4f HUD_Cap_Pos;
/* bss 692920 */ extern Vector4f HUD_Cap_Vel;
/* bss 692930 */ extern int warpDraw;
/* bss 692934 */ extern int glowdeg;
/* data 25aebc */ extern int hud_warp_arrow_flash;

/* Non-static functions of this unit (STABS signatures). */
void CriticalDampValueS(int32 dampMode, int16 *sourceVal, int16 targetVal, int16 *vel, int16 *accl, int16 smooth);
void GlyphInit(Instance *instance, GameTracker *gameTracker);
void GlyphCollide(Instance *instance, GameTracker *gameTracker);
void GlyphProcess(Instance *instance, GameTracker *gameTracker);
uint32 GlyphQuery(Instance *instance, uint32 query);
void GlyphPost(Instance *instance, uint32 message, uint32 messageData);
int GlyphIsGlyphOpen(Instance *instance);
void GLYPH_Draw(void);
void GlyphTrigger(void);
void MANNA_Pickup(void);
void HEALTHU_Pickup(Instance *instance);
void HUD_Damp(short int *val, short int target, short int *vel, short int max);
void HUD_Setup_Chit_Count(int chits);
void HUD_Draw(void);

#endif /* GLYPH_H */

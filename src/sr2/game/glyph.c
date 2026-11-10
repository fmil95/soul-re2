/* Original path: C:\sr2\game\glyph.c */
/* .text 0x00138BC0, .data 0x0025AEB0, .rodata 0x002B4950, .bss 0x006928E0 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h */

#include "glyph.h"

// /* 00138bc0 00000170 */ void CriticalDampValueS(/* a0 4 */ int32 dampMode, /* a1 5 */ int16 *sourceVal, /* a2 6 */ int16 targetVal, /* a3 7 */ int16 *vel, /* t0 8 */ int16 *accl, /* t1 9 */ int16 smooth) {
//     /* t1 9 */ int16 maxVel;
//     /* a0 4 */ int16 useVel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", CriticalDampValueS);

// /* 00138d30 0000012c */ void GlyphInit(/* s2 18 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* s0 16 */ GlyphData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", GlyphInit);

// /* 00138e60 00000008 */ void GlyphCollide(/* a0 4 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {}
void GlyphCollide(Instance *instance, GameTracker *gameTracker) {
}

// /* 00138e68 00000068 */ void GlyphProcess(/* s0 16 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {
//     /* v1 3 */ GlyphData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", GlyphProcess);

// /* 00138ed0 0000006c */ uint32 GlyphQuery(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 query) {
//     /* s0 16 */ GlyphData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", GlyphQuery);

// /* 00138f40 0000002c */ void GlyphPost(/* a0 4 */ Instance *instance, /* a1 5 */ uint32 message, /* a2 6 */ uint32 messageData) {
//     /* a0 4 */ GlyphData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", GlyphPost);

// /* 00138f70 0000009c */ static void _GlyphSwitchProcess(/* s2 18 */ Instance *instance, /* s3 19 */ GlyphProcessFunction *process) {
//     /* s1 17 */ GlyphData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", _GlyphSwitchProcess);

// /* 00139010 0000000c */ int GlyphIsGlyphOpen(/* a0 4 */ Instance *instance) {
//     /* v1 3 */ GlyphData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", GlyphIsGlyphOpen);

// /* 00139020 00000068 */ static int _GlyphIsGlyphSet(/* s0 16 */ int glyph) {
//     /* v0 2 */ uint32 abilities;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", _GlyphIsGlyphSet);

// /* 00139088 00000068 */ static int _GlyphIsGlyphUsable(/* s0 16 */ int glyph) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", _GlyphIsGlyphUsable);

// /* 001390f0 00000038 */ static int _GlyphIsAnyGlyphSet() {
//     /* v0 2 */ uint32 abilities;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", _GlyphIsAnyGlyphSet);

// /* 00139128 0000000c */ static int _GlyphCost(/* a0 4 */ GlyphTuneData *glyphtunedata, /* a1 5 */ int glyphNum) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", _GlyphCost);

// /* 00139138 00000024 */ static int GlyphIsPuppetShowModeOn() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", GlyphIsPuppetShowModeOn);

// /* 00139160 000000a8 */ static void _GlyphDefaultProcess(/* s2 18 */ Instance *instance, /* a1 5 */ int data1, /* a2 6 */ int data2) {
//     /* v0 2 */ Message *Ptr;
//     /* s0 16 */ GlyphData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", _GlyphDefaultProcess);

// /* 00139208 00000380 */ static void GlyphDrawMenu(/* s7 23 */ Instance *instance) {
//     /* 0x0(sp) */ Vector2f place;
//     /* 0x10(sp) */ Vector2f center;
//     /* s5 21 */ int n;
//     /* s3 19 */ int rot;
//     /* f23 61 */ float radius;
//     /* f20 58 */ float glyph_rotation_speed;
//     /* 0x20(sp) */ int MANNA_Count;
//     /* s4 20 */ GlyphData *data;
//     /* s6 22 */ GlyphTuneData *glyphtunedata;
//     {
//         /* a3 7 */ int enabled;
//         /* f22 60 */ float scale_modify;
//         /* s1 17 */ int num;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", GlyphDrawMenu);

// /* 00139588 00000014 */ static float GlyphTime(/* f12 50 */ float time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", GlyphTime);

// /* 001395a0 00000114 */ static void ShrinkGlyphMenu(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ GlyphData *data;
//     /* v0 2 */ int time;
//     /* 0x0(sp) */ short int accl;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", ShrinkGlyphMenu);

// /* 001396b8 000000d8 */ static void EnlargeGlyphMenu(/* a0 4 */ Instance *instance) {
//     /* s0 16 */ GlyphData *data;
//     /* v0 2 */ int time;
//     /* 0x0(sp) */ short int accl;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", EnlargeGlyphMenu);

// /* 00139790 00000138 */ static void _GlyphOffProcess(/* s2 18 */ Instance *instance, /* s5 21 */ int data1, /* s4 20 */ int data2) {
//     /* v0 2 */ Message *Ptr;
//     /* s1 17 */ GlyphData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", _GlyphOffProcess);

// /* 001398c8 000004b0 */ static void _GlyphSelectProcess(/* s4 20 */ Instance *instance, /* 0x0(sp) */ int data1, /* fp 30 */ int data2) {
//     /* v0 2 */ Message *Ptr;
//     /* s1 17 */ GlyphData *data;
//     /* s6 22 */ GlyphTuneData *glyphtunedata;
//     /* s5 21 */ int dontdraw_flag;
//     {
//         /* s0 16 */ int MANNA_Count;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", _GlyphSelectProcess);

// /* 00139d78 00000024 */ void GLYPH_Draw() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", GLYPH_Draw);

// /* 00139da0 000000c0 */ static void Glyph_StartSpell(/* a0 4 */ Instance *instance, /* a1 5 */ int glyphnum) {
//     /* s0 16 */ GlyphData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", Glyph_StartSpell);

// /* 00139e60 000000f4 */ static void _GlyphGenericProcess(/* s1 17 */ Instance *instance, /* s4 20 */ int data1, /* s3 19 */ int data2) {
//     /* v0 2 */ Message *Ptr;
//     /* s0 16 */ GlyphData *data;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", _GlyphGenericProcess);

// /* 00139f58 00000020 */ void GlyphTrigger() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", GlyphTrigger);

// /* 00139f78 00000020 */ void MANNA_Pickup() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", MANNA_Pickup);

// /* 00139f98 000000b0 */ void HEALTHU_Pickup(/* a0 4 */ Instance *instance) {
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         /* BADREGISTER -1 */ Vector4fr m2;
//         /* BADREGISTER -1 */ Vector4fr m1;
//         /* BADREGISTER -1 */ Vector4fr m0;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", HEALTHU_Pickup);

// /* 0013a048 0000003c */ void HUD_Damp(/* a0 4 */ short int *val, /* a1 5 */ short int target, /* v0 2 */ short int *vel, /* a3 7 */ short int max) {
//     /* 0x0(sp) */ short int accl;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", HUD_Damp);

// /* 0013a088 00000060 */ static void HUD_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", HUD_Init);

// /* 0013a0e8 00000028 */ void HUD_Setup_Chit_Count(/* a0 4 */ int chits) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", HUD_Setup_Chit_Count);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/glyph", D_002B4950);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/glyph", D_002B4958);

// /* 0013a110 0000040c */ void HUD_Draw() {
//     {
//         /* s2 18 */ Object *object;
//         /* t0 8 */ int autofaceflag;
//         /* s1 17 */ int sneakflag;
//         /* s3 19 */ int letterbox_flag;
//         /* s0 16 */ uint32 hud_clr;
//         /* s5 21 */ ReaverData *reaverData;
//         {
//             /* v1 3 */ int alpha;
//         }
//         {
//             /* a2 6 */ int tex;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/glyph", HUD_Draw);

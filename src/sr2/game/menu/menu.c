/* Original path: C:\sr2\game\menu\menu.c */
/* .text 0x001C6750, .data 0x002A6578, .rodata 0x002B77A8 */

#include "menu/menu.h"

// /* 001c6750 00000048 */ void MENU_Init(/* s1 17 */ GameTracker *gt) {
//     /* s0 16 */ menu_t *menu;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", MENU_Init);

// /* 001c6798 00000008 */ int menu_data_size() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_data_size);

// /* 001c67a0 00000034 */ void menu_initialize(/* s0 16 */ menu_t *menu) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_initialize);

// /* 001c67d8 00000038 */ void menu_format(/* a0 4 */ menu_t *menu, /* a1 5 */ int center, /* a2 6 */ int xpos, /* a3 7 */ int ypos, /* t0 8 */ int width, /* t1 9 */ int lineskip, /* t2 10 */ int itemskip, /* t3 11 */ int border) {
//     {
//         /* a0 4 */ menu_format_t *fmt;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_format);

// /* 001c6810 0000003c */ void MENU_Set(/* a0 4 */ menu_fn_t *fn) {
//     /* v1 3 */ menu_t *menu;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", MENU_Set);

// /* 001c6850 00000068 */ void menu_push(/* a0 4 */ menu_t *menu, /* a1 5 */ menu_fn_t *fn) {
//     /* v0 2 */ menu_stack_t *stack;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_push);

// /* 001c68b8 0000000c */ void menu_pop(/* a0 4 */ menu_t *menu) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_pop);

// /* 001c68c8 00000008 */ void menu_draw_fn(/* a0 4 */ menu_t *menu, /* a1 5 */ menu_draw_fn_t *fn) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_draw_fn);

// /* 001c68d0 000000b4 */ void menu_item(/* s2 18 */ menu_t *menu, /* a1 5 */ menu_item_fn_t *fn, /* a2 6 */ int32 parameter, /* a3 7 */ menu_item_wait_fn_t *waitFunction, /* t0 8 */ int32 flags, /* t1 9 */ char *format) {
//     {
//         /* s1 17 */ menu_item_t *item;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_item);

// /* 001c6988 0000010c */ static void menu_build(/* s0 16 */ menu_t *menu) {
//     /* s1 17 */ menu_stack_t *stack;
//     {
//         /* a0 4 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_build);

// /* 001c6a98 00000008 */ void DisplayHintBox(/* a0 4 */ int len, /* a1 5 */ int y) {}
void DisplayHintBox(int len, int y) {
}

// /* 001c6aa0 00000308 */ void DisplayMenuBox(/* a0 4 */ int x0, /* a1 5 */ int x1, /* a2 6 */ int y0, /* a3 7 */ int y1) {
//     /* 0x0(sp) */ Extents2d ext;
//     /* data 2a6578 */ static int dy[16];
//     /* t6 14 */ int i;
//     /* s0 16 */ int k;
//     /* a0 4 */ int slice0;
//     /* 0x10(sp) */ DRAWVERTEX verts[8];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", DisplayMenuBox);

// /* 001c6da8 00000390 */ static int menu_draw_item(/* a0 4 */ menu_t *menu, /* 0x100(sp) */ int ypos, /* s3 19 */ int xadj, /* a3 7 */ int yadj, /* s2 18 */ char *text, /* 0x104(sp) */ int color, /* s0 16 */ int32 flags, /* s5 21 */ Extents2d *e, /* 0x1d0(sp) */ int doprint) {
//     /* 0x108(sp) */ menu_format_t *fmt;
//     /* a2 6 */ int numColumns;
//     /* a1 5 */ int i;
//     /* a3 7 */ int texLen;
//     /* s0 16 */ int columnIndex;
//     /* 0x10c(sp) */ int columnWidth;
//     /* a1 5 */ char *columnText;
//     /* 0x0(sp) */ char tmpBuff[256];
//     /* s1 17 */ char *lineText;
//     /* s6 22 */ int columnYPos;
//     /* 0x110(sp) */ int maxColumnYPos;
//     /* 0x114(sp) */ int center;
//     /* s1 17 */ int leftEdge;
//     /* s4 20 */ int xpos;
//     {
//         /* s7 23 */ char *eol;
//         {
//             /* s2 18 */ char *eop;
//             {
//                 /* s0 16 */ char *tmp;
//                 /* v0 2 */ int wd;
//             }
//             {
//                 /* v0 2 */ int wd;
//             }
//             {
//                 /* s0 16 */ int wd;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_draw_item);

// /* 001c7138 000001c0 */ void MENU_Draw(/* s2 18 */ menu_t *menu) {
//     {
//         /* 0x10(sp) */ Extents2d ext;
//         /* s6 22 */ menu_stack_t *stack;
//         /* s4 20 */ int index;
//         /* s3 19 */ int ypos;
//         /* s0 16 */ int i;
//         {
//             /* t1 9 */ int color;
//         }
//         {
//             /* t1 9 */ int color;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", MENU_Draw);

// /* 001c72f8 00000264 */ static void menu_run(/* s0 16 */ menu_t *menu) {
//     /* s3 19 */ menu_ctrl_t ctrl;
//     /* s4 20 */ menu_stack_t *stack;
//     /* s1 17 */ int index;
//     /* s2 18 */ menu_item_t *item;
//     {
//         /* a1 5 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_run);

// /* 001c7560 0000002c */ void MENU_Process(/* s0 16 */ menu_t *menu) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", MENU_Process);

// /* 001c7590 0000003c */ void menu_play_movie(/* s0 16 */ char *name) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/menu/menu", menu_play_movie);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menu", D_002B77A8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/menu/menu", D_002B77B0);

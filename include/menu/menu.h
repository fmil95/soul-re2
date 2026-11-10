#ifndef MENU_MENU_H
#define MENU_MENU_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void MENU_Init(GameTracker *gt);
int menu_data_size(void);
void menu_initialize(menu_t *menu);
void menu_format(menu_t *menu, int center, int xpos, int ypos, int width, int lineskip, int itemskip, int border);
void MENU_Set(menu_fn_t *fn);
void menu_push(menu_t *menu, menu_fn_t *fn);
void menu_pop(menu_t *menu);
void menu_draw_fn(menu_t *menu, menu_draw_fn_t *fn);
void menu_item(menu_t *menu, menu_item_fn_t *fn, int32 parameter, menu_item_wait_fn_t *waitFunction, int32 flags, char *format);
void DisplayHintBox(int len, int y);
void DisplayMenuBox(int x0, int x1, int y0, int y1);
void MENU_Draw(menu_t *menu);
void MENU_Process(menu_t *menu);
void menu_play_movie(char *name);

#endif /* MENU_MENU_H */

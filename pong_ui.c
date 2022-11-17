/**
 * @file pong.c
 * @author krezolekcoder (https://github.com/krezolekcoder)
 * @brief
 * @version 0.1
 * @date 2022-08-27
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "pong_ui.h"
#include "raylib.h"

static prv_pong_draw_pong_line(unsigned int x_coord);
static prv_update_pong_pad();

void pong_ui_initialize(struct pong_pad *pong_pad_left, struct pong_pad *pong_pad_right)
{
}

void pong_ui_pad_update(struct pong_pad *pong_pad)
{
}
void pong_ui_ball_update(struct pong_ball *pong_ball)
{
}
/**
 * @file pong.h
 * @author krezolekcoder (https://github.com/krezolekcoder)
 * @brief
 * @version 0.1
 * @date 2022-08-27
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef PONG_UI_H
#define PONG_UI_H

#include "pong_ball.h"
#include "pong_pad.h"
#include "raylib.h"



void pong_ui_initialize(struct pong_pad *pong_pad_left, struct pong_pad *pong_pad_right);

void pong_ui_pad_update(struct pong_pad *pong_pad);
void pong_ui_ball_update(struct pong_ball *pong_ball);



#endif /* PONG_UI_H */

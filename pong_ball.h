#ifndef PONG_BALL_H
#define PONG_BALL_H


struct pong_ball {
    unsigned int x_pos;
    unsigned int y_pos;
};


void pong_ball_init(struct pong_ball *pong_ball);
void pong_ball_update(struct pong_ball *pong_ball);

#endif /* PONG_BALL_H */

#ifndef PONG_PAD_H
#define PONG_PAD_H

struct pong_pad {
    unsigned int ypos;
};

unsigned int get_pong_pos(struct pong_pad *pad);
void         pong_pad_move_up(struct pong_pad *pad);
void         pong_pad_move_down(struct pong_pad *pad);

#endif /* PONG_PAD_H */

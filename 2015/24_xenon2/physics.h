#ifndef __PHYSICS_H__
#define __PHYSICS_H__

#include <allegro5/allegro.h>
#include "game.h"

struct Vec {
    double x;
    double y;
};

struct Movil{
    struct Vec a;  /* Acceleration */
    struct Vec v;  /* Velocity */
    struct Vec r;  /* Position */
    ALLEGRO_BITMAP *img[5];
};

extern void update_physics(bool keys[4], struct Movil *nave);
extern void init(ALLEGRO_BITMAP *sprites, struct Movil *nave);

#endif

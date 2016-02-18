#include <math.h>
#include "physics.h"


#define DELTA_Y .2
#define DELTA_X DELTA_Y
#define C .07

void init(ALLEGRO_BITMAP *sprites, struct Movil *nave) {
    nave->a.x = 0.;
    nave->a.y = 0.;
    nave->v.x = 0.001;
    nave->v.y = 1.;
    nave->r.x = 0.;
    nave->r.y = 0.;
    for (int i=0; i<5; i++)
        nave->img[i] = al_create_sub_bitmap(
                sprites,
                i * 33, 99, 31, 27
                );
}

void update_physics(bool keys[4], struct Movil *nave){

    nave->a.y = 0;
    nave->a.y = keys[KEY_THROTTLE] ? DELTA_Y : nave->a.y;
    nave->a.y = keys[KEY_BRAKE] ?   -DELTA_Y : nave->a.y;

    nave->a.x = 0;
    nave->a.x = keys[KEY_ROTATE_RIGHT] ? DELTA_X : nave->a.x;
    nave->a.x = keys[KEY_ROTATE_LEFT] ? -DELTA_X : nave->a.x;


    nave->v.x += nave->a.x - C * nave->v.x / fabs(nave->v.x) *nave->v.x * nave->v.x;
    nave->v.y += nave->a.y - C * nave->v.y / fabs(nave->v.y) *nave->v.y * nave->v.y;
    nave->r.x += nave->v.x;
    nave->r.y += nave->v.y;

    return;
}

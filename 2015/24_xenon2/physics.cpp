#include "physics.h"

void init(ALLEGRO_BITMAP *sprites, struct Movil *nave) {
    nave->a.x = 0.;
    nave->a.y = 0.;
    nave->v.x = 0.;
    nave->v.y = 0.;
    nave->r.x = 0.;
    nave->r.y = 0.;
    nave->img = al_create_sub_bitmap( sprites, 0, 98, 33, 29 );
}

void update_physics(bool keys[4], struct Movil *nave){
    return;
}

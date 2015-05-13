#include <stdlib.h>
#include "nave.h"

#define VLIM 1.15
#define ROZAMIENTO 0.0625

Nave::Nave ()
{
  static int i = 0;		// Pdte. variables de clase
  this->x = 0 + 5 * i++;
  this->y = 10;
  this->vx = 0;
  this->vy = 0;
  this->dibujo = NULL;
}

Nave::Nave (double x, double y = 0):x (x), y (y)
{
  this->vx = rand () % 3 - 1;
  this->vy = rand () % 3 - 1;
  this->dibujo = NULL;
}

/* Accedentes */
double
Nave::get_x ()
{
  return this->x;
}

double
Nave::get_y ()
{
  return this->y;
}


void
Nave::change_vx (float delta)
{
    this->vx += delta;
}


void
Nave::change_vy (float delta)
{
    this->vy += delta;
}

ALLEGRO_BITMAP *
Nave::get_dibujo ()
{
  return this->dibujo;
}

int
Nave::get_sprite_number() {
    int sprite_number = (int) (this->vx * 10) /  (VLIM * 10) + 2;
    sprite_number = sprite_number < 0 ? 0 : sprite_number;
    sprite_number = sprite_number < 5 ? sprite_number : 4;
    return sprite_number;
}

void
Nave::set_dibujo (ALLEGRO_BITMAP * sprite)
{
  this->dibujo = sprite;
}

/* Mutadora */
void
Nave::actualizate ()
{
    this->vx -= ROZAMIENTO * this->vx;
    this->vy -= ROZAMIENTO * this->vy;
  this->x += this->vx;
  this->y += this->vy;
}

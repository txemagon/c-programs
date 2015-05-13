#include <stdlib.h>
#include "mario.h"


Mario::Mario ()
{
  static int i = 0;		// Pdte. variables de clase
  this->x = 0 + 5 * i++;
  this->y = 10;
  this->vx = 0;
  this->vy = 0;
  this->dibujo = NULL;
}

Mario::Mario (double x, double y = 0):x (x), y (y)
{
  this->vx = rand () % 3 - 1;
  this->vy = rand () % 3 - 1;
  this->dibujo = NULL;
}

/* Accedentes */
double
Mario::get_x ()
{
  return this->x;
}

double
Mario::get_y ()
{
  return this->y;
}


void
Mario::change_vx (float delta)
{
    this->vx += delta;
}


void
Mario::change_vy (float delta)
{
    this->vy += delta;
}

ALLEGRO_BITMAP *
Mario::get_dibujo ()
{
  return this->dibujo;
}

void
Mario::set_dibujo (ALLEGRO_BITMAP * sprite)
{
  this->dibujo = sprite;
}

/* Mutadora */
void
Mario::actualizate ()
{
  this->x += this->vx;
  this->y += this->vy;
}

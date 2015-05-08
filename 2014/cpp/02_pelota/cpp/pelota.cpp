#include <stdlib.h>
#include "pelota.h"


Pelota::Pelota ()
{
  static int i = 0;		// Pdte. variables de clase
  this->x = 0 + 5 * i++;
  this->y = 10;
  this->vx = rand () % 3 - 1;
  this->vy = rand () % 3 - 1;
  this->dibujo = NULL;
}

Pelota::Pelota (double x, double y=0) : x(x), y(y)
{
  this->vx = rand () % 3 - 1;
  this->vy = rand () % 3 - 1;
  this->dibujo = NULL;
}

/* Accedentes */
double
Pelota::get_x ()
{
  return this->x;
}

double
Pelota::get_y ()
{
  return this->y;
}

ALLEGRO_BITMAP *
Pelota::get_dibujo ()
{
  return this->dibujo;
}

void
Pelota::set_dibujo(ALLEGRO_BITMAP *sprite) 
{
    this->dibujo = sprite;
}

/* Mutadora */
void
Pelota::actualizate ()
{
  this->x += this->vx;
  this->y += this->vy;
}

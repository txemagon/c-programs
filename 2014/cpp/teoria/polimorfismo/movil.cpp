#include <stdio.h>
#include <stdlib.h>
#include "movil.h"

int
  Movil::creados = 0;


Movil::Movil ()
{
  this->id = ++Movil::creados;
  this->x = rand () % 100;
  this->y = rand () % 100;
  this->vx = (rand () % 100 + 1) / 100.;
  this->vy = (rand () % 100 + 1) / 100.;
  this->muerto = false;
}

void
Movil::pintate ()
{
  printf ("%i => (%.2lf, %.2lf)\n", this->id, this->x, this->y);
}

void
Movil::actualizate ()
{
  this->x += this->vx;
  this->y += this->vy;
}

int
Movil::who_are_you ()
{
  return this->id;
}

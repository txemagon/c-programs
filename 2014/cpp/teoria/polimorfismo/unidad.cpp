#include "unidad.h"

bool Unidad::push (Movil * movil)
{
  if (this->cima >= N)
    return false;
  this->datos[this->cima++] = movil;
  return true;
}


int
Unidad::cuantos ()
{
  return this->cima;
}

Movil *
Unidad::get(int index)
{
    return this->datos[index];
}

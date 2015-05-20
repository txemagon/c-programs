#include "unidad.h"

bool
Unidad::push (Movil * movil)
{
  if (this->cima >= N)
    return false;
  this->datos[this->cima++] = movil;
  return true;
}

Movil *
Unidad::pop ()
{
    return this->datos[--this->cima];
}

void
Unidad::clean_up ()
{
    for (int i=0; i<this->cuantos(); i++)
	if (this->get(i)->muerto)
	    this->datos[i--] = this->pop();
}

int
Unidad::cuantos ()
{
  return this->cima;
}

Movil *
Unidad::get (int index)
{
  return this->datos[index];
}

Unidad::~Unidad()
{
    while(this->cuantos())
	delete this->pop();
}

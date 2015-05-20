#ifndef __UNIDAD_H__
#define __UNIDAD_H__

#include "movil.h"

#define N 300

class Unidad
{

private:
  Movil * datos[N];
  int cima;

public:
  ~Unidad();
  void clean_up();
  bool push (Movil *movil);
  int cuantos();
  Movil *get(int index);

};


#endif

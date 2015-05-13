#ifndef __PROTA_H__
#define __PROTA_H__

#include "nave.h"
#include "arma.h"

class Prota : public Nave
{
private:
  double fuel;
  int vidas;
  Arma armas[];
  int arma_activa;

};


#endif

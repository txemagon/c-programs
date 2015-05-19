#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "unidad.h"
#include "movil.h"
#include "malo.h"


int
main (int argc, char **argv)
{
  Unidad unidad;

  unidad.push( new Movil);
  unidad.push( new Movil);
  unidad.push(new Malo);
  unidad.push( new Movil);

  srand(time(NULL));

  while (1)
    {
      for (int i = 0; i < unidad.cuantos(); i++)
	{
	  unidad.get(i)->actualizate ();
	  unidad.get(i)->pintate ();
	}
      sleep (1);
    }

  return EXIT_SUCCESS;
}


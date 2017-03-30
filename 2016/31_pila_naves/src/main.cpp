#include <stdlib.h>
#include <time.h>
#include <strings.h>
#include "pila.h"

#define QNAVES 100

int
main ()
{
    struct TPila objetos_pantalla;

    srand(time(NULL));
    bzero(&objetos_pantalla, sizeof(objetos_pantalla));

    for (int i=0; i<QNAVES; i++)
        push(&objetos_pantalla, crear_nave_aleatoria());


    ver(objetos_pantalla);

    while(pop(&objetos_pantalla));

  return 0;
}

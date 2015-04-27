#include <stdlib.h>
#include "pelota.h"

void inicializar(Pelota *objeto){
    static int i = 0;
    objeto->x = 0 + 5 * i++;
    objeto->y = 10;
    objeto->vx = rand() % 3 - 1;
    objeto->vy = rand() % 3 - 1;
    objeto->dibujo = '*';
}

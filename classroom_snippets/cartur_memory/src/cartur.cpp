#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cartas.h"

void rellena_inicialmente(struct TMazo *mazo){
    static int numero_de_carta = 0;
    push(mazo, numero_de_carta % NUM_PAREJAS);
    numero_de_carta++;
}

int main(int argc, char *argv[]){

    struct TMazo ordenado, desordenado;
    ordenado.quedan = desordenado.quedan = 0;

    srand(time(NULL));

    for (int i = 0; i<2*NUM_PAREJAS; i++)
        rellena_inicialmente(&ordenado);

    inspect(ordenado);

    /* Desordenar */
    for (int i = 0; i<2*NUM_PAREJAS; i++){
        push(   &desordenado, 
                extract(&ordenado, rand() % ordenado.quedan));
    }

    inspect(desordenado);

    return EXIT_SUCCESS;
}

#include <stdlib.h>
#include <string.h>
#include "genes.h"

void crear_soluciones(struct Generacion *generacion) {

    for (int i=0; i<INDIVIDUOS; i++){
        generacion->solucion[i].n_autobus = (int *) malloc( generacion->n_clases * sizeof(int) );
        for (int clase=0; clase<generacion->n_clases; clase++)
            generacion->solucion[i].n_autobus[clase] = rand() % generacion->n_autobuses;
    }
}

void evalua(struct Generacion *generacion, struct Stack aforo){
    int n_autobuses = aforo.cima;
    int *autobuses = (int *) malloc( n_autobuses * sizeof(int) );

    for (int i=0; i<INDIVIDUOS; i++){
        generacion->solucion[i].castigo = 0;
        bzero(autobuses, )
    }

    free(autobuses);
}

void ordena(struct Generacion *generacion);

void recombina(struct Generacion *generacion);

void muta(struct Generacion *generacion);


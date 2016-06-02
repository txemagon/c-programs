#include <stdlib.h>
#include <time.h>
#include "pila.h"
#include "entrada.h"
#include "genes.h"

void crear_soluciones(struct Generacion *generacion) {


int main(int argc, const char **argv){

    int entrada = 0;
    struct Stack clases;
    struct Stack plazas;
    struct Generacion generacion;

    srand(time(NULL));

    /* Entrada de datos */
    init(&clases);
    while( (entrada = cuantos("Alumnos")) > 0)
        push(entrada, &clases);

    init(&plazas);
    while( ( entrada = cuantos("Plazas")) > 0)
        push(entrada, &plazas);

    generacion.n_clases    = clases.cima;
    generacion.n_autobuses = plazas.cima;

    /* Algoritmo */
    crear_soluciones(&generacion);
    for (int g=0; g<GENERACIONES; g++)
        evalua(&generacion);
        ordena(&generacion);
        recombina(&generacion);
        muta(&generacion);


    /* House keeping */
    for (int i=0; i<INDIVIDUOS; i++)
        free(generacion.solucion[i].n_autobus);
    free(clases.data);
    free(plazas.data);

    return EXIT_SUCCESS;
}

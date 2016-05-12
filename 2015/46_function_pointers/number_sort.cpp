#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sorting_methods.h"

#define MAX 0x1000

int datos[MAX];
int cima = 0;

double crono(){

    static clock_t inicio;
    static clock_t fin;

    static bool arrancado = false;

    arrancado = !arrancado;
    if (arrancado){
        inicio = clock();
        return 0;
    }

    fin = clock();
    return (double) (fin - inicio) / CLOCKS_PER_SEC;
}

void imprime(int datos[MAX]){
    for (int i=0; i<cima; i++)
        printf(" %i ", datos[i]);
    printf("\n");
}


int menor_a_mayor(int numero1, int numero2){
    // -1 => antes
    if (numero1 < numero2)
        return -1;
    if (numero1 == numero2)
        return 0;

    return 1;
}

int mayor_a_menor(int numero1, int numero2){
    // -1 => antes
    if (numero1 < numero2)
        return 1;
    if (numero1 == numero2)
        return 0;

    return -1;
}


int main(int argc, const char **argv){

    int buffer = 0;
    void (*ordena)(int *, int, int, int (*criterio)(int, int));
    double tiempo;

    ordena = selection;

    while (scanf(" %i", &buffer) != EOF)
        datos[cima++] = buffer;

    imprime(datos);
    crono();
    ordena(datos, 0, cima-1, mayor_a_menor);
    tiempo = crono();
    fprintf(stderr, "tiempo = %.2lf\n", tiempo);
    imprime(datos);
    ordena(datos, 0, cima-1, menor_a_mayor);
    imprime(datos);

    return EXIT_SUCCESS;
}

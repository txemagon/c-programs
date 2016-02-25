#include "gartin_marrix.h"
#include <stdio.h>

void rellenar(int *matriz, int filas, int col, const char *nombre){
    int entrada;

    printf("Rellena los valores de la matriz %s.\n", nombre);

    for (int f=0; f<filas; f++)
        for (int c=0; c<col; c++){
            printf("(%i, %i): ", f + 1, c + 1);
            scanf(" %i", &entrada);
            *(matriz + f*col + c) = entrada;
        }
}

void imprimir(int *matriz, int filas, int col, const char *nombre){

    printf("\n%s\n\n", nombre);

    for (int f=0; f<filas; f++){
        for (int c=0; c<col; c++)
            printf("\t%i ", *(matriz + f*col + c)) ;
        printf("\n");
    }
}


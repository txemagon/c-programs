#include <stdio.h>
#include <stdlib.h>

#include "interfaz.h"
#include "global.h"

#define CAR_LLENO "▒"
#define CAR_VACIO "░"


void pintar(int matriz[M][N]) {
    for (int fila=0; fila<M; fila++) {
        for (int col=0; col<N; col++)
            printf("%s", matriz[fila][col]? CAR_LLENO : CAR_VACIO);
        printf("\n");
    }
}

void dame_coord(int *x, int *y) {
        printf("Usa unas coordenadas invalidas para terminar.\n");
        printf("\n\n\tNuevo x,y: ");
        scanf(" %i, %i", x, y);
        --*x, --*y;
}

void poblacion_inicial(int matriz[M][N]) {
    int x, y;

    do{
        system("clear");
        pintar(matriz);
        dame_coord(&x, &y);

        if ( SON_VALIDAS(x,y) )
            matriz[x][y] = 1;

    } while ( SON_VALIDAS(x,y) );
}


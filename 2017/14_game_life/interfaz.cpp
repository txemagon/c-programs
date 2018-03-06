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
            matriz[x][y] = (matriz[x][y] + 1) % 2;

    } while ( SON_VALIDAS(x,y) );
}

void rellena(int matriz[M][N]){
    int iniciales;
    int x, y;

    system("clear");
    printf("Cuántos puntos iniciales quieres?: ");
    scanf(" %i", &iniciales);

    for (int n=0; n<iniciales; n++) {
        x = rand() % M;
        y = rand() % N;
        matriz[x][y] = 1;
    }
}

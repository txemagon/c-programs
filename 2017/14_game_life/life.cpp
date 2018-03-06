#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define M 0x10
#define N 0x40

#define CAR_LLENO "▒"
#define CAR_VACIO "░"

#define SON_VALIDAS(f,c) (((f)>=0 && (f)<M) && ((c)>=0 && (c)<N))

void pintar(int matriz[M][N]) {
    for (int fila=0; fila<M; fila++) {
        for (int col=0; col<N; col++)
            printf("%s", matriz[fila][col]? CAR_LLENO : CAR_VACIO);
        printf("\n");
    }
}

void poblacion_inicial(int matriz[M][N]) {
    int x, y;

    do{
        system("clear");

        printf("Usa unas coordenadas invalidas para terminar.\n");
        pintar(matriz);
        printf("\n\n\tNuevo x,y: ");
        scanf(" %i, %i", &x, &y);
        x--, y--;

        if ( SON_VALIDAS(x,y) )
            matriz[x][y] = 1;

    } while ( SON_VALIDAS(x,y) );
}

int main(){

    int actual[M][N],
        futuro[M][N];

    bzero(actual, sizeof(actual));
    poblacion_inicial(actual);

    while(1) {
        // calcular(futuro, actual);
        // Convertir el futuro en actual
        pintar(actual);
    }

    return EXIT_SUCCESS;
}

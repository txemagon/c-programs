#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define M 0x10
#define N 0x40

#define CAR_LLENO "▒"
#define CAR_VACIO "░"

void pintar(int matriz[M][N]) {
    for (int fila=0; fila<M; fila++) {
        for (int col=0; col<N; col++)
            printf("%s", matriz[fila][col]? CAR_LLENO : CAR_VACIO);
        printf("\n");
    }
}

bool es_valido(int x, int y) {
    return (x>=0 && x<M) && (y>=0 && y<N);
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

        // todo: validar los caracteres antes de meterlos.
        matriz[x][y] = 1;
    } while ( es_valido(x, y) );
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

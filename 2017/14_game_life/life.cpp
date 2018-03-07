#include <stdlib.h>
#include <strings.h>
#include <unistd.h>
#include <time.h>

#include "global.h"
#include "interfaz.h"

#define MIN_SUPERV 1
#define ASENTAR    2
#define SUPERPO    4

enum {ACTUAL, FUTURO, TIEMPOS};

int vecinos(int f, int c, int matriz[M][N]){
    int n_vecinos = 0;
    for (int fv = f-1; fv < f + 2; fv++)
        for (int cv=c-1; cv<c+2; cv++)
            if (SON_VALIDAS(fv, cv))
                n_vecinos += matriz[fv][cv];
    n_vecinos--;
    return n_vecinos;
}

void calcular(int futuro[M][N], int actual[M][N])
{
    int n_vecinos;

    for (int f=0; f<M; f++)
        for (int c=0; c<N; c++){
            n_vecinos = vecinos(f, c, actual);
            if (n_vecinos < MIN_SUPERV)
                futuro[f][c] = 0;
            if (n_vecinos >=  ASENTAR && n_vecinos < SUPERPO)
                futuro[f][c] = futuro[f][c] || (rand() % 2);// futuro[f][c] = 1; // Esto era antes pero voy a meter aleatoriedad.
            if (n_vecinos >=  SUPERPO)
                futuro[f][c] = 0;
        }

}

int main(){

    int mundo[TIEMPOS][M][N];
    int (*actual)[M][N] = &mundo[ACTUAL];
    int (*futuro)[M][N] = &mundo[FUTURO];
    int (*aux)[M][N];

    srand(time(NULL));
    bzero(mundo[ACTUAL], sizeof(mundo[ACTUAL]));
    rellena(*actual);
    poblacion_inicial(mundo[ACTUAL]);


    while(1) {
        system("clear");
        calcular(*futuro, *actual);
        aux = actual;
        actual = futuro;
        futuro = aux;
        pintar(mundo[ACTUAL]);
        usleep(100000);
    }

    return EXIT_SUCCESS;
}

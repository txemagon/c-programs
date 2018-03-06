#include <stdlib.h>
#include <strings.h>

#include "global.h"
#include "interfaz.h"

#define MIN_SUPERV 2
#define ASENTAR    3

enum {actual, futuro, TIEMPOS};

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
            if (n_vecinos ==  ASENTAR)
                futuro[f][c] = 1;
            if (n_vecinos >  ASENTAR)
                futuro[f][c] = 0;
        }

}

int main(){

    int mundo[TIEMPOS][M][N];

    bzero(mundo[actual], sizeof(mundo[actual]));
    poblacion_inicial(mundo[actual]);

    while(1) {
        system("clear");
        calcular(mundo[futuro], mundo[actual]);
        pintar(mundo[actual]);
    }

    return EXIT_SUCCESS;
}

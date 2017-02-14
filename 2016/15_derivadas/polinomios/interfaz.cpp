#include <stdio.h>
#include <stdlib.h>
#include "interfaz.h"
#include "polinomios.h"

void titulo(){
    system("clear");
    system("toilet -Fborder --gay -fpagga PARABOLA");
}

void pinta_entorno(struct Polinomio pol, double x){

    int x_min = x - ENTORNO;
    int x_max = x + ENTORNO;

    for (double x=x_min; x<x_max; x+=INC(x_max, x_min)){
        int height = f(pol, x);
        for (int x=0; x<height; x++)
            printf(".");
        printf("\n");
    }
}

void pedir_polinomio(struct Polinomio *p){

    scanf(" %*[\[]")

}

void pedir_punto(double *x) {
    printf("\n\tx: ");
    scanf(" %lf", x);
}

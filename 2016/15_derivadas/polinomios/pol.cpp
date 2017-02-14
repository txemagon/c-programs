#include <stdio.h>
#include <stdlib.h>

#include "interfaz.h"
#include "polinomios.h"


int main(int argc, char *argv[]){
    double x;

    titulo();
    printf("\n\tx: ");
    scanf(" %lf", &x);
    pinta_entorno(x);
    printf("f'(x=%.2lf) = %.2lf\n", x, derivada(x));

    return EXIT_SUCCESS;
}

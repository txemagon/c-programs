#include <stdio.h>
#include <stdlib.h>

#include "interfaz.h"
#include "polinomios.h"


int main(int argc, char *argv[]){
    double x;
    struct Polinomio pol;

    titulo();
    pedir_polinomio(&pol);
    pedir_punto(&x);
    pinta_entorno(pol, x);

    printf("\nf'(x=%.2lf) = %.2lf\n\n", x, derivada(pol, x));

    free(pol.coef);

    return EXIT_SUCCESS;
}

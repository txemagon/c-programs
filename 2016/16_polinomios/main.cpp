#include <stdio.h>
#include <stdlib.h>

#include "ansi_colors.h"
#include "interfaz.h"
#include "polinomios.h"


int main(int argc, char *argv[]){
    double x;
    struct Polinomio pol;

    titulo();
    pedir_polinomio(&pol);
    pedir_punto(&x);
    pinta_entorno(pol, x);

    printf( "\n"
            ANSI_COLOR_GREEN
            "f'("
            ANSI_COLOR_RED
            "x=%.2lf"
            ANSI_COLOR_GREEN
            ") = "
            ANSI_COLOR_YELLOW
            "%.2lf"
            ANSI_COLOR_RESET
            "\n\n", x, derivada(pol, x));

    free(pol.coef);

    return EXIT_SUCCESS;
}

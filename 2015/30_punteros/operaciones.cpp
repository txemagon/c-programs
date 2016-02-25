#include <stdio.h>
#include <stdlib.h>

double suma(double op1, double op2) { return op1 + op2; }
double resta(double op1, double op2) { return op1 - op2; }

int main(int argc, const char **argv){

    double op1 = 5,
           op2 = 3;

    int respuesta = 1;
    double (*p) (double, double) = suma;

    printf("sumar = 1, resta = 2\n");

    respuesta = 2;

    if ( respuesta == 2 )
        p = resta;

    printf("r = %.2lf\n", p(op1, op2));


    return EXIT_SUCCESS;
}

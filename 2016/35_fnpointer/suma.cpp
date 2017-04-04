#include <stdio.h>
#include <stdlib.h>

double suma(double op1, double op2) {
    return op1 + op2;
}

int main(int argc, char *argv[]){

    double resultado;

    double (*directo) (double, double);
    double (*indirecto) (double, double);
    directo = suma;
    indirecto = &suma;

    resultado = directo(7.5, 9.3);
    printf("%.2lf\n", resultado);
    resultado = (*indirecto)(7.5, 9.3);
    printf("%.2lf\n", resultado);



    return EXIT_SUCCESS;
}

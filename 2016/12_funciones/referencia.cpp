#include <stdio.h>
#include <stdlib.h>

void leer(double *base, double *exp){
    printf("Base, Exponente:  ");
    scanf(" %lf , %lf", base, exp);
}

int main(int argc, char *argv[]){

    double base, exponente;

    leer(&base, &exponente);
    printf("%4.2lf, %4.2lf\n", base, exponente);

    return EXIT_SUCCESS;
}

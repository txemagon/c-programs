#include <stdio.h>
#include <stdlib.h>

#define PASO 0.00001

double parabola(double x){ return x*x + 3; }
double recta(double x){ return x + 3; }

double integrar(double li, double ls,
        double (*f)(double)
        ) {
    double suma = 0.;
    for (double x=li; x<ls; x+=PASO)
        suma += f(x);
    suma *= PASO;

    return suma;
}

int main(int argc, char *argv[]){

    double li = 0,ls = 3;

    printf("%.2lf\n", integrar(li, ls, &recta));
    printf("%.2lf\n", integrar(li, ls, &parabola));

    return EXIT_SUCCESS;
}

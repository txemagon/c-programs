#include <stdio.h>
#include <stdlib.h>

#define DELTA           0.0001
#define PASOS           20
#define ENTORNO         4
#define INC(X_MAX, X_MIN) ( (double) ((X_MAX) - (X_MIN)) / PASOS )


double f(double x) { return 3*x*x-2*x; }
double derivada(double x){ return (f(x+DELTA) -f(x)) / DELTA; }

void titulo(){
    system("clear");
    system("toilet -Fborder --gay -fpagga PARABOLA");
}

void pinta_entorno(double x){

    int x_min = x - ENTORNO;
    int x_max = x + ENTORNO;

    for (double x=x_min; x<x_max; x+=INC(x_max, x_min)){
        int height = f(x);
        for (int x=0; x<height; x++)
            printf(".");
        printf("\n");
    }


}

int main(int argc, char *argv[]){
    double x;

    titulo();
    printf("\n\tx: ");
    scanf(" %lf", &x);
    pinta_entorno(x);
    printf("f'(x=%.2lf) = %.2lf\n", x, derivada(x));

    return EXIT_SUCCESS;
}

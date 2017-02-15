#include <stdio.h>
#include <stdlib.h>
#include "interfaz.h"
#include "polinomios.h"

#define INC(X_MAX, X_MIN) ( (double) ((X_MAX) - (X_MIN)) / PASOS )

#define MED "▒"

#define C_FN MED
#define FN_MAX 80

void titulo(){
    system("clear");
    system("toilet -Fborder --gay -fpagga PARABOLA");
}

void pinta_entorno(struct Polinomio pol, double x){

    int x_min = x - ENTORNO;
    int x_max = x + ENTORNO;

    double max = 1;
    double scale = 1;


    for (double x=x_min; x<x_max; x+=INC(x_max, x_min)){
        double height = f(pol, x);
        if (height > max)
            max = height;
    }
    if (max > FN_MAX)
        scale = FN_MAX / max;

    for (double x=x_min; x<x_max; x+=INC(x_max, x_min)){
        int height = (int) ( f(pol, x) * scale );
        for (int x=0; x<height; x++)
            printf("%s", C_FN);
        printf("\n");
    }
}

void pedir_polinomio(struct Polinomio *p){
    char term[2];
    double nuevo_coef;

    int grado = 0;
    double *coef = NULL;

    printf("Introduzca un polinomio: \n"
            "Ejemplo: [1.2, 2.5, 3] <==> 3x² + 2.5x + 1.2\n"
            "\n\tPolinomio: ");

    scanf(" %*1[\[(]");

    do {
        scanf(" %lf %*1[,;]", &nuevo_coef);
        coef = (double *) realloc(coef, ++grado * sizeof(double));
        coef[grado-1] = nuevo_coef;
    } while( scanf(" %1[])]", term) == 0 );

    p->grado = grado;
    p->coef = coef;

}

void pedir_punto(double *x) {
    printf("\n\tx: ");
    scanf(" %lf", x);
}

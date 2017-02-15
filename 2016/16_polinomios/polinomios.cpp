#include "polinomios.h"

double f(struct Polinomio polinomio, double x) {
    double resultado = 0;
    double *coef     = polinomio.coef;
    int grado        = polinomio.grado;
    double potencia  = 1;

    for (int g=0; g<=grado; g++, potencia*=x)
        resultado += coef[g] * potencia;

    return resultado;
}

double derivada(struct Polinomio pol, double x){ return (f(pol, x+DELTA) -f(pol,x)) / DELTA; }


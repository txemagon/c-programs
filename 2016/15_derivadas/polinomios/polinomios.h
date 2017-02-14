#ifndef __POLINOMIOS_H__
#define __POLINOMIOS_H__

#define DELTA           0.0001

struct Polinomio {
    double *coef;
    int     grado;
};

#ifdef __cplusplus
extern "C"{
#endif

double f(struct Polinomio polinomio, double x);
double derivada(struct Polinomio pol, double x);

#ifdef __cplusplus
}
#endif

#endif

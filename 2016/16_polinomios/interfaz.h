#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__

#define PASOS           20
#define ENTORNO         4


#ifdef __cplusplus
extern "C"{
#endif
void titulo();
void pinta_entorno(struct Polinomio pol, double x);
void pedir_polinomio(struct Polinomio *);
void pedir_punto(double *x);
#ifdef __cplusplus
}
#endif

#endif

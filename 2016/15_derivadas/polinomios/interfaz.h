#ifndef __INTERFAZ_H__
#define __INTERFAZ_H__

#define PASOS           20
#define ENTORNO         4
#define INC(X_MAX, X_MIN) ( (double) ((X_MAX) - (X_MIN)) / PASOS )


#ifdef __cplusplus
extern "C"{
#endif
void titulo();
void pinta_entorno(double x);
#ifdef __cplusplus
}
#endif

#endif

#ifndef __PILA_H__
#define __PILA_H__

#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 0x20
#define MAX_PILA 0x200
#define MAX_X 100
#define MAX_Y 100

typedef double TipoPila;

struct TPila{
    int cima;
    TipoPila data[MAX_PILA];
};

#ifdef __cplusplus
extern "C" {
#endif

    bool push(struct TPila *pila, TipoPila dato);
    TipoPila pop(struct TPila *pila);
    void ver(struct TPila *pila, void (*mostrar)(TipoPila));
    void actualiza(struct TPila *pila);


#ifdef __cplusplus
}
#endif

#endif

#ifndef __PILA_H__
#define __PILA_H__

#include <stdio.h>
#include <stdlib.h>

#define MAX_PILA 0x200
#define MAX_X 100
#define MAX_Y 100


struct TMovil{
    double x;
    double y;
};

/* En esta lista el elemento sólo está activo mientras
 * está en la lista. El pop se cepilla al elemento. */

struct TPila{
    int cima;
    struct TMovil *data[MAX_PILA];
};

#ifdef __cplusplus
extern "C" {
#endif

    bool push(struct TPila *pila, struct TMovil *movil);
    bool pop(struct TPila *pila);
    struct TMovil * crear_nave_aleatoria();
    void mostrar(struct TMovil *dato);
    void ver(struct TPila pila);

#ifdef __cplusplus
}
#endif

#endif

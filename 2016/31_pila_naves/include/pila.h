#ifndef __PILA_H__
#define __PILA_H__

#define MAX_PILA 0x200

struct TMovil{
    int x;
    int y;
};

/* En esta lista el elemento sólo está activo mientras
 * está en la lista. El pop se cepilla al elemento. */

struct TPila{
    struct TMovil *data[MAX_PILA];
    int cima;
};

#ifdef __cplusplus
extern "C" {
#endif

    bool push(struct Pila *pila, struct TMovil *movil);
    bool pop(struct Pila *pila);

#ifdef __cplusplus
}
#endif

#endif

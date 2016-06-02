#include "pila.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void init(struct Stack *nueva){
    if (nueva){
       nueva->cima = 0;
       nueva->huecos = H_INICIAL;
       nueva->data =  (int *) malloc(H_INICIAL*sizeof(int));
       bzero(nueva->data, H_INICIAL * sizeof(int));
    }
}

bool push(int alumnos, struct Stack *pila){

    if (pila->cima >= pila->huecos)
        pila->data = (int *) realloc(pila->data, sizeof(int)*(++pila->huecos));
    pila->data[pila->cima++] = alumnos;

    return !!pila->data;
}


int pop(struct Stack *pila){
    if (!pila->cima)
        return -1;
    return pila->data[--pila->cima];
}

void show(struct Stack pila){
    for (int i=0; i<pila.cima; i++)
        printf("%i\n", pila.data[i]);
}

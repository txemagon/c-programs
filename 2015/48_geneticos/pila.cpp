#include "pila.h"
#include <stdlib.h>
#include <strings.h>

struct Stack *crea(){
    struct Stack *nueva =  (struct Stack *) malloc(H_INICIAL*sizeof(int));
    if (nueva){
       nueva->cima = 0;
       nueva->huecos = H_INICIAL;
       bzero(nueva->data, H_INICIAL * sizeof(int));
    }

    return nueva;
}

bool push(int alumnos, struct Stack *pila){

    if (pila->cima >= pila->huecos)
        pila->data = (int *) realloc(pila->data, sizeof(int)*(++pila->huecos));
    pila->data[pila->cima++] = alumnos;

    return !!pila->data;
}


int pop(struct stack *pila){
    return pila->data[--pila->cima];
}

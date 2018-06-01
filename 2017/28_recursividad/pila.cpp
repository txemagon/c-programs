#include "pila.h"

void push(Pila *pila, int value){
    pila->data[(pila->cima)++] = value;
}

int pop(Pila *pila){
    if (pila->cima < 0)
        return 0;
    return pila->data[--pila->cima];
}


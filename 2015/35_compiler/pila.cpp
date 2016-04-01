#include "pila.h"


bool push(double dato, struct Stack *pila){
    pila->data[pila->cima++] = dato;
}

double pop(struct Stack *pila){
    return pila->data[--pila->cima];
}

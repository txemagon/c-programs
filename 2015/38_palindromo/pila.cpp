#include "pila.h"


bool push(char p, struct Stack *pila){
    pila->data[pila->cima++] = p;
}


char pop(struct Stack *pila){
    return pila->data[--pila->cima];
}

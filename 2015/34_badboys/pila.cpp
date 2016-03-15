#include "pila.h"


bool push(struct Personaje *p, struct stack *pila){
    pila->data[pila->cima++] = p;
}


struct Personaje *pop(struct stack *pila){
    return pila->data[--pila->cima];
}

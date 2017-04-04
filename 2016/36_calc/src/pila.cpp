#include "pila.h"

bool
push (struct TPila *pila, TipoPila dato)
{
  if (pila->cima >= MAX_PILA)
    return false;
  pila->data[pila->cima++] = dato;
  return true;
}

TipoPila
pop (struct TPila *pila)
{
    if (pila->cima <= 0)
        return false;
    return pila->data[--pila->cima];
}

void ver(struct TPila *pila, void (*mostrar)(TipoPila) ){
    for (int i=0; i<pila->cima; i++)
        (*mostrar)(pila->data[i]);
}


#ifndef __PILA_H__
#define __PILA_H__

#include "definiciones.h"

struct Stack {
   struct Personaje *data[MAX];
   int cima;
};

extern struct Personaje *pop(struct Stack* pila);
extern bool push(struct Personaje *p, struct Stack* pila);

#endif

#ifndef __PILA_H__
#define __PILA_H__

#define MAX 0x100

struct Stack {
   double data[MAX];
   int cima;
};

extern bool push(double dato, struct Stack *pila);
extern double pop(struct Stack *pila);

#endif

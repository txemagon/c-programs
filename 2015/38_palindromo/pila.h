#ifndef __PILA_H__
#define __PILA_H__

#define MAX 0x100

struct Stack {
   char data[MAX];
   int cima;
};

extern char pop(struct Stack* pila);
extern bool push(char p, struct Stack* pila);

#endif

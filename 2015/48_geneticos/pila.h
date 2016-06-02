#ifndef __PILA_H__
#define __PILA_H__

#define H_INICIAL 5

struct Stack {
   int *data;
   int cima;
   int huecos;
};

extern void init(struct Stack *nueva);
extern bool push(int alumnos, struct Stack* pila);
extern int pop(struct Stack* pila);
extern void show(struct Stack pila);


#endif

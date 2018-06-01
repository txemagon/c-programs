#ifndef __PILA_H__
#define __PILA_H__

#define MAX 0x20

typedef struct {
    int data[MAX];
    int cima;
} Pila;

#ifdef __cplusplus
extern "C" {
#endif
void push(Pila *pila, int value);
int pop(Pila *pila);
#ifdef __cplusplus
}
#endif
#endif

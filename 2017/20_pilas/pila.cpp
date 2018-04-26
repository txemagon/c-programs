#include <stdio.h>
#include <stdlib.h>

#define N 0x100

#ifndef NDEBUG
#define DEBUG(...) printf(__VA_ARGS__);
#else
#define DEBUG(...) 
#endif

typedef struct {
    int data[N];
    int cima;
} Pila;

void push(int dato, Pila *cual_pila) {
    DEBUG("->%5i\n", dato);
    cual_pila->data[cual_pila->cima] = dato;
    cual_pila->cima++;
}

int pop(Pila *cual_pila){
    cual_pila->cima--;
    DEBUG("<-%5i\n", cual_pila->data[cual_pila->cima]);
    return cual_pila->data[cual_pila->cima];
}

int main(){
    Pila numeros;

    numeros.cima = 0;

    push(5, &numeros);
    push(4, &numeros);
    push(-3, &numeros);
    push(100, &numeros);
    pop(&numeros);
    pop(&numeros);
    push(10, &numeros);

    return EXIT_SUCCESS;
}

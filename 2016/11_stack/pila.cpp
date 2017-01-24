#include <stdio.h>
#include <stdlib.h>

#define N 0x100

int pila[N];
int cima = 0; // Primera posición libre.

void push(int numero){ pila[cima++] = numero; }
int pop(){ return pila[--cima]; }

int main(int argc, char *argv[]){


    int numero;

    push(3);
    push(7);

    numero = pop();

    return EXIT_SUCCESS;
}

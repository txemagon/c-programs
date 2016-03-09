#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define MAX_PILA 10
#define PALOS 3

struct Pila {
    int cima;
    int data[MAX_PILA];
};

void inicializar(struct Pila *pila){
    bzero(pila, sizeof (struct Pila));
}

bool push(struct Pila *pila, int dato){

    if (pila->cima >= MAX_PILA)
        return false;
    pila->data[pila->cima++] = dato;
    return true;
}

int pop(struct Pila* pila){
    return pila->data[--pila->cima];
}

int main(int argc, const char **argv){

    int destino, radio;
    struct Pila palo[PALOS];

    for (int p=0; p<PALOS; p++)
        inicializar(&palo[p]);

    printf("palo, disco: ");
    scanf(" %i, %i", &destino, &radio);

    for (int p=0; p<PALOS; p++)

    return EXIT_SUCCESS;
}

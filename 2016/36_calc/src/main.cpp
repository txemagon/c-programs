#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

static int fil = 1;

void ver_elemento(double el){
    printf("\x1B[%i;10f", fil++);
    printf("%.2lf", el);
}

void ver_pila(struct TPila *pila){
       system("clear");
       fil = 1;
       ver(pila, &ver_elemento);
       printf("\n");
}

double preguntar_numero() {
    double input;

    printf("\x1B[16;7f");
    printf("Numero: ");
    scanf(" %lf", &input);

    return input;
}

int main(int argc, char *argv[]){

    TipoPila input = -1;
    struct TPila pila;

    do{
        if (input >= 0.)
            push(&pila, input);

       ver_pila(&pila);

       input = preguntar_numero();
    }while(input >= 0.);


    return EXIT_SUCCESS;
}

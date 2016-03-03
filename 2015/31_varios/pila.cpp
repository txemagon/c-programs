#include <stdio.h>
#include <stdlib.h>

#define N 15

struct Pila {
    int data[N];
    int primera_posicion_libre;
};

bool push(struct Pila* pila, int numero){
    if (pila->primera_posicion_libre > N)
        return false;
    pila->data[pila->primera_posicion_libre++] = numero;
    return true;
}

int pop(struct Pila* pila) {
    if (pila->primera_posicion_libre <= 0)
        return 0;
    return pila->data[--(pila->primera_posicion_libre)];
}

int main(int argc, const char **argv){

    int resultado;
    struct Pila mesa;
    mesa.primera_posicion_libre = 0;

    push(&mesa, 3);
    push(&mesa, 5);
    resultado = pop(&mesa);
    push(&mesa, 7);

    printf("Resultado = %i\n", resultado);
    for (int i=0; i<mesa.primera_posicion_libre; i++)
        printf(" %i", mesa.data[i]);
    printf("\n");

    return EXIT_SUCCESS;
}

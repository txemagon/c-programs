#include <stdio.h>
#include <stdlib.h>

struct Pila {
    int *data;
    int primera_posicion_libre;
    int n;
};

bool push(struct Pila* pila, int numero){
    printf("PUSH %i\n", numero);
    if (pila->primera_posicion_libre >= pila->n){
        pila->data = (int *) realloc(
                pila->data,
                (pila->primera_posicion_libre + 1) * sizeof(int)
                );
        pila->n = pila->primera_posicion_libre;
        printf("Nuevo tamaño pila = %i\n", pila->n);
    }
    pila->data[pila->primera_posicion_libre++] = numero;
    return true;
}

int pop(struct Pila* pila) {
    printf("POP\n");
    if (pila->primera_posicion_libre <= 0)
        return 0;
    return pila->data[--(pila->primera_posicion_libre)];
}

void iniciar(struct Pila *pila){

    pila->data = NULL;
    pila->n = 0;
    pila->primera_posicion_libre = 0;
}

int main(int argc, const char **argv){

    int resultado;

    struct Pila mesa;
    iniciar(&mesa);

    push(&mesa, 5);
    push(&mesa, 7);
    resultado = pop(&mesa);
    push(&mesa, 3);
    push(&mesa, 6);
    push(&mesa, 4);
    printf("Resultado = %i\n", resultado);
    for (int i=0; i<mesa.primera_posicion_libre; i++)
        printf(" %i", mesa.data[i]);
    printf("\n");

    return EXIT_SUCCESS;
}

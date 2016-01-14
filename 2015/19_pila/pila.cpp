#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define N 0x10

int sacar(int datos[N], int *cima) {

    (*cima)--;
    return datos[*cima];
}

void meter(int nuevo, int pila[N], int *cima){
    pila[*cima] = nuevo;
    (*cima)++;
}

void mostrar_estado(int pila[N], int cima, int bandeja) {
    for (int i=0; i<cima; i++)
        printf("Fila %i: %i\n", i, pila[i]);
    printf("Bandeja = %i\n", bandeja);
}

int main(int argc, const char **argv){
    int pila[N];
    int primera_pos_libre = 0;
    int entrada, salida;

    while(1){
        entrada = -1;
        printf(": ");
        scanf(" %i", &entrada);
        __fpurge(stdin);
        printf("entrada = %i\n", entrada);

        if (entrada < 0)
            salida = sacar(pila, &primera_pos_libre);
        else
            meter(entrada, pila, &primera_pos_libre);

        mostrar_estado(pila, primera_pos_libre, salida);
    }

    return EXIT_SUCCESS;
}

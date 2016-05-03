#include <stdio.h>
#include <stdlib.h>

#define MAX 0x1000

int datos[MAX];
int cima = 0;

void imprime(int datos[MAX]){
    for (int i=0; i<cima; i++)
        printf(" %i ", datos[i]);
    printf("\n");
}

void intercambia(int datos[MAX], int pos1, int pos2){
    int aux = datos[pos1];
    datos[pos1] = datos[pos2];
    datos[pos2] = aux;
}

void quicksort(int datos[MAX], int ini, int ulti){
    int pivote = datos[ulti];
    int izq = ini;
    int der = ulti-1;
    int final_pivote;

    while(izq < der){
        if (datos[izq] > pivote && datos[der] < pivote) {
            intercambia(datos, izq, der);
            izq++;
            der--;
        } else {
            if (datos[izq] < pivote)
                izq++;
            if (datos[der] > pivote)
                der--;
        }
    }

    final_pivote = izq + (datos[izq] < pivote? 1 : 0);
    intercambia(datos, ulti, final_pivote);

    if (final_pivote - ini > 2)
        quicksort(datos, ini, final_pivote - 1);
    if (ulti - final_pivote > 2 )
        quicksort(datos, final_pivote + 1, ulti);

}

int main(int argc, const char **argv){

    int buffer = 0;

    while (scanf(" %i", &buffer) != EOF)
        datos[cima++] = buffer;

    imprime(datos);
    quicksort(datos, 0, cima-1);
    imprime(datos);

    return EXIT_SUCCESS;
}

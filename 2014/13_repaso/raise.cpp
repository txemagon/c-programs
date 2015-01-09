#include <stdio.h>
#include <stdlib.h>

#define N 100

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int vez=0; vez<exponente; vez++)
	resultado *= base;
    return resultado;
}

void rellenar(int pot[N], int exponente){
    for (int celda=0; celda < N; celda++)
	pot[celda] = potencia(celda+1, exponente);
}

void imprimir(int matriz[N]){
    for (int i=0; i<N; i++)
	printf("%3i ", matriz[i]);
    printf("\n");
}

int main(int argc, char *argv[]) {

    int pot[N];

    if (argc < 2)
	return EXIT_FAILURE;

    rellenar(pot, atoi(argv[1]));
    imprimir(pot);

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

#define N 6

bool es_perfecto(int candidato) {
    int suma_divisores = 0;

    for (int posible_divisor=1; posible_divisor<=candidato/2; posible_divisor++)
        if (candidato % posible_divisor == 0)
            suma_divisores += posible_divisor;

    return candidato == 1 || candidato == suma_divisores;
}

int main(int argc, const char **argv){

    int encontrados = 0;
    int este_numero = 1;

    int perfecto[N];

    while (encontrados < N)
        if (es_perfecto(este_numero++))
            perfecto[encontrados++] = este_numero - 1;

    for (int i=0; i<N; i++)
        printf(" %i", perfecto[i]);

    printf("\n");

    return EXIT_SUCCESS;
}

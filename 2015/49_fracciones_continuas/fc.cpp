#include <stdio.h>
#include <stdlib.h>

int buscar_el_valor_centinela(int datos[]) {
    int penultimo;

    for (penultimo = 0; datos[penultimo + 1] != 0; penultimo++);

    return penultimo;
}

int main(int argc, const char **argv){

    int coef[] = {1, 2, 3, 4, 0};
    int ultimo = buscar_el_valor_centinela(coef);

    double resultado = coef[ultimo];

    while (ultimo > 0)
        resultado = 1. / resultado + coef[--ultimo];

    printf("%.2lf\n", resultado);


    return EXIT_SUCCESS;
}

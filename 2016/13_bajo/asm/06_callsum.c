#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

double sum(double [], uint64_t);

int main(){

    double lista[] = { 40.5, 26.7, 21.9, 1.5, -40.5, -23.4 };

    printf("%20.1lf\n", sum(lista, 6));
    printf("%20.1lf\n", sum(lista, 2));
    printf("%20.1lf\n", sum(lista, 0));
    printf("%20.1lf\n", sum(lista, 3));

    return EXIT_SUCCESS;
}

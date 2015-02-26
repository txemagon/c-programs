#include <stdio.h>
#include <stdlib.h>
#include "superlopez.h"


int main(int argc, char *argv[]) {

    int n;
    int a = 2;

    printf("cuanto quieres que incremente la variable: ");
    scanf(" %i", &n);

    printf("a = %i \n", a);
    incrementa(&a, n);
    printf("a = %i \n", a);

    return EXIT_SUCCESS;
}

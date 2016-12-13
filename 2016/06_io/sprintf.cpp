#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero = 123456789;
    char dni[8];

    snprintf(dni, 8, "%i", numero);

    return EXIT_SUCCESS;
}

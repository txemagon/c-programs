#include <stdio.h>
#include <stdlib.h>


int main() {

    int n;

    printf("Número: ");
    scanf(" %i", &n);

    if (n % 2 == 0)
        printf("El numero %i es par.\n", n);
    else
        printf("El numero %i es impar.\n", n);



    return EXIT_SUCCESS;
}

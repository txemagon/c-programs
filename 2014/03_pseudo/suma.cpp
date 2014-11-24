#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numeros[] = { 3, 5, 7, 9, 11 };
    int resultado = 0;

    for(int i=0; i<5; i++)
	resultado += numeros[i];

    printf("R = %i\n", resultado);

    return EXIT_SUCCESS;
}

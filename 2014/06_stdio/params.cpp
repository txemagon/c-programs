#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double resultado = 0;

    for (int i=1; i<argc; i++)
	resultado += atof(argv[i]);

    printf("La suma es: %.2lf\n", resultado);

    return EXIT_SUCCESS;
}

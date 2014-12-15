#include <stdio.h>
#include <stdlib.h>

#define N 10

int ticket(){

    static int numero = 0;

    numero++;

    return numero;
}

int main(int argc, char *argv[]) {

    for (int i=0; i<N; i++)
	printf("%i\n", ticket() );

    return EXIT_SUCCESS;
}

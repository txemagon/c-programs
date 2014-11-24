#include <stdio.h>
#include <stdlib.h>

#define N 0x10

int main(int argc, char *argv[]) {
    
    int lista[N];
    int *p = lista;

    for (int i=0; i<N; i++)
	*(p + i) = 2 * i;

    printf("\n");
    for (int i=0; i<N; i++)
	printf("%i\t", *(p+i));
    printf("\n");

    return EXIT_SUCCESS;
}

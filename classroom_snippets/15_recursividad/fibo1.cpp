#include <stdio.h>
#include <stdlib.h>

/*
   1, 1, 2, 3, 5, 8, 13
   fn = fn-1 + fn-2
   */

#define MAX 0x10

void muestra(int lista[MAX]){
    for (int i=0; i<MAX; ++i)
	printf("%i ", lista[i]);
    printf("\n");
}

void calcula(int fibonacci[MAX]){
    if (MAX < 1)
	return;
    fibonacci[0] = 1;
    if (MAX < 2)
	return;
    fibonacci[1] = 1;

    for (int i=2; i<MAX; i++)
	fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];

}

int main(int argc, char *argv[]){

    int fibonacci[MAX];

    calcula(fibonacci);
    muestra(fibonacci);

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

#define N 2

int suma(int op1, int op2, int op3){
    return op1 + op2 + op3;
}

void incrementa(int *x){
    *x++;
}

void duplica(int A[N]){
    for (int i=0; i<N; i++)
	A[i] = 2 * A[i];
}

int main(int argc, char *argv[]) {

    int resultado;
    int a = 5,
	b = 7;
    int vector[N];


    resultado = suma(2, a + 5, b);

    incrementa(&a);
    printf("%i\n", a);

    duplica(vector);
    return EXIT_SUCCESS;
}

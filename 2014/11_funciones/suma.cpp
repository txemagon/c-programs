#include <stdio.h>
#include <stdlib.h>

#define N 10

int suma(int op1, int op2){
     return op1 + op2;
}

int main(int argc, char *argv[]) {

    int d = 5;

    printf("%i\n", suma(2, d));

    return EXIT_SUCCESS;
}


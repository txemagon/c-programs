#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>

#define MAX 50


int64_t maximo_de_tres(int64_t, int64_t, int64_t);

int main(){
    int op1, op2, op3;

    srand (time(NULL));

    for (int i=0; i<100; i++){
        op1 = rand() % MAX;
        op2 = rand() % MAX;
        op3 = rand() % MAX;
        printf("El maximo de %i, %i y %i es %li.\n", op1, op2, op3, maximo_de_tres(op1, op2, op3));
    }

    return EXIT_SUCCESS;
}

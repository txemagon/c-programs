#include <stdio.h>
#include <stdlib.h>
/* Metase 23<intro> para probar */

int multiplica(int op1, int op2) {
    return op1 * op2;
}

int main(int argc, char *argv[]){

    int a, b;
    a = getchar() - '0';
    b = getchar() - '0';

    printf("%ix%i=%i\n", a, b, multiplica(a,b) );

    return EXIT_SUCCESS;
}

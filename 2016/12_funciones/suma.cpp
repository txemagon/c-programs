#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2){
    return op1 + op2;
}

int main(int argc, char *argv[]){


    printf(" %i\n", suma(2, 3));
    printf(" %i\n", suma(7, 3));
    printf(" %i\n", suma(7,-3));

    return EXIT_SUCCESS;
}

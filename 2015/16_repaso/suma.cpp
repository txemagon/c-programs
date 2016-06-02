#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2){
    return op1 + op2;
}

int main(int argc, const char **argv){

    int a;
    int b = 2,
        c = -8;

    a = 3 + b + suma(5, c);

    printf("%i\n", a);

    return EXIT_SUCCESS;
}

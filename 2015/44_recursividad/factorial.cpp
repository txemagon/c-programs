#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    if (n == 0)
        return 1;
    return n * factorial(n-1);
}

int main(int argc, const char **argv){
    printf("El factorial de 7 es: %i\n", factorial(7));
    return EXIT_SUCCESS;
}

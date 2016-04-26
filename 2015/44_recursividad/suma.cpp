#include <stdio.h>
#include <stdlib.h>

int suma(int n){
    if (n == 0)
        return 0;
    return n + suma(n-1);
}

int main(int argc, const char **argv){
    printf("La suma de 2 es: %i\n", suma(2));
    return EXIT_SUCCESS;
}

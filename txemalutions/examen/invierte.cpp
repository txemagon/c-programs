
#include <stdio.h>
#include <stdlib.h>

int invierte(int numero){
    int invertido = 0;

    for (;numero > 0; invertido *= 10, numero /= 10)
        invertido += numero % 10;

    return invertido / 10;
}

int main(int argc, char *argv[]){
    printf("%i\n", invierte(atoi(argv[1])));

    return EXIT_SUCCESS;
}

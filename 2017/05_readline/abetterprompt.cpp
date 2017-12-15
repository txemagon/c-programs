#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

#define N 0x100

int main(){

    char buffer[N];

    printf("Nombre: ");
    fgets(buffer, N, stdin);

    readline("Nombre: ");

    return EXIT_SUCCESS;
}

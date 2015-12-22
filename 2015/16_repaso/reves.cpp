#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 0x100

int main(int argc, const char **argv){

    char frase[MAX];
    char *movil = frase;

    printf("Introduce una frase: ");
    fgets(frase, MAX, stdin);
    movil += strlen(frase) - 1;

    for (; movil >= frase; movil--)
        printf("%c", *movil);
    printf("\n");

    return EXIT_SUCCESS;
}

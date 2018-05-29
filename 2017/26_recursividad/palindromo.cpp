#include <stdio.h>
#include <stdlib.h>

void imprime(const char * letra) {
    if (*(letra+1) != '\0')
        imprime(letra+1);
    printf("%c", *letra);
}

int main(){
    const char * const frase = "dabale arroz a la zorra el abad";
    const char * letra = frase;

    imprime(letra);
    printf("\n");

    return EXIT_SUCCESS;
}

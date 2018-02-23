#include <stdio.h>
#include <stdlib.h>

int main(){
    char palindromo[] = "dabale arroz a la zorra el abad";
    char *letra = palindromo;

    while( *letra != '\0' ){
        printf(" %c", *letra);
        letra++;
    }
    printf("\n");

    while( letra > palindromo )
        printf(" %c", *--letra);
    printf("\n");


    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main(){

    char letras[] = "TRWAGMYPFDXBNJZSQVHLCKE";
    int dni;

    printf("dni: ");
    scanf(" %i", &dni);

    printf("%c\n", letras[dni % 23]);

    return EXIT_SUCCESS;
}

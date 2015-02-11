#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100


int main(int argc, char *argv[]) {

    FILE *fichero;
    char letra;

    fichero = fopen("carta.txt", "r");

    while ( (letra = fgetc(fichero)) != EOF)
	putchar(letra);
    

    fclose(fichero);

    return EXIT_SUCCESS;
}

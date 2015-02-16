#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>

#define LETRAS ('z'-'a'+1)

int veces[LETRAS];

int index(char letra){ 
    return tolower(letra) - 'a';
}

int main(int argc, char *argv[]) {

    FILE *texto;
    char letra; 

    if (argc < 2)
	return EXIT_FAILURE;

    if ( (texto = fopen(argv[1], "r")) == NULL)
	return EXIT_FAILURE;

    bzero(veces, LETRAS);

    while ( (letra = fgetc(texto)) != EOF )
	veces[index(letra)]++;
   
    for (int i=0; i<LETRAS; i++)
	printf("%c: %i\n", i + 'a', veces[i]);

    fclose(texto);

    return EXIT_SUCCESS;
}

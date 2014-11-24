#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *pf;
    char letra;

    pf = fopen("portada.txt", "r");

    if (pf == NULL){
	fprintf(stderr, "No hemos podido abrir el fichero.\n");
	return EXIT_FAILURE;
    }

    while( (letra = fgetc(pf)) != EOF ){
	putchar(letra);
    }

    fclose(pf);

    return EXIT_SUCCESS;
}

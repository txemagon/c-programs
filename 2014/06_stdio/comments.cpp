#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *pf;
    char letra;
    bool dentro_de_comentarios = false;

    if (argc < 2){
	printf("Uso: %s <fichero>\n", argv[0]);
	return EXIT_FAILURE;
    }
    
    if ( (pf = fopen(argv[1], "r")) == NULL){
	perror("fopen");
	return EXIT_FAILURE;
    }

    while( (letra = fgetc(pf)) != EOF ){
	if ( letra == '#' )
	    dentro_de_comentarios = true;
	if ( letra == '\n' )
	    dentro_de_comentarios = false;

	if (!dentro_de_comentarios)
	    putchar(letra);
    }

    fclose(pf);

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void show_options(
	const char *mssg, 
	const char *name) {
    fprintf(stderr, "Error: %s\n", mssg);
    fprintf(stderr, "Uso: %s <fichero.pcx>\n", name);
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[]) {
    struct TPCXHeader header;
    FILE *pf;

    if (argc < 2)
	show_options(
		"Necesito el nombre de un fichero PCX.", 
		argv[0] );

    if (!(pf = fopen(argv[1], "rb")))
	    show_options(
		"No se pudo abrir el fichero.", 
		argv[0] );

    fread(&header, sizeof(header), 1, pf);
    imprimir(header);

    fclose(pf);
	    

    return EXIT_SUCCESS;
}

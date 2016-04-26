#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main(int argc, const char **argv){

    FILE *pf = NULL;
    struct BMP cabecera;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <bmp file>\n", argv[0]);
        return EXIT_FAILURE;
    }


    pf = fopen(argv[1], "r+");

    if (pf == NULL){
        fprintf(stderr, "File not found: %s \n", argv[1]);
        return EXIT_FAILURE;
    }

    // memoria, tamaño, cuantos, fichero
    fread(&cabecera, sizeof(struct BMP), 1, pf);

    if ( cabecera.magic != 'B' + 'M' * 0x100 ){
        fprintf(stderr, "This is not a BitMap.\n");
        return EXIT_FAILURE;
    }

    show(cabecera);

    fclose(pf);


    return EXIT_SUCCESS;
}

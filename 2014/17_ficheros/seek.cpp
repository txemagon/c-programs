#include <stdio.h>
#include <stdlib.h>

#define N 0x20

int main(int argc, char *argv[]) {
    char buffer[N];
    int filas;
    long int pos;

    FILE *imagenes;

    imagenes = fopen("banner.bin", "r");
    
    fscanf(imagenes, " %i", &filas);

    for(int i=0; i<filas; i++)
	fscanf(imagenes, " %*s");

    pos = ftell(imagenes);

    rewind(imagenes);
    fseek(imagenes, pos, SEEK_SET);

    fscanf(imagenes, " %s", buffer);
    printf(" %s\n", buffer);
    fclose(imagenes);


    return EXIT_SUCCESS;
}

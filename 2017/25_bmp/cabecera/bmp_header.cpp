#include <stdio.h>
#include <stdlib.h>
#include "bmp.h"

void show_bmp(BMPHeader header) {
    printf("Signature:       %c%c\n",     header.signature[0], header.signature[1]);
    printf("Tamaño:          %i\n",       header.size);
    printf("Datos de imagen: %i (%Xh)\n", header.data_offset, header.data_offset);
}

void show_dib(DIBHeader header) {
    printf("Tamaño cabecera dib: %i\n", header.header_size);
    printf("Anchura: %i\n", header.width);
    printf("Altura: %i\n",  header.height);
    printf("Bits por Pixel: %i\n",  header.bpp);
    printf("Compresión: %i\n",  header.compression);
    printf("Tamaño de la imagen: %i\n", header.image_size);
    printf("xres: %i, yres: %i\n", header.xres, header.yres);
    printf("Number of colors: %i\n", header.ncolors);
    printf("Important colors: %i\n", header.important_colors);
}

void show(Header header){
    show_bmp(header.bmp);
    show_dib(header.dib);
}

int main(){
    const char *filename= "a.bmp";
    FILE *pbmp = NULL;
    Header header;

    if (!(pbmp = fopen(filename, "r"))){
        fprintf( stderr, "No he encontrado el fichero.\n" );
        return EXIT_FAILURE;
    }
    fread(&header, sizeof(Header), 1, pbmp);
    fclose(pbmp);

    show(header);

    return EXIT_SUCCESS;
}

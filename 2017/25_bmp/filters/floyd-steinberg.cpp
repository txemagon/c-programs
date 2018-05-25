#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "bmp.h"

#define R3 1.7321

const char *source= "a.bmp";
const char *destin= "b.bmp";

Color *leer_cabecera(Header *header, const char *filename) {
    Color *imagen;
    FILE *pbmp = NULL;

    if (!(pbmp = fopen(filename, "r"))){
        fprintf( stderr, "No hay imagen a.bmp de partida.\n" );
        exit(EXIT_FAILURE);
    }

    fread(header, sizeof(Header), 1, pbmp);

    if (header->dib.bpp != 24){
        fprintf( stderr, "Sólo trabaja con 24bpp.\n" );
        exit(EXIT_FAILURE);
    }

    fseek(pbmp, header->bmp.data_offset, SEEK_SET);
    imagen = (Color *) malloc(header->dib.image_size);
    fread(imagen, sizeof(Color), 8 * header->dib.image_size / header->dib.bpp, pbmp);
    fclose(pbmp);

    return imagen;
}

unsigned char *leer_archivo(const char *filename, Header header){
    FILE *pbmp = NULL;
    unsigned char *file = NULL;

    if (!(pbmp = fopen(filename, "r"))){
        fprintf( stderr, "No hay imagen a.bmp de partida.\n" );
        exit(EXIT_FAILURE);
    }

    file = (unsigned char *) malloc(header.bmp.size);
    fread(file, 1, header.bmp.size, pbmp);
    fclose(pbmp);

    return file;
}

int main(){
    unsigned char *bmp          = NULL;  /* All the file */
    unsigned char *luminosidad  = NULL;
    Color *imagen;       /* Image data */
    Header header;
    int pixels = 0;

    imagen = leer_cabecera(&header, source);
    bmp = leer_archivo(source, header);

    /* Calcular la luminosidad de la imagen */
    pixels = 8 * header.dib.image_size / header.dib.bpp;
    fprintf(stderr, "pixels: %i\n",  pixels);
    luminosidad = (unsigned char *) malloc(pixels);
    for (int i=0; i<pixels; i++)
        *(luminosidad + i) = (unsigned char) (sqrt(
                imagen[i].r * imagen[i].r +
                imagen[i].g * imagen[i].g +
                imagen[i].b * imagen[i].b ) / R3 );



    /* Filtro */
    for (unsigned i=0; i<header.dib.image_size; i++)
       *(bmp + header.bmp.data_offset + i ) = *(luminosidad + i / 3);
    /* Fin del Filtro */


    /* Salida */
    fwrite(bmp, 1, header.bmp.size, stdout);

    free(luminosidad);
    free(bmp);
    free(imagen);

    return EXIT_SUCCESS;
}

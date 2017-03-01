#include <stdio.h>
#include <stdlib.h>

#define CARACTER "█"

struct TPsf1 {
    unsigned char numero_magico[2];
    unsigned char modo;
    unsigned char longitud;
};

const char *comando;

void ver_uso(FILE *salida){
    fprintf( salida,
            "Uso: %s <fichero.psf>\n"
            "\t Este programa visualiza fuentes Adobe psf1.\n",
            comando);
}

void error(const char *msj){
    ver_uso(stderr);
    fprintf(stderr, "ERROR: %s\n\n", msj);
    exit(1);
}

void decodificar(unsigned char *caracter, unsigned char longitud){
    for (int fila=0; fila<longitud; fila++){
        for (int bit=7; bit>=0; bit--)
            if (caracter[fila] & (1 << bit ))
                printf("%s", CARACTER);
            else
                printf(" ");
        printf("\n");
    }
    printf("\n\n");
}

int main(int argc, char *argv[]){

    struct TPsf1 cabecera;
    FILE *pf;
    unsigned char *caracter;

    comando = argv[0];

    if (argc < 2)
        error("No hay suficientes argumentos.");

    if ( !(pf = fopen(argv[1], "r")) )
        error("No se ha encontrado el fichero.");

    fread(&cabecera, sizeof(cabecera), 1, pf);

    caracter = (unsigned char *) malloc(cabecera.longitud);


    for (int i=0; i<256; i++){
        printf("ASCII %i => %lu\n",
                i, i*cabecera.longitud + sizeof(cabecera));
        fread( caracter, cabecera.longitud, 1, pf );
        decodificar(caracter, cabecera.longitud);
    }


    free(caracter);
    fclose(pf);

    return EXIT_SUCCESS;
}

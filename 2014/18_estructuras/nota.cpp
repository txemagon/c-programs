#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct TNota {
    double matematicas;
    double lengua;
    double fisica;
    char ingles;
    char nombre[0x20];
    char *comentario;
};

void cp(struct TNota *destino, struct TNota origen){
    destino->matematicas = origen.matematicas;
    destino->lengua      = origen.lengua;
    destino->fisica      = origen.fisica;
    destino->ingles      = origen.ingles;
    strncpy(destino->nombre    , origen.nombre, 0x20);
    strncpy(destino->comentario, origen.comentario, 5);
}

int main(int argc, char *argv[]) {

    struct TNota juan, 
		 ramon = {9.9, 2.5, 3.7, 'A', "ramon"};


    ramon.comentario = (char *) malloc(5);
    strncpy(ramon.comentario, "hola", 5);

    juan.comentario = (char *) malloc(5);
    strncpy(juan.comentario, "HOLA", 5);

    cp(&juan, ramon);

    printf("%s\n", ramon.comentario);

    free(juan.comentario);
    free(ramon.comentario);


    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

#define TRI 1
#define CUA 2
#define PAR 3
#define PEN 4
#define CIR 5

const char *opcion[] = {
    "Triángulo",
    "Cuadrado",
    "Paralelogramo",
    "Pentágono",
    "Círculo",
    NULL
};

int main(){

    unsigned eleccion;

    system("toilet --gay -fpagga AREAS");

    printf( "Elige la figura:\n" "\n");

    for (int i=0; i<6; i++)
        printf("\t%i. %s.\n", i+1, opcion[i]);

    printf("\n" "\tOpción: ");

    scanf(" %u", &eleccion);

    switch(eleccion) {
        case TRI:
            printf("△");
            break;
        case CUA:
            printf("□");
            break;
        case PAR:
            printf("▱");
            break;
        case PEN:
            printf("⬠");
            break;
        case CIR:
            printf("○");
            break;
        default:
            printf("Del 1 al 5, borrico.\n");
            break;
    }

    printf("\n");
    return EXIT_SUCCESS;
}

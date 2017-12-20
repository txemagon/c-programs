#include <stdio.h>
#include <stdlib.h>

#define TRI 1
#define CUA 2
#define PAR 3
#define PEN 4
#define CIR 5

int main(){

    unsigned opcion;

    system("toilet --gay -fpagga AREAS");

    printf(
            "Elige la figura:\n"
            "\n"
            "\t1. Triángulo.\n"
            "\t2. Cuadrado.\n"
            "\t3. Paralelogramo.\n"
            "\t4. Pentágono.\n"
            "\t5. Círculo.\n"
            "\n"
            "\tOpción: "
            );

    scanf(" %u", &opcion);

    switch(opcion) {
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

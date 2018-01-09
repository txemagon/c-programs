#include <stdio.h>
#include <stdlib.h>

enum Opcion {cuadrado=1, triangulo, circulo };

void menu(enum Opcion *opcion){
    int eleccion;

    system("clear");
    system("toilet --gay -fpagga Men-U");
    printf( "\n\n"
            "Elige:\n\n"
            "\t1.- Cuadrado.\n"
            "\t2.- Triangulo.\n"
            "\t3.- Círculo.\n"
            "\n"
            "Opción: "
            );
    /* Opcion 1 */
    /* Fijaros que no necesita & */
    // scanf(" %i", opcion);

    /* Opcion 2 */
    scanf(" %i", &eleccion);
    *opcion = (enum Opcion) eleccion;
}

int main(){

    enum Opcion eleccion;
    menu(&eleccion);

    printf("Has elegido ");
    switch(eleccion){
        case cuadrado:
            printf("Erik\n.");
            break;
        case triangulo:
            printf("Menina\n");
            break;
        case circulo:
            printf("Menina de Botero.\n");
            break;
}
    return EXIT_SUCCESS;
}

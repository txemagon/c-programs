#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv) {

    int grande, peque, mesa;

    printf("Numero 1: ");
    scanf(" %i", &grande);
    printf("Numero 2: ");
    scanf(" %i", &peque);

    if (grande < peque) {
        // saco lo de la papelera grande y lo dejo en la mesa
        mesa = grande;
        // saco lo de la papelera pequeña y lo pongo en la grande.
        grande = peque;
        // saco lo de la mesa y lo echo en la p. pequeña
        peque = mesa;

    } else {

    }

    printf("%i\n", grande);
    printf("%i\n", peque);

    return EXIT_SUCCESS;
}

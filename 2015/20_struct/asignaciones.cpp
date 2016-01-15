#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct TCurriculo {
    char nombre[20];
    int programacion;
    int bases;
    int fol;
};

void muestra(struct TCurriculo notas){
    printf("Las notas de %s\n", notas.nombre);
    printf("Programación: %i\n", notas.programacion);
    printf("Bases: %i\n", notas.bases);
    printf("F.O.L.: %i\n", notas.fol);
    printf("\n");
    printf("Nombre en: %p", notas.nombre);
    printf("\n");
}

int main(int argc, const char **argv){

    struct TCurriculo angel = { "Angel", 4, 7, 9 };
    struct TCurriculo victor = angel;
    strcpy(victor.nombre, "Victor");
    angel = victor;

    printf("Angel:\t%p\nVictor:\t%p\n", angel.nombre, victor.nombre);

    muestra(angel);
    muestra(victor);


    return EXIT_SUCCESS;
}

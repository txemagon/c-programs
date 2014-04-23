#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct TAlumno {
    char nombre[10];
};

void cambia(struct TAlumno al1){
    strcpy(al1.nombre, "Manolo");
}

int main(int argc, char *argv[]){

    struct TAlumno al1, al2;

    strcpy(al1.nombre, "Juan");
    al2 = al1;
    strcpy(al2.nombre, "Pepe");
    printf("%s\n", al1.nombre);

    cambia(al1);

    printf("%s\n", al1.nombre);

    return EXIT_SUCCESS;
}

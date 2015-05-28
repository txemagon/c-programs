#include <stdio.h>
#include <stdlib.h>

struct TAlumno {
    char nombre[20];
    double nota;
    struct TAlumno *siguiente;
};

typedef struct TAlumno Alumno;


Alumno *ultimo(Alumno *uno) {
    while (uno->siguiente != NULL)
	uno = uno->siguiente;

    return uno;
}

int main(int argc, char *argv[]) {

    Alumno *primero,
	   *last;
    

    last = ultimo(primero);



    return EXIT_SUCCESS;
}

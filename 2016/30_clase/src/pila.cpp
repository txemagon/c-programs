#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "notas.h"

#define N 0x100

struct TStack{
    struct TAlumno data[N];
    int cima;
};

int main(int argc, char *argv[]){

    struct TAlumno *alumno;

    alumno = (struct TAlumno *) malloc(sizeof (struct TAlumno));

    return EXIT_SUCCESS;
}

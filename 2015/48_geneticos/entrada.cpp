#include <stdio.h>
#include "entrada.h"

int cuantos(const char *msj){
    int alumnos;

    printf("N. %s: ", msj);
    scanf(" %i", &alumnos);
    if ( alumnos < 1)
        alumnos = -1;
    return alumnos;
}


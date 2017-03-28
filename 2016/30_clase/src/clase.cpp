#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "notas.h"

void pedir_datos(struct TAlumno *p){
    strcpy(p->nombre, "Gabriel");
    p->notas.programacion.primera = 4.5;
}

int main(int argc, char *argv[]){

    struct TAlumno alumno;
    struct TAlumno *p_alumno = &alumno;
    char buffer[MAX];

    bzero(&alumno, sizeof(struct TAlumno));

    printf("Nombre: ");
    fgets(buffer, MAX, stdin);
    strncpy(alumno.nombre, buffer, MAX);

    printf("%s\n", alumno.nombre);

    alumno.notas.programacion.primera = 7.5;
    printf("Programación: %.2lf\n", alumno.notas.programacion.primera);
    printf("Programación: %.2lf\n",
            (*p_alumno).notas.programacion.primera);
    printf("Programación: %.2lf\n",
            p_alumno->notas.programacion.primera);

    pedir_datos(&alumno);
    printf("%s\n", alumno.nombre);
    printf("Programación: %.2lf\n",
            p_alumno->notas.programacion.primera);


    return EXIT_SUCCESS;
}

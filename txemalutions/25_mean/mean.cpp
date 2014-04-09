#include <stdio.h>
#include <stdlib.h>

#define N      3
#define MAX 0x200

struct TContenidos {
    double programacion;
    double bases_de_datos;
}

struct TAlumno {
    char nombre_completo[MAX];
    struct TContenidos asignaturas;
};

int main(int argc, char *argv[]){

    struct TAlumno clase[N];
    
    /* Pedir los datos */
    for (int i=0; i<N; i++){
        printf("Nombre completo: ");
        gets( clase[i].nombre_completo );
        printf("Nota de Programación: ");
        scanf(" %lf", &clase[i].asignaturas.programacion );
        printf("Nota de Bases de Datos: ");
        scanf(" %lf", &clase[i].asignaturas.bases_de_datos );
    }
    

    /* Imprimir los datos */
    for (int i=0; i<N; i++){
        printf("Nombre completo: %s\n", clase[i].nombre_completo );
        printf("Nota de Programación: %.2lf\n", clase[i].asignaturas.programacion );
        printf("Nota de Bases de Datos: %.2lf\n", clase[i].asignaturas.bases_de_datos );
    }
    return EXIT_SUCCESS;
}

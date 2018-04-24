#include <stdio.h>
#include <stdlib.h>

#define N 0x10

typedef struct TEmpleado{
    char nombre[N];
    char puesto[N];
    double salario;
    struct TEmpleado *sgte;
} Empleado;

void rellena(Empleado *nuevo){
    printf("Nombre: ");
    scanf(" %s", nuevo->nombre);
    printf("Puesto: ");
    scanf(" %s", nuevo->puesto);
    printf("Salario: ");
    scanf(" %lf", &nuevo->salario);

    nuevo->sgte = NULL;
}

void imprime(Empleado empleado){

    printf( "\n-------------\n"
            "%s / %s [%.2lf€]\n",
            empleado.nombre,
            empleado.puesto,
            empleado.salario);
}

int main(){
    Empleado *primer = NULL;

    primer = (Empleado *) malloc(sizeof(Empleado));
    rellena(primer);

    primer->sgte = (Empleado *) malloc(sizeof(Empleado));
    rellena(primer->sgte);

    primer->sgte->sgte = (Empleado *) malloc(sizeof(Empleado));
    rellena(primer->sgte->sgte);


    imprime(*primer);
    imprime(*primer->sgte);
    imprime(*primer->sgte->sgte);

    free(primer->sgte->sgte);
    free(primer->sgte);
    free(primer);
    return EXIT_SUCCESS;
}

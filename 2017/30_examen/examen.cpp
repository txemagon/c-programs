#include <stdio.h>
#include <stdlib.h>

#define N 0x100

struct Par {
    double nota;
    int id;
};

typedef struct {
    double matematicas;
    double lengua;
    double historia;
} Nota;

struct Alumno {
    char nombre[N];
    char apellidos[N];
    Nota asignaturas;
    void (*test)();
};

struct Alumno rellenar(){
    struct Alumno nuevo;

    printf("Nombre: ");
    scanf(" %s", nuevo.nombre);
    printf("Nombre: ");
    scanf(" %s", nuevo.apellidos);

    printf("Nota de Matemáticas: ");
    scanf(" %lf", &nuevo.asignaturas.matematicas);
    printf("Nota de Lengua: ");
    scanf(" %lf", &nuevo.asignaturas.lengua);
    printf("Nota de Historia: ");
    scanf(" %lf", &nuevo.asignaturas.historia);

    return nuevo;
}

void modificar2 /* borriqueros */ (struct Alumno *alumno) {
    printf("Dime tu nombre: ");
    scanf(" %s", alumno->nombre);
    printf("Nota de mates: ");
    scanf(" %lf", &alumno->asignaturas.matematicas);
}

void modificar(struct Alumno *alumno){
    *alumno = rellenar();
}

void dump(struct Alumno lista[N]){
    FILE *pf = fopen("volcado.bck", "wb");
    fwrite(lista, sizeof(struct Alumno), N, pf);
    fclose(pf);
}

struct Par minimo_mates(struct Alumno lista[N]){
   struct Par minimo = {1000., -1};

   for (int i=0; i<N; i++)
       if (minimo.nota > lista[i].asignaturas.matematicas){
           minimo.nota = lista[i].asignaturas.matematicas;
           minimo.id = i;
       }

  return minimo;
}

int fibonacci(int n){
    if (n == 0 || n == 1)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    struct Alumno lista[N];

    lista[0] = rellenar();

    return EXIT_SUCCESS;
}

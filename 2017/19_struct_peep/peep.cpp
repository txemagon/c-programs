#include <stdio.h>
#include <stdlib.h>

#define N 6

typedef struct {
    int id;
    int saldo;
    double sueldo;
    char name[N];
} Empleado;

int main(){

    Empleado jefe = {  27, -13, 23.5, "Ramon" };
    void *p = (void *) &jefe;

    printf("Jefe reside en %p\n", p);

    for (unsigned i=0; i<sizeof(jefe); i++)
        printf(" %X", *((char *)p+i));

    printf("\n");

    return EXIT_SUCCESS;
}

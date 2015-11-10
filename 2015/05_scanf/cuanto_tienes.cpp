#include <stdio.h>
#include <stdlib.h>

int main(){

    int saldo;
    int mes, anio;

    const char *MES[12] = {
        "Enero",
        "Febrero",
        "Marzo",
        "Abril",
        "Mayo",
        "Junio",
        "Julio",
        "Agosto",
        "Septiembre",
        "Octubre",
        "Noviembre",
        "Diciembre"
    };

    printf("¿Cuánto dinero tienes?\n");
    printf("yo=<cantidad>\n");

    scanf(" yo=%i", &saldo);
    printf("Saldo: %i\n", saldo);

    printf("Fecha de nacimiento (dd/mm/aa): ");
    scanf(" %*i/%i/%i", &mes, &anio);
    // El * es el caracter de supresion de asignacion.

    printf("Naciste en %s de %i.\n",
            MES[mes-1], anio);

    return EXIT_SUCCESS;
}

#include <stdlib.h>
#include <strings.h>

#include "global.h"
#include "interfaz.h"

int main(){

    int actual[M][N],
        futuro[M][N];

    bzero(actual, sizeof(actual));
    poblacion_inicial(actual);

    while(1) {
        // calcular(futuro, actual);
        // Convertir el futuro en actual
        pintar(actual);
    }

    return EXIT_SUCCESS;
}

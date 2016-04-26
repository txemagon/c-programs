#include <stdio.h>
#include <stdlib.h>

bool tiene_divisores(int comprobando, int posible_divisor) {
    bool mi_respuesta;

    if (posible_divisor == 1)
        return false;

    mi_respuesta = comprobando % posible_divisor == 0;

    return mi_respuesta || tiene_divisores(comprobando, posible_divisor-1);
}

int main(int argc, const char **argv){

    if (tiene_divisores(6,5) )
        printf("Sí tiene divisores.\n");
    else
        printf("No tiene divisores.\n");

    return EXIT_SUCCESS;
}

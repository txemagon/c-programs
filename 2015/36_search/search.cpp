#include <stdio.h>
#include <stdlib.h>
#include <string.h>

        //    comprobar letra a letra todas las letras del patron hasta
        //    que haya una distinta o
        //    llegue al final del patrón.
bool comprobar_letra_a_letra(char tablero[], const char *patron, int offset){

    for (int i=0; i< (int) strlen(patron); i++)
        if (tablero[offset + i] != patron[i])
            return false;

    return true;
}

int main(int argc, const char **argv){
    char tablero[] = "arpedpedrozuloaga";
    const char *patron = "pedro";
    bool palabra_encontrada = false;

    for (   int offset=0;
            tablero[offset + (int) strlen(patron)] != '\0' && !palabra_encontrada;
            offset++)
        palabra_encontrada = comprobar_letra_a_letra(tablero, patron, offset);

    if (palabra_encontrada)
        printf("%s\n", patron);

    return EXIT_SUCCESS;
}



    // Desplazar el patron sobre el tablero hasta
    //    el final
    //    que se encuentre toda la palabra
        //    comprobar letra a letra todas las letras del patron hasta
        //    que haya una distinta o
        //    llegue al final del patrón.


    // Desplazar el patron sobre el tablero hasta
    //    el final
    //    que se encuentre toda la palabra


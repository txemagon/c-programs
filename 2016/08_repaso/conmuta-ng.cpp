#include <stdio.h>
#include <stdlib.h>
/*
*/

int menu() {
    int opcion;

    system("clear");
    system("toilet --gay -fpagga ESTADO");
    printf( "\n"
            "0: mi madre esta contenta\n"
            "1: mi padre esta contento\n"
            "2: he recibido la paga\n"
            "3: tengo novia\n"
            "4: he ganado la ultima partida\n"
            "5: tengo sueño\n"
            "6: he aprobado todo\n"
            "7: me ha salido el ultimo programa\n"
          );
    do {
        printf("Que bit conmutas (0-7): ");
        scanf(" %i", &opcion);
    } while (opcion>7);

    if (opcion < 0)
        exit(0);

    return opcion;
}

void muestra(int dato){

}

int main(int argc, char *argv[]){

    unsigned char estado = 0;
    int indice, mascara;

    do {
        indice = menu();
        mascara = 1 << indice;
        estado = estado ^ mascara;
        muestra(estado);
    } while (1);

    return EXIT_SUCCESS;
}

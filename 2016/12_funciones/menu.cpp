#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *opciones[] = {
    "League of Legends",
    "Counter Strike",
    "Minecraft",
    NULL
};

unsigned char menu(const char *titulo) {
    unsigned char opcion;
    char toilet[0x100] = "toilet -Fborder --gay -fterm ";

    strcat(toilet, titulo);
    system("clear");
    system(toilet);
    printf("\nOpciones:\n\n");

    for (int i=0; opciones[i] != NULL; i++)
        printf("\t%i.- %s\n", i+1, opciones[i]);

    printf("\nTú opción: ");

    scanf(" %c", &opcion);

    return opcion - '0';
}

int main(int argc, char *argv[]){

    unsigned char opcion = menu("\"Elige un Videojuego\"");

    switch(opcion){
        case 1: printf("No me gusta ese juego.\n");
                break;
        case 2: printf("Ah! Si? De verdad?.\n");
                break;
        case 3: printf("Flipa por un cubo.\n");
                break;

    }
    return EXIT_SUCCESS;
}

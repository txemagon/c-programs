#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    const char *nombres[] = {
        "Ángel & Tome",
        "Miguel",
        "Jose Manuel",
        "Fernando M y me encontrarás",
        "Álvaro",
        "Iván Dando",
        "Santiago Suma y Sieger",
        NULL
    };


    for (int n=0; nombres[n]!=NULL; n++)
        printf("%i.- %s\n", n+1, nombres[n]);

    return EXIT_SUCCESS;
}

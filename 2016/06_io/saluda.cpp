#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int veces;

    printf("Programa: %s\n", argv[0]);

    if (argc < 3)
        return EXIT_FAILURE;

    veces = atoi(argv[2]);

    for (int i=0; i<veces; i++)
        printf("Hola, %s\n", argv[1]);


    return EXIT_SUCCESS;
}

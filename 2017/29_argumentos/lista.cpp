#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    for (int i=0; i<argc; i++)
        printf("Argumento %i: %s\n", i+1, argv[i]);

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *tubo; // stream

    tubo = fopen("iberos.txt", "w");

    printf("hola\n");

    fprintf(stdout, "hola\n");
    fprintf(tubo, "hola\n");

    fclose(tubo);

    return EXIT_SUCCESS;
}

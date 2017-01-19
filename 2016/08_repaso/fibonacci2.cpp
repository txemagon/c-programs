#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(){

    int hoy, ayer = 1, antes = 1;

    printf("%i %i ", antes, ayer);

    for (int i=0; i<N; i++){
        hoy = ayer + antes;
        printf("%i ", hoy);

        antes = ayer;
        ayer = hoy;
    }

    return EXIT_SUCCESS;
}

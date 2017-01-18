#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(int argc, char *argv[]){
    char cagadas[N];
    char letra;
    int errores = 0;

    do {
        printf("letra: ");
        scanf(" %c", &letra) ;
        cagadas[errores++] = letra;

        for (int i=0; i<errores; i++)
            printf("%c ", cagadas[i]);
        printf("\n");

    } while(errores<N);

    return EXIT_SUCCESS;
}

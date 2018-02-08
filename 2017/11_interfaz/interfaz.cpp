#include <stdio.h>
#include <stdlib.h>

#include "comun.h"
#include "interfaz.h"
void header(){
    system("clear");
    system("toilet -fpagga 'MATRIX'");
}

void ver(int a[M][N]){
    printf("\n");
    printf(ANSI_COLOR_RED);
    for (int f=0; f<M; f++){
        for (int c=0; c<N; c++)
            printf("%4i", a[f][c]);
        printf("\n");
    }
    printf(ANSI_COLOR_RESET);
        printf("\n\n");
}

void valor(int *donde){
    printf("Valor: ");
    scanf(" %i", donde);
}

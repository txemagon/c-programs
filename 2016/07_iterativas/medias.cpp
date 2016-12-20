#include <stdio.h>
#include <stdlib.h>

#define DATOS_INSUFICIENTES 2

int main(int argc, char *argv[]){

    int nota = 0,
        total = 0,
        n_alumnos = 0;
    double media = 0;

    system("toilet --gay -fpagga MEDIAS");
    printf("Mete una nota negativa para terminar.\n");

    do{
        printf("Nota: ");
        scanf(" %i", &nota);
        if (nota >= 0){
            total += nota;
            n_alumnos++;
        }
    } while(nota >= 0);

    if ( n_alumnos == 0 ){
        printf("Riau, riau. Con una media y un calcetin.\n");
        return DATOS_INSUFICIENTES;
    }

    media = (double) total / n_alumnos;

    printf("Media: %.2lf\n", media);

    return EXIT_SUCCESS;
}

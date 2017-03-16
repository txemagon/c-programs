#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    double *nota = NULL; // Los punteros sin inicializar se dicen: salvajes ( y tienen más peligro que un fristro de la pradera)
    double buffer;
    int n_alumnos = 0;

    printf("Numeros negativos para terminar.\n");

    /* Lo que se pedía (realloc) */
    do{
        printf("Nota: ");
        scanf(" %lf", &buffer);
        if (buffer >= 0){
            nota = (double *) realloc(nota, ++n_alumnos * sizeof(double));
            nota[n_alumnos-1] = buffer;
        }
    }while(buffer >= 0);
    /* Fin de lo que se pedía */

    /* Calculamos la media */
    double media = 0;     // Esto es C++. En c, arriba todas las declaraciones.
    for (int desplazamiento=0;
            desplazamiento<n_alumnos;
            desplazamiento++)
        media += nota[desplazamiento]; // Equivale a: media += *(nota + desplazamiento)
    media /= n_alumnos;
    printf("Media: %.2lf\n", media);


    /* Vemos todas las notas */
    for (int d=0; d<n_alumnos; d++)
        printf("%7.2lf", nota[d]);
    printf("\n");

    free(nota); // No se puede uno olvidar esto.

    return EXIT_SUCCESS;
}

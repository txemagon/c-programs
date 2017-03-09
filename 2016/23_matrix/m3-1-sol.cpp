#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define M 3
#define K 2
#define N 4


/* Amigo de la noche,
 * tú que llegas hasta aquí
 * en busca de soluciones
 * haz el mandamiento dos.
 * Sigue mis instrucciones
 * En el, yo te instruí.
 * Evita algoritmos rococós.
 * Saca tus propias abstracciones
 * Y mientras tu trabajo sea baladí,
 * No me guardes reproche.
 *
 * Vamos, que si hacéis las cosas en papel, sabréis
 * cómo cambian los límites de los bucles.
 *
 */

int main(int argc, char *argv[]){

    int A[M][K] = { {1, 2}, {2, -3}, { -4, 3 } },
        B[K][N] = { {7, 2, 5, -6}, {1,  2, 4, -8} },
        C[M][N];

    bzero(C, sizeof(C));
    for (int f=0; f<M; f++)
        for (int c=0; c<N; c++)
            for (int k=0; k<K; k++)
                C[f][c] += A[f][k] * B[k][c];
    /*
    Limpiar toda la matriz C de resultado
    Recorrer todas las filas
        Recorrer cada columna
           Para cada valor de k
              cij += aik * bkj
*/

    for (int f=0; f<M; f++){
        for (int c=0; c<N; c++)
            printf("%7i", C[f][c]);
        printf("\n");
    }

    return EXIT_SUCCESS;
}

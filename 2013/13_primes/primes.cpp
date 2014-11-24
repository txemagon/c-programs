#include <stdio.h>
#include <stdlib.h>

#define N 70

int main(int argc, char *argv[]){

    int primo[N];
    int primo_siguiente = 1; // Indica el numero de celda en el
                             //que guardar el siguiente primo.

    primo[0] = 2;

    /**
     * Mientras no tenga 70 primos 
     *     Cojo un candidato_a_primo
     *     Mientras no encuentre un divisor para el candidato a primo
     *     sigo diviendo haste el 2 (en la celda 0)
     *
     *     Si he llegado hasta el dos y ninguno lo ha dividido
     *     entonces lo añado como primo_siguiente
     */ 

    /*
     * +---+---+---+
     * | 2 | 3 | 5 |
     * +---+---+---+
     *   0   1   2
     *
     *   primo_siguiente => 3
     */

    for(int candidato = 3; primo_siguiente < N; candidato++){ 
        bool puede_ser_primo = true;
        
        for (int posicion_primo=0; 
                puede_ser_primo && posicion_primo < primo_siguiente; 
                posicion_primo++)
            if (candidato % primo[posicion_primo] == 0)
                puede_ser_primo = false;
        
        if (puede_ser_primo)
            primo[primo_siguiente++] = candidato;
        
    }

    for(int i=0; i<N; i++)
        printf("%i ", primo[i]);
    printf("\n");

    return EXIT_SUCCESS;
}

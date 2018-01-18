#include <stdio.h>
#include <stdlib.h>

#define ES_IMPAR(f,c) (( (f) + (c)) % 2)

void pinta_cuadrado(int lado){
    for (int fila_cuad=0; fila_cuad<lado; fila_cuad++)
        for (int fila=0; fila<lado; fila++){
            for (int col_cuad=0; col_cuad<lado; col_cuad++)
                for (int col=0; col<lado; col++)
                    printf("%c",
                            ES_IMPAR(fila_cuad, col_cuad) ?
                            ' ' : '*'
                            );
            printf("\n");
        }


}

int main(){
    pinta_cuadrado(4);
    return EXIT_SUCCESS;
}

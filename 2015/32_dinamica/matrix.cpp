#include <stdio.h>
#include <stdlib.h>

void set(int *matriz, int fila, int col, int dato){

}

int get(int *matriz, int fila, int col){
   int dato;

   return dato;
}

int main(int argc, const char **argv){

    int *a = NULL;
    int filas, col; // Preguntar al usuario.

    // reservar espacio para a


    for (int f=0; f<filas; f++)
        for (int c=0; c<col; c++){
            printf("(%i, %i)", f+1, c+1);
            scanf(" %i", &buffer);
            set(a, f, c, buffer);
        }


    // Imprimir la matriz usando get

    // Liberar espacio para a

    return EXIT_SUCCESS;
}

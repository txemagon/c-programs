#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct TCoordenada{
    int x;
    int y;
} Punto;

typedef Punto Velocidad;

void mover(Velocidad v, Punto anillo[N]){
    for (int i=N-1; i>0; i--)
	; // Posicion de un anillo = posicion del anillo anterior.
    ; // Posición del primer anillo (cabeza) = a la que tenía más la velocidad.
}

void imprimir(Punto anillo[N]){
    // Imprimir las coordenadas.
}

int main(int argc, char *argv[]) {

    Punto serpiente[N];
    Velocidad v_cabeza = {0, 1};

    imprimir_coordenadas(serpiente);
    mover_con(v_cabeza, serpiente);
    imprimir_coordenadas(serpiente);



    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct TCoordenada{
    int x;
    int y;
} Punto;

typedef Punto Velocidad;

void mover_con(Velocidad v, Punto anillo[N]){
    for (int i=N-1; i>0; i--){
	anillo[i].x = anillo[i-1].x;
	anillo[i].y = anillo[i-1].y;
    }

    anillo[0].x = anillo[0].x + v.x;
    anillo[0].y = anillo[0].y + v.y;
}

void imprimir_coordenadas(Punto anillo[N]){
    printf( "Coordenadas: \n"
	    "============\n\n");
    for (int i=1; i<N; i++)
	printf("%3i | %3i\n", anillo[i].x, anillo[i].y);
    printf("\n\n");
}

void inicializar(Punto anillo[N]){
    anillo[0].x = 10;
    anillo[0].y = 17;

    for (int i=1; i<N; i++){
	anillo[i].x = anillo[i-1].x + 1;
	anillo[i].y = anillo[i-1].y;
    }
}

int main(int argc, char *argv[]) {

    Punto serpiente[N];
    Velocidad v_cabeza = {1, 0};
    
    inicializar(serpiente);
    imprimir_coordenadas(serpiente);
    mover_con(v_cabeza, serpiente);
    imprimir_coordenadas(serpiente);

    return EXIT_SUCCESS;
}

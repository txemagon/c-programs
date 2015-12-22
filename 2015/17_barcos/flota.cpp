#include <stdio.h>
#include <stdlib.h>

#define DIM 10

#define J1 0
#define J2 1

bool tablero[2][DIM][DIM];

void rellena(bool tablero[DIM][DIM]){

}

bool haya_barcos(bool tablero[DIM][DIM]) {
    bool barcos = false;

    for (int fila=0; fila<DIM; fila++)
        for (int col=0; col<DIM; col++)
            if (tablero[fila][col])
                barcos = true;

    return barcos;
}

int el_que_no_tiene(int turno){
    return (turno + 1) % 2;
}

void pedir_un_disparo(int turno, int *fila, int *col) {
    printf("Disparo Jugador %i\n", turno + 1);
    printf("Fila: ");
    scanf(" %i", fila);
    printf("Columna: ");
    scanf(" %i", col);
}

bool hay_impacto(int tablero[DIM][DIM], int fila, int col) {
    return !!tablero[fila][col];
}

void eliminar_los_barcos(int tablero[DIM][DIM], int fila, int col){
    tablero[fila][col] = 0;
}

void rellena(int tablero[DIM][DIM]) {
    for (int fila=0; fila<DIM; fila++)
        for (int col=0; col<DIM; col++)
            tablero[fila][col] = 0;

    tablero[2][3] = 1;
}

int main(int argc, const char **argv){

    int turno = J1;
    int disparo_f, disparo_c;

    for (int jugador=0; jugador<2; jugador++)
        rellena(tablero[jugador]);

    while(haya_barcos(tablero[J1]) || haya_barcos(tablero[J2])){
        turno++;
        turno %= 2;
        pedir_un_disparo(turno, &disparo_f, &disparo_c);
        if ( hay_impacto(
                tablero[el_que_no_tiene(turno)],
                disparo_f, disparo_c)
           )

        eliminar_los_barcos(
                tablero[el_que_no_tiene(turno)],
                disparo_f,
                disparo_c );


    }

    printf("Ha ganado el jugador %i\n", turno);

    return EXIT_SUCCESS;
}

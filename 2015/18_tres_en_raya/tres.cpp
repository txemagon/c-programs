#include <stdio.h>
#include <stdlib.h>

void pedir(char tablero[3][3], char marca){
    int x, y;

    printf(" Jugador %c\n", marca);

    printf("x: ");
    scanf(" %i", &x);

    printf("y: ");
    scanf(" %i", &y);

    tablero[y][x] = marca;
}

void pintar(char tablero[3][3]){
    for (int f=0; f<3; f++){
        for (int c=0; c<3; c++)
            printf("%c ", tablero[f][c]);
        printf("\n");
    }
}

int main(int argc, const char **argv){

    char tablero[3][3];
    /* Borrar el tablero */
    for (int f=0; f<3; f++)
        for (int c=0; c<3; c++)
            tablero[f][c] = ' ';

    for (int vez=0; vez<3; vez++){
        pedir(tablero, 'x');
        pedir(tablero, 'o');
        pintar(tablero);
    }

    return EXIT_SUCCESS;
}

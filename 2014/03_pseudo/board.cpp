#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int tablero = 0xC937;
    int barco;
    int posicion = 0;

    while (tablero != 0){
	posicion++;
	barco = tablero % 2;
	if (barco != 0)
	    printf("X");
	else
	    printf("~");
	if (posicion % 4 == 0)
	    printf("\n");
	tablero /= 2;
    }
    printf("\n");

    return EXIT_SUCCESS;
}

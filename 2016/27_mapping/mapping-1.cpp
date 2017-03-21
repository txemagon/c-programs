#include <stdio.h>
#include <stdlib.h>

typedef struct TCoordenada {
    int x;
    int y;
} Coordenada;

Coordenada a2s(Coordenada a_pos){
    Coordenada s_pos;
    s_pos.x = 2 * a_pos.x;
    s_pos.y = 2 * a_pos.y;

    return s_pos;
}

int main(int argc, char *argv[]){

    Coordenada posicion = { 2, 3 },
                       buffer;


    buffer = a2s(posicion);
    printf("( %i, %i ) = > ( %i, %i )\n",
            posicion.x, posicion.y,
            buffer.x, buffer.y);

    return EXIT_SUCCESS;
}

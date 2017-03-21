#include <stdio.h>
#include <stdlib.h>

struct TCoordenada {
    int x;
    int y;
};

struct TCoordenada a2s(struct TCoordenada a_pos){
    struct TCoordenada s_pos;
    s_pos.x = 2 * a_pos.x;
    s_pos.y = 2 * a_pos.y;

    return s_pos;
}

int main(int argc, char *argv[]){

    struct TCoordenada posicion = { 2, 3 },
                       buffer;


    buffer = a2s(posicion);
    printf("( %i, %i ) = > ( %i, %i )\n",
            posicion.x, posicion.y,
            buffer.x, buffer.y);

    return EXIT_SUCCESS;
}

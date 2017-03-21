#include <stdio.h>
#include <stdlib.h>

struct TCoordenada {
    int x;
    int y;
};

struct TMatriz {
    int f;
    int c;
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
    struct TMatriz     *mat;


    buffer = a2s(posicion);
    mat = (struct TMatriz *) &buffer;
    printf("( %i, %i ) = > ( %i, %i )\n",
            posicion.x, posicion.y,
            mat->c, mat->f);

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

struct TCoordenada {
    int x;
    int y;
};

struct TMatriz{
    int c;
    int f;
};

union Coordenada{
    struct TCoordenada s;
    struct TMatriz a;
};

union Coordenada a2s(union Coordenada a_pos){
    union Coordenada s_pos;
    s_pos.s.x = 2 * a_pos.a.c;
    s_pos.s.y = 2 * a_pos.a.f;

    return s_pos;
}

int main(int argc, char *argv[]){

    union Coordenada matriz = { 2, 3 },
          rejilla;


    rejilla = a2s( matriz);
    printf("( %i, %i ) = > ( %i, %i )\n",
            matriz.a.f, matriz.a.c,
            rejilla.s.x, rejilla.s.y);

    return EXIT_SUCCESS;
}

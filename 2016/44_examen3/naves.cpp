#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX   0x10
#define MUNDO 0x100
#define LETRAS ('z' - 'a' + 1)

struct Coordenada {
    int x;
    int y;
};

struct TNave {
    int vida; /* 0-100 */
    struct Coordenada p;
    char avatar;
};

void crear_nave(struct TNave *nave){
   nave->vida = 100;
   nave->p.x = rand() % MUNDO;
   nave->p.y = rand() % MUNDO;
   nave->avatar = rand() % LETRAS + 'A';
}

struct TNave mover_nave(struct TNave nave){
    nave.p.x++;
    nave.p.y++;

    return nave;
}

void pintar_naves(struct TNave nave[]) {

    for (int i=0; i<MAX; i++)
        printf("[%c] => x: %i \t y: %i \t vida: %i\n",
                nave[i].avatar, nave[i].p.x, (nave+i)->p.y, nave[i].vida);
}

int main(int argc, char *argv[]){

    struct TNave nave[MAX];

    srand(time(NULL));

    for (int i=0; i<MAX; i++)
        crear_nave(&nave[i]);

    do {
        system("clear");
        for (int i=0; i<MAX; i++)
            nave[i] = mover_nave(nave[i]);
        pintar_naves(nave);
        getchar();
    } while(1);


    return EXIT_SUCCESS;
}

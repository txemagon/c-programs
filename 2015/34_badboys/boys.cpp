#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>
#include "definiciones.h"
#include "pila.h"

void mover_buenos(){

}

void mover_malos(){

}

void update_physics(struct Personaje *movil){
    movil->v.x += movil->a.x;
    movil->v.y += movil->a.y;
    movil->r.x += movil->v.x;
    movil->r.y += movil->v.y;
}

void init(struct Personaje *movil){
    bzero(movil, sizeof(struct Personaje));
   // movil->p_mover = mover_buenos;
    movil->r.x = drand48() * X_MAX;
    movil->r.y = drand48() * Y_MAX;
    movil->v.x = drand48() * VMAX;
    movil->v.y = drand48() * VMAX;
    movil->a.x = drand48() * AMAX;
    movil->a.y = drand48() * AMAX;

}

int main(int argc, const char **argv){


    struct Pila personaje;
    char tipo;
    struct Personaje *buffer;

    srand48(time(NULL));

    printf("Bueno o malo: (b/m) ");
    scanf(" %c", &tipo);

    buffer = (struct Personaje *) malloc(sizeof(struct Personaje));
    init(buffer);
    buffer->p_mover = mover_buenos;
    while(1){
        for(int i=0; i<MAX; i++)
            update_physics(&prota[i]);

    }

    return EXIT_SUCCESS;
}

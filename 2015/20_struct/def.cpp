#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/* Como se define e inicializa una estructura */

/* Declaración General */
struct TNave {
    int vida;
    char cuerpo;
};

/* Declarando variables globales */
struct TAlgo {
    int vida;
    char cuerpo;
} nave1, nave2;


/* Estructura Anónima */
struct {
    int vida;
    char cuerpo;
} nave3, nave4;

/* Alias de una estructura anónima */
typedef struct {
    int vida;
    char cuerpo;
} Nave;

/* Alias */
typedef struct TNave Nave;

int main(int argc, const char **argv){

    struct TNave bueno = { 3, 'O' };
    struct TNave malo;

    struct TNave nave_mala[100];

    Nave otra;

    malo.vida = 5;
    malo.cuerpo = 'A';

    memset(&bueno, 0, sizeof(struct TNave));
    bzero(&bueno, sizeof(bueno));

    return EXIT_SUCCESS;
}

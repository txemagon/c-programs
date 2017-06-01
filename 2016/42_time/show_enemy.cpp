#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

#define N 100
#define NUM_LETRAS ('Z' - 'A' + 1)

#define CREAT 3L
/* Ahora no hay naves */

struct Nave
{
    int id;
    char dibujo;
    int vida;
};


struct Pila
{
    int cima;
    struct Nave nave[N];
};

void
borra(int id, struct Pila *pila)
{
    for (int i=0; i<pila->cima; i++)
        if (pila->nave[i].id == id)
            memmove(&pila->nave[i], &pila->nave[i+1], (--pila->cima - i) * sizeof(struct Nave));

}

int
preguntar_borrar()
{
    int cual;
    printf("\n¿Cuál, ne Pas cual, quieres borrar? ");
    scanf(" %i", &cual);

    return cual;
}

void
crear_nueva(struct Pila *pila)
{
    static int creadas = 0;
    static clock_t ultima_creacion = clock(); // static conserva el valor entre llamadas;
    clock_t ahora = clock();

    if ((double) (ahora - ultima_creacion) / CLOCKS_PER_SEC * 1000 < CREAT)
        return;

    ultima_creacion = ahora;
    if (pila->cima >= N)
    {
        borra(preguntar_borrar(), pila);
        return;  // retornar es terminar. Lo que no hace es retornar algo.
    }
    pila->nave[pila->cima].id = ++creadas;
    pila->nave[pila->cima].dibujo = rand() % NUM_LETRAS /* Esto da entre 0 y 26*/ + 'A' /* La 'A' es el 67, 'B' es el 68 and so on... */;
    pila->nave[pila->cima++].vida = 100; /* por ejemplo */
}

void
mostrar(struct Pila pila)
{
    system("clear");
    for (int i=0; i<pila.cima; i++)
        printf("- (%i:%c) ", pila.nave[i].id, pila.nave[i].dibujo);
    printf("\n");
}

int
main(int argc, const char *argv[])
{
    struct Pila pila;
    pila.cima = 0;
    /* Bucle de juego */
    do
    {
        usleep(100000);
        crear_nueva(&pila); // el paso es por referencia porque hay que modificar la cima.
        mostrar(pila); // Aquí no hay que modificar nada.
    } while (1);

    return EXIT_SUCCESS;
}

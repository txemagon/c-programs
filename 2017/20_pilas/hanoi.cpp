#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>
#include <ncurses.h>

#define V 20
#define M 20
#define E 20

#define N 0x100

#define NDEBUG
#ifndef NDEBUG
#define DEBUG(...) printf(__VA_ARGS__);
#else
#define DEBUG(...)
#endif

typedef struct {
    int data[N];
    int cima;
} Pila;

enum {I, C, D, DI};

void push(int dato, Pila *cual_pila) {
    DEBUG("->%5i\n", dato);
    cual_pila->data[cual_pila->cima] = dato;
    cual_pila->cima++;
}

int pop(Pila *cual_pila){
    cual_pila->cima--;
    DEBUG("<-%5i\n", cual_pila->data[cual_pila->cima]);
    return cual_pila->data[cual_pila->cima];
}

int peep(Pila pila, int f){
    return f<pila.cima ? pila.data[f] : 0;
}

void pintar(Pila torre[DI]){
    char g;
    clear();
    for (int f=10; f>=0; f--)
        for (int t=0; t<DI; t++)
            for (int c=-7; c<7; c++){
                g = '_';
                if (peep(torre[t], f) < abs(c))
                    g = ' ';
                if (c == 0)
                    g = '|';
                mvprintw(V - f, M + t * E + c + 7, "%c", g);
            }
}

int main(){
    Pila torre[DI];
    int origen, destino;

    /* Inicializar */
    initscr();
    bzero(torre, sizeof(torre));

    for (int r=5; r>0; r--)
        push(r, &torre[I]);


    while(1){
        pintar(torre);
        mvprintw(V+3, M, "Origen, Destino: ");
        refresh();
        scanw(" %i, %i", &origen, &destino);
        origen--, destino--;
        push(pop(&torre[origen]), &torre[destino]);
    }

    endwin();
    return EXIT_SUCCESS;
}

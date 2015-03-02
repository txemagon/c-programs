#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "print.h"

#define NPILAS 3

Stack *p[NPILAS];
WINDOW *win[NPILAS];

void pinta(){
    for (int v=0; v<NPILAS; v++){
	wclear(win[v]);
	box(win[v], 0 , 0);		
	for (int i=0; i<p[v]->summit; i++)
	    print_row(win[v], i, center(W, N), p[v]->data[i]);
    }
    getch();
}

void traslada( 
	int cantidad, 
	int origen, 
	int destino) {
    int intermedio = 0 + 1 + 2 - origen - destino;
    if (cantidad == 1){
	push( pop(p[origen]), p[destino]);
	return;
    }
    traslada(cantidad - 1, origen, intermedio);
    pinta();
    push( pop(p[origen]), p[destino] );
    pinta();
    traslada(cantidad - 1, intermedio, destino);
    
}


int main(int argc, char *argv[]) {


    init_ncurses();
    refresh();

    for (int i=0; i<NPILAS; i++)
      win[i] = create_newwin(H, W, 1, 1 + i * W);

    for (int i=0; i<NPILAS; i++)
	p[i] = create_stack(N);

    /* Inicializar */
    for (int i=N-1; i>=0; i--)
	push(i+1, p[0]);

    traslada(N, 0, 2);
   
    for (int i=0; i<NPILAS; i++)
	destroy_stack(p[i]);

    for (int i=0; i<NPILAS; i++)
	destroy_win(win[i]);
    end_ncurses();

    return EXIT_SUCCESS;
}

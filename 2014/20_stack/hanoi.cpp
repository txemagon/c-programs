#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "print.h"

#define NPILAS 3

void pinta(Stack *p[NPILAS], WINDOW *win[NPILAS]){
    for (int v=0; v<NPILAS; v++){
	wclear(win[v]);
	box(win[v], 0 , 0);		
	for (int i=0; i<p[v]->summit; i++)
	    print_row(win[v], i, center(W, N), p[v]->data[i]);
    }
}

int main(int argc, char *argv[]) {


    init_ncurses();
    refresh();
    WINDOW *win[NPILAS];
    for (int i=0; i<NPILAS; i++)
      win[i] = create_newwin(H, W, 1, 1 + i * W);

    Stack *p[NPILAS];
    for (int i=0; i<NPILAS; i++)
	p[i] = create_stack(N);

    /* Inicializar */
    for (int i=N-1; i>=0; i--)
	push(i+1, p[0]);


    pinta(p, win);
    getch();
    push( pop(p[0]), p[1]);
    pinta(p, win);
    getch();
   
    for (int i=0; i<NPILAS; i++)
	destroy_stack(p[i]);

    for (int i=0; i<NPILAS; i++)
	destroy_win(win[i]);
    end_ncurses();

    return EXIT_SUCCESS;
}

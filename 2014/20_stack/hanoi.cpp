#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "print.h"

#define N 10
#define W 21
#define H 20


int main(int argc, char *argv[]) {

    init_ncurses();
    WINDOW *win = create_newwin(H, W, 10, 5);

    Stack *p = create_stack(N);

    for (int i=0; i<N; i++)
	push(i+1, p);


    for (int i=0; i<N; i++)
	print_row(win, i, 10, p->data[i]);
    getch();

    
    destroy_stack(p);

    destroy_win(win);
    end_ncurses();

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "print.h"

int main(int argc, char *argv[]) {


    init_ncurses();
    refresh();
    WINDOW *win = create_newwin(H, W, 1, 1);

    Stack *p = create_stack(N);

    for (int i=0; i<N; i++)
	push(i+1, p);


    for (int i=0; i<N; i++)
	print_row(win, i, center(W, N), p->data[i]);
    getch();

    
    destroy_stack(p);

    destroy_win(win);
    end_ncurses();

    return EXIT_SUCCESS;
}

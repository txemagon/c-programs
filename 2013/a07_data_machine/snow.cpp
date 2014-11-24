#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ncurses.h>

#define N 80

struct TFlake{
    double x;
    double y;
    double v;
};

int main(int argc, char *argv[]){

    struct TFlake flake[N];
    const char image[] = {'.', 'o', 'O'};

    initscr();
    if (!has_colors()){
        endwin();
        fprintf(stderr, "Colors not supported.\n");
        return EXIT_FAILURE;
    }

    curs_set(0);
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_YELLOW, COLOR_BLACK);

    srand(time(NULL));

    /* Initialization */
    for (int i=0; i<N; i++){
        flake[i].y = rand() % LINES; 
        flake[i].x = rand() % COLS;
        flake[i].v = rand() % 3 + 1;
    }

    while(1){
        /* Update physics */
        for (int i=0; i<N; i++){
            flake[i].y += flake[i].v;
            flake[i].x += rand() % 3 - 1;
        }
       
        /* Display data */
        clear();
        for (int i=0; i<N; i++){
            attron(COLOR_PAIR( (int) flake[i].v));
            mvaddch( 
                    (int) flake[i].y % LINES, 
                    (int) flake[i].x % COLS, 
                    image[ (int) flake[i].v - 1] );
            attroff(COLOR_PAIR( (int) flake[i].v));
        }
        refresh();

        usleep(130000);
    }

    curs_set(1);
    endwin();
    return EXIT_SUCCESS;
}

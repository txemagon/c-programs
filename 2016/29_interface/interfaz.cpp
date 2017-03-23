#include <unistd.h>
#include <ncurses.h>
#include "interfaz.h"

#define XBASE 15
#define YBASE 5

#define CWIDTH 2
#define HSPACE 1
#define VSPACE 1

#define STR(x) #x
#define FORMAT_STR(w) "%" STR(w) "i"


void graf_on() { initscr(); }
void graf_off(){ endwin();  }

void pintar_fila(int f, int w, int cini, int cmed, int cfin, bool space){
        int vl = 1 + 2 * VSPACE + 1;
        mvaddch(YBASE+vl*f, XBASE, cini);
        for(int c=0; c<w-1; c++){
            for (int r=0; r<HSPACE*2+CWIDTH; r++)
                addch(ACS_HLINE);
            addch(cmed);
        }
        for (int r=0; r<HSPACE*2+CWIDTH; r++)
            addch(ACS_HLINE);
        addch(cfin);

        if (space){
            for(int rv=0; rv<1+VSPACE*2; rv++){
                mvaddch(YBASE+vl*f+1+rv, XBASE, ACS_VLINE);
                for(int c=0; c<w; c++){
                    for (int r=0; r<HSPACE*2+CWIDTH; r++)
                        addch(' ');
                    addch(ACS_VLINE);
                }
            }
        }
}

void grid(int w, int h){

    /* Primera fila */
    pintar_fila(0, w, ACS_ULCORNER, ACS_TTEE, ACS_URCORNER, true);

    /* Resto de filas */
    for (int f=1; f<h; f++)
        pintar_fila(f, w, ACS_LTEE, ACS_PLUS, ACS_RTEE, true);

    /* Última fila */
    pintar_fila(N, w, ACS_LLCORNER, ACS_BTEE, ACS_LRCORNER, false);

}


void pon_numero(int fila, int col, int n){
    mvprintw(YBASE + 1 + VSPACE + fila * (2 + 2 * VSPACE),
             XBASE + 1 + HSPACE + col  * (1 + 2 * HSPACE + CWIDTH),
             FORMAT_STR(CWIDTH), n);
}

void muestra(int matriz[N][N]){
    grid(N, N);
    for (int f=0; f<N; f++)
        for (int c=0; c<N; c++)
            pon_numero(f, c, matriz[f][c]);
    refresh();
    usleep(4000000);
}



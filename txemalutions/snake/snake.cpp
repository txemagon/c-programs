#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <ncurses.h>

#define N 0x10

struct TCoordenada{
    double x;
    double y;
};

struct TAnillo{ 
    double x; 
    double y;
};  

void rellena_con_mierda_la_piii_serpiente(struct TAnillo coordenada[N]){

    for (int i=0; i<N; i++){
        coordenada[i].x = 10 + i;
        coordenada[i].y = 10;
    }
}

void muestra(struct TAnillo coordenada[N]){
    clear();
    for (int i=0; i<N; i++)
        mvprintw( coordenada[i].y, coordenada[i].x, "*");
    refresh();
}

void mover(struct TCoordenada incremento, struct TAnillo coordenada[N]){
    
    for (int i=N-1; i>0; i--){
        coordenada[i].x = coordenada[i-1].x;
        coordenada[i].y = coordenada[i-1].y;
    }
    coordenada[0].x += incremento.x;
    coordenada[0].y += incremento.y;
}

int main(int argc, char *argv[]){

    struct TAnillo serpiente[N];
    struct TCoordenada movimiento = {0, -1};
    int user_input;

    rellena_con_mierda_la_piii_serpiente(serpiente);

    initscr();             // Crea una matriz para pintar
    halfdelay(3);          // Hace que getch espere 3 decimas de segundo
    keypad(stdscr, TRUE);  // Vale para leer las flechas
    noecho();              // Para que no se vea el caracter pulsado.
    curs_set(0);           // No se ve el cursor.
    while(1){
        user_input = getch();
        switch(tolower(user_input)){
            case 'q':
            case KEY_UP:
                movimiento.x = 0;
                movimiento.y = -1;
                break;
            case 'a':
            case KEY_DOWN:
                movimiento.x = 0;
                movimiento.y = 1;
                break;
            case 'o':
            case KEY_LEFT:
                movimiento.x = -1;
                movimiento.y = 0;
                break;
            case 'p':
            case KEY_RIGHT:
                movimiento.x = 1;
                movimiento.y = 0;
                break;

        }
        mover( movimiento, serpiente);
        muestra(serpiente);
    }
    getchar();
    endwin();              // Libera la matriz.

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define DELTA_T 0.1

struct TCoordenada2D{
   double x;
   double y;
};

struct TMovil{
    struct TCoordenada2D posicion;
    struct TCoordenada2D velocidad;
    struct TCoordenada2D aceleracion;
};

void muestra(struct TMovil datos){
    printf("Pos: (%.2lf, %.2lf)\t", datos.posicion.x, datos.posicion.y);
    printf("Vel: (%.2lf, %.2lf)\t", datos.velocidad.x, datos.velocidad.y);
    printf("Ace: (%.2lf, %.2lf)\n", datos.aceleracion.x, datos.aceleracion.y);
}

void pintar(struct TMovil movil){
   mvprintw(20 - movil.posicion.y, movil.posicion.x, "O");
   refresh();
}

int main(int argc, char *argv[]){

    struct TMovil proyectil = {
       {10, 0},
       {0, 0},
       {0, -10}
    };

    /* Preguntar la velocidad inicialmente */
   printf("Velocidad Inicial (vx,vy): ");
   scanf(" %lf,%lf", 
         &proyectil.velocidad.x, 
         &proyectil.velocidad.y);

   initscr();
   clear();

   /* Cada segundo saber lo que ha variado la velocidad y la posicion */
   while(proyectil.posicion.y >= 0){
       pintar(proyectil);

       proyectil.velocidad.x += proyectil.aceleracion.x * DELTA_T;
       proyectil.velocidad.y += proyectil.aceleracion.y * DELTA_T;
       proyectil.posicion.x  += proyectil.velocidad.x   * DELTA_T;
       proyectil.posicion.y  += proyectil.velocidad.y   * DELTA_T;
   }

   getch();
   endwin();

    return EXIT_SUCCESS;
}

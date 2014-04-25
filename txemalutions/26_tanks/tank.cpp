#include <stdio.h>
#include <stdlib.h>

struct TCoordenada2D{
   double x;
   double y;
};


void muestra(struct TCoordenada2D datos){
    printf("(%.2lf, %.2lf)\n", datos.x, datos.y);
}

int main(int argc, char *argv[]){

    struct TCoordenada2D posicion = { 10, 0}, 
                         velocidad, 
                         aceleracion = {0, -10};

    /* Preguntar la velocidad inicialmente */
   printf("Velocidad Inicial (vx,vy): ");
   scanf(" (%lf,%lf)", &velocidad.x, &velocidad.y);

   /* Cada segundo saber lo que ha variado la velocidad y la posicion */
   while(posicion.y >= 0){
       velocidad.x += aceleracion.x;
       velocidad.y += aceleracion.y;
       posicion.x += velocidad.x;
       posicion.y += velocidad.y;
       muestra(posicion);
   }

    return EXIT_SUCCESS;
}

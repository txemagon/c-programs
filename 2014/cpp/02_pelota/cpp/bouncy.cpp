#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <allegro5/allegro.h>

#include "pelota.h"

#define N 20


int
main (int argc, char *argv[])
{

  ALLEGRO_DISPLAY *display = NULL;

  Pelota pelota[N];
  srand (time (NULL));

  if (!al_init()){
      fprintf(stderr, "Me he quedado sin allegro");
      return -1;
  }

  display = al_create_display(640, 480);
  if (!display){
      fprintf(stderr, "Me he quedado sin display.");
      return -1;
  }

  while (0)
    {				/* Buzz Lightyear */
      /* Actualizar las coordenadas de la pelota */
      for (int i = 0; i < N; i++)
	pelota[i].actualizate ();

      /* Pintar */
      for (int i = 0; i < N; i++)
        ; 

      usleep (100000);
    }

  al_clear_to_color(al_map_rgb(0,66,0));
  al_flip_display();

  al_rest(10.0);

  al_destroy_display(display);

  return EXIT_SUCCESS;
}

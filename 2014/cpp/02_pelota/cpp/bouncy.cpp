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
  ALLEGRO_EVENT_QUEUE *event_queue = NULL;

  Pelota pelota[N];

  srand (time (NULL));

  if (!al_init ())
    {
      fprintf (stderr, "Me he quedado sin allegro");
      return -1;
    }

  display = al_create_display (1024, 768);
  if (!display)
    {
      fprintf (stderr, "Me he quedado sin display.");
      return -1;
    }

  event_queue = al_create_event_queue ();
  if (!event_queue)
    {
      fprintf (stderr, "No se ha creado la cola de eventos.");
      return -1;
    }

  al_register_event_source (event_queue,
			    al_get_display_event_source (display));

  al_clear_to_color (al_map_rgb (0, 66, 0));
  al_flip_display ();


  while (1)
    {				/* Buzz Lightyear */
      ALLEGRO_EVENT ev;
      ALLEGRO_TIMEOUT timeout;
      al_init_timeout (&timeout, 0.06);

      bool get_event = al_wait_for_event_until (event_queue, &ev, &timeout);

      if (get_event && ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
	break;

      /* Actualizar las coordenadas de la pelota */
      for (int i = 0; i < N; i++)
	pelota[i].actualizate ();

      /* Pintar */
      for (int i = 0; i < N; i++)
	;


      al_clear_to_color (al_map_rgb (0, 66, 0));
      al_flip_display ();

    }


  al_destroy_display (display);
  al_destroy_event_queue (event_queue);

  return EXIT_SUCCESS;
}

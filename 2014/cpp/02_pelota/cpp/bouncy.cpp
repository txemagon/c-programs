#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "mi_allegro.h"
#include "pelota.h"

#define N 120


int
main (int argc, char **argv)
{


  Pelota pelota[N];

  srand (time (NULL));
  iniciar_allegro ();
  
  for (int i=0; i<N; i++)
      pelota[i].set_dibujo (bm);

  while (1)
    {				/* Buzz Lightyear */
      ALLEGRO_EVENT ev;
      ALLEGRO_TIMEOUT timeout;
      al_init_timeout (&timeout, 0.06);

      bool get_event = al_wait_for_event_until (event_queue, &ev, &timeout);

      if (get_event)
	{
	  if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
	    break;
	  if (ev.type == ALLEGRO_EVENT_TIMER)
	    redraw = true;
	}

      /* Actualizar las coordenadas de la pelota */
      for (int i = 0; i < N; i++)
	pelota[i].actualizate ();


      if (redraw && al_is_event_queue_empty (event_queue))
	{
	  al_clear_to_color (al_map_rgb (0, 0, 0));
	  for (int i=0; i<N; i++)
	      al_draw_bitmap (pelota[i].get_dibujo (), pelota[i].get_x (),
			  pelota[i].get_y (), 0);
	  al_flip_display ();
	  redraw = false;
	}

    }

  destruir_allegro ();

  return 0;
}

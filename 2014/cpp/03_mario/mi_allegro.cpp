#include "mi_allegro.h"

ALLEGRO_EVENT_QUEUE *event_queue;
ALLEGRO_DISPLAY *display;
ALLEGRO_TIMER *timer;
bool redraw;


void
iniciar_allegro ()
{
  event_queue = NULL;
  display = NULL;
  timer = NULL;
  redraw = true;



  if (!al_init ())
    {
      al_show_native_message_box (display, "Error", "Error",
				  "Me he quedado sin allegro", NULL,
				  ALLEGRO_MESSAGEBOX_ERROR);
      exit (EXIT_FAILURE);
    }

  if (!al_init_image_addon ())
    {
      al_show_native_message_box (display, "Error", "Error",
				  "No se ha podido cargar el addon de imagnes.",
				  NULL, ALLEGRO_MESSAGEBOX_ERROR);
      exit (EXIT_FAILURE);
    }

  if (!al_install_keyboard() )
  {
      al_show_native_message_box (display, "Error", "Error",
				  "No se ha podido inicializar el teclado.",
				  NULL, ALLEGRO_MESSAGEBOX_ERROR);
      exit (EXIT_FAILURE);

  }

  timer = al_create_timer (1.0 / FPS);
  if (!timer)
    {
      al_show_native_message_box (display, "Error", "Error",
				  "No se ha podido crear un temporizador.",
				  NULL, ALLEGRO_MESSAGEBOX_ERROR);
      exit (EXIT_FAILURE);
    }

  display = al_create_display (1024, 768);
  if (!display)
    {
      al_destroy_timer (timer);
      al_show_native_message_box (display, "Error", "Error",
				  "Me he quedado sin display.", NULL,
				  ALLEGRO_MESSAGEBOX_ERROR);
      exit (EXIT_FAILURE);
    }

 
  event_queue = al_create_event_queue ();
  if (!event_queue)
    {
      al_destroy_timer (timer);
      al_destroy_display (display);
      al_show_native_message_box (display, "Error", "Error",
				  "No se ha creado la cola de eventos.", NULL,
				  ALLEGRO_MESSAGEBOX_ERROR);
      exit (EXIT_FAILURE);
    }

  al_register_event_source (event_queue, al_get_timer_event_source (timer));
  al_register_event_source (event_queue, al_get_keyboard_event_source());
  al_register_event_source (event_queue,
			    al_get_display_event_source (display));


  al_clear_to_color (al_map_rgb (0, 0, 0));
  al_flip_display ();

  al_start_timer (timer);
}


void
destruir_allegro ()
{

  al_destroy_timer (timer);
  al_destroy_display (display);
  al_destroy_event_queue (event_queue);


}

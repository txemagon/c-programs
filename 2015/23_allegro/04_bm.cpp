#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro.h>

int main(int argc, const char **argv){


    // Variables
    ALLEGRO_DISPLAY *ventana = NULL;
    ALLEGRO_EVENT_QUEUE *mensajes = NULL;
    ALLEGRO_TIMER *alarma = NULL;
    ALLEGRO_BITMAP *nave = NULL;
    bool dibujar = true;
    double x = 0;

    al_init();

    // Crear:
    ventana = al_create_display(800, 600);
    mensajes = al_create_event_queue();
    alarma = al_create_timer(1/60.);

    al_register_event_source(mensajes,
            al_get_display_event_source(ventana));
    al_register_event_source(mensajes,
            al_get_timer_event_source(alarma));

    nave =  al_create_bitmap(40, 40);
    al_set_target_bitmap(nave);
    al_clear_to_color(al_map_rgb(255,0,255));
    al_set_target_bitmap(al_get_backbuffer(ventana));
    while(1) {
        ALLEGRO_EVENT ev;
        al_wait_for_event(mensajes, &ev);

        if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
            break;

        if (ev.type == ALLEGRO_EVENT_TIMER)
            dibujar = true;

        if (dibujar){
            dibujar = false;
            x += 1;
            al_clear_to_color(al_map_rgb(0,0,0));
            al_draw_bitmap(nave, x, 20, 0);
            al_flip_display();

        }

    //   Miro los eventos
    //     Si cierran la ventan
    //        salgo del bucle
    //     Si se cumple el tiempo:
    //        repintar
    //   Si repintar
    //      No repintar
    //      Mover el cuadrado
    //      Pintar
}

    al_destroy_timer(alarma);
    al_destroy_display(ventana);
    al_destroy_event_queue(mensajes);

    return EXIT_SUCCESS;
}

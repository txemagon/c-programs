#ifndef __PELOTA_H__
#define __PELOTA_H__

#include <allegro5/allegro.h>

class Pelota
{
private:
  double x;
  double y;
  double vx;
  double vy;
  ALLEGRO_BITMAP *dibujo;

public:
    Pelota ();
    Pelota (double x, double y);
  void actualizate ();
  double get_x ();
  double get_y ();
  ALLEGRO_BITMAP *get_dibujo ();
  void set_dibujo (ALLEGRO_BITMAP *sprite);
};


#endif

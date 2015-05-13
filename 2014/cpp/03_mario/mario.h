#ifndef __MARIO_H__
#define __MARIO_H__

#include <allegro5/allegro.h>

class Mario
{
private:
  double x;
  double y;
  double vx;
  double vy;
  ALLEGRO_BITMAP *dibujo;

public:
    Mario ();
    Mario (double x, double y);
  void actualizate ();
  double get_x ();
  double get_y ();
  void change_vx(float delta);
  void change_vy(float delta);  
  ALLEGRO_BITMAP *get_dibujo ();
  void set_dibujo (ALLEGRO_BITMAP * sprite);
};


#endif

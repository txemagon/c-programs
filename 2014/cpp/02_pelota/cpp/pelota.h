#ifndef __PELOTA_H__
#define __PELOTA_H__

class Pelota
{
private:
  double x;
  double y;
  double vx;
  double vy;
  char dibujo;

public:
    Pelota ();
  void actualizate ();
  double get_x ();
  double get_y ();
  char get_dibujo ();
};


#endif

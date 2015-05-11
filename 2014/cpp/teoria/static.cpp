#include <iostream>

using namespace std;

/* Cabecera .h */
class Conejo
{
private:
  static int poblacion;
  int dni;

public:
    Conejo ();
  static int get_poblacion ();
  int identificate ();
};

/* Implementacion .cpp*/

int Conejo::poblacion = 0;

Conejo::Conejo ()
{
  poblacion++;
  this->dni = poblacion;
}

int
Conejo::identificate ()
{
  return this->dni;
}

int
Conejo::get_poblacion ()
{
  return poblacion;
}

/* main */
int
main (int argc, char **argv)
{
  Conejo granja[1000];
  cout << "Se han creado " << Conejo::
    get_poblacion () << " conejos." << endl << endl;

  cout << "Hola. Soy el conejo numero " << granja[573].
    identificate () << endl;

}

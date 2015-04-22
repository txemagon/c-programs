#include "cubeta.h"

/* Sobrecarga con el constructor */
Cubeta::Cubeta()
{
    this->nivel = 0;

}

double 
Cubeta::get_nivel() 
{ 
    return this->nivel; 
}

double 
Cubeta::cargar(double cantidad)
{
    this->nivel += cantidad;
}

double 
Cubeta::extraer(double cantidad)
{
    this->nivel -= cantidad;
}



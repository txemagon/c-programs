#include <stdio.h>
#include "cartas.h"

struct TCarta modelo[NUM_PAREJAS] = {
    {"Duende", "duende3.txt"},
    {"Arbol", "arbol.txt" },
    {"Balon", ""},
    {"Manzana", ""},
    {"Ardilla", ""},
    {"Nuez", ""},
    {"Seta", ""},
    {"Casa", ""},
    {"Zapato", ""},
    {"Sombrilla", ""},
    {"Estuche", ""},
    {"Niño", ""},
    {"Pez", ""},
    {"Reloj", ""},
    {"Raton", ""},
    {"Television", ""}
};

void push(struct TMazo *mazo, int carta){
    if (mazo->quedan < 2 * NUM_PAREJAS) {
        mazo->cartas[mazo->quedan] = carta;
        mazo->quedan++;
    }
}

int extract(struct TMazo *mazo, int pos) {
    int extraido;
  if (pos >= mazo->quedan || pos < 0)
    return MAZO_ERROR;  

  extraido = mazo->cartas[pos];

  for (int i=pos; i<mazo->quedan; i++)
      mazo->cartas[i] = mazo->cartas[i+1];
  mazo->quedan--;

  return extraido;
}

void inspect(struct TMazo mazo){
  for (int i=0; i<mazo.quedan; i++)
    printf("%X: %s\n", mazo.cartas[i], modelo[mazo.cartas[i]].nombre);
  printf("\n");
}

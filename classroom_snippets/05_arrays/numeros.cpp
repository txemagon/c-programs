#include <stdio.h>
#include <stdlib.h>

#define MAXNUM 10

int main(int argc, char *argv[]){

  int sucesion[MAXNUM];
  int potencia;


  potencia = atoi(argv[1]);

  // Rellenar la matriz 'sucesion'
  for (int i=0; i<MAXNUM; i++){
    sucesion[i] = 1;
    for (int p=0; p<potencia; p++)
      sucesion[i] *= i + 1;
  }

  // Imprimir la matriz 'sucesion'
  for (int i=0; i<MAXNUM; i++)
    printf("%i ", sucesion[i]);
  printf("\n");

  return EXIT_SUCCESS;
}

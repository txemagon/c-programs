#include <stdio.h>
#include <stdlib.h>

int main(){
  char letra;

  printf("\n\nIntroduce un caracter: ");
  // Leer caracter
  scanf(" %c", &letra);
  
  // Imprimir el caracter y el código ASCII
  printf("%c: %Xh\n", letra, letra);
  
  return EXIT_SUCCESS;
}

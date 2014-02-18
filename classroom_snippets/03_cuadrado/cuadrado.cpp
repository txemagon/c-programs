#include <stdio.h>
#include <stdlib.h>

int main(){

  for (int fila=0; fila<5; fila++){
    for(int col=0; col<5; col++)
      printf("*");
    printf("\n");
  }

  return EXIT_SUCCESS;
}

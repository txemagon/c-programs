#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int lado;
 
  if (argc<2)
    return EXIT_FAILURE;

  lado = atoi(argv[1]);

  for (int fila=0; fila<lado; fila++){
    for(int col=0; col<lado; col++)
      printf("*");
    printf("\n");
  }

  return EXIT_SUCCESS;
}

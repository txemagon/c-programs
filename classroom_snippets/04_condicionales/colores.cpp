#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char rojo, amarillo;

  do{
    printf("Rojo (s/n): ");
    scanf(" %c", &rojo);
    if (rojo < 'a')
      rojo += ('a' - 'A') ;
  }while(rojo != 's' && rojo != 'n');

  do{
    printf("Amarillo (s/n): ");
    scanf(" %c", &amarillo);
    if (amarillo < 'a')
      amarillo += ('a' - 'A') ;
  }while(amarillo != 's' && amarillo != 'n');

  printf("Estas viendo ");
  if (rojo == 's')
    if (amarillo == 's')
      printf("Naranja");
    else
      printf("Rojo");
  else
    if (amarillo == 's')
      printf("Amarillo");
    else
      printf("Negro");

  printf("\n");

  return EXIT_SUCCESS;
}

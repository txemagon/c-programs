#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int a[32];

  a[0] = 27;
  a[9] = 2;

  printf("%p: \n", a);

  printf("%i - %i = %i\n", a[0], a[1], a[0] - a[9]);


  return EXIT_SUCCESS;
}

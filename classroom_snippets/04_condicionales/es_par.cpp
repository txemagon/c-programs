#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int a;
  
  if (argc < 2){
    printf("Usage: %s <entero>\n", argv[0]);
    return EXIT_FAILURE;
  }

  a = atoi(argv[1]);

  if (a % 2 == 0)
    printf("Es par\n");
  else
    printf("Es impar\n");


  return EXIT_SUCCESS;
}

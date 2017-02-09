#include <stdio.h>
#include <stdlib.h>

int proc(){
  return 3;
}

int main(int argc, char *argv[]){

    printf("%i\n", proc());

    return EXIT_SUCCESS;
}

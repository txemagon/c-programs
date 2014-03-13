#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]){

    if(argc > 1)
       for(int i=0; i<10; i++)
          printf("%s\n", argv[1]); 
    else
        return EXIT_FAILURE;

    return EXIT_SUCCESS;
}

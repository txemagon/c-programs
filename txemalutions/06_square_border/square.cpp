#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ESTOY_EN_EL_BORDE ( fila == 0 || fila == lado - 1 || \
	                    col  == 0 || col  == lado - 1 )

char next_of(const char *palabra){
   static int siguiente = 0;
   return palabra[siguiente++ % strlen(palabra)];
}

int main(int argc, char *argv[]){

   int lado;
   const char *borde = "*";

   if (argc > 1)
       borde = argv[1];

   printf("Lado: ");
   scanf(" %i", &lado);

   for (int fila = 0; fila < lado; fila++){
       for (int col = 0; col < lado; col ++)
          if (ESTOY_EN_EL_BORDE)
	      printf("%c", next_of(borde) );
          else
              printf(" ");
       printf("\n");
   }

    return EXIT_SUCCESS;
}

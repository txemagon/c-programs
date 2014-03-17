#include <stdio.h>
#include <stdlib.h>

#define ESTOY_EN_EL_BORDE ( fila == 0 || fila == lado - 1 || \
	                    col  == 0 || col  == lado - 1 )
int main(int argc, char *argv[]){

   int lado;
   char borde = '*';

   if (argc > 1)
       borde = argv[1][0];

   printf("Lado: ");
   scanf(" %i", &lado);

   for (int fila = 0; fila < lado; fila++){
       for (int col = 0; col < lado; col ++)
          if (ESTOY_EN_EL_BORDE)
	      printf("%c", borde);
          else
              printf(" ");
       printf("\n");
   }

    return EXIT_SUCCESS;
}

/*

   l=4

   LLLL
   LllL
   LllL
   LLLL


   Si estoy en la primera o la ultima fila
   O
   Si estoy en la primera o la ultima col 

   ES EL BORDE



   */

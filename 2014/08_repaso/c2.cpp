#include <stdio.h>
#include <stdlib.h>

#define C 9
#define L C

int main(int argc, char *argv[]) {

   FILE *color = popen("toilet -fterm --gay", "w");
   for(int fila=0; fila<L; fila++){
      for(int col=0; col<C; col++)
	 if (
	       fila == 0 || fila == L-1 ||
	       col  == 0 || col  == C-1 ||
	       fila == col)
	    fprintf(color, "*");
	 else
	    fprintf(color, " ");
      fprintf(color, "\n");
   }
   pclose(color);

   return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

int main(int argc, char *argv[]) {
    int divisores[N];
    int numero = atoi(argv[1]);
    int nd = 0;
    int suma = 0;

    for (int pd=numero-1; pd>0; pd--)
	if (numero % pd == 0)
	    divisores[nd++] = pd;
	    
   for(int i=0; i<nd; i++)
      suma += divisores[i];

   if (suma == numero)
       printf("Es perfecto.\n");
   else
       printf("No es perfecto.\n");

    return EXIT_SUCCESS;
}

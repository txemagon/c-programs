#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int n = 0; 
    bool seguir = true;
    double buffer;
    double *p_nota = NULL;

    do {
       printf("Nota: ");
       scanf(" %lf", &buffer);
       if (buffer < 0)
	   seguir = false;
       else{
	   n++;
	   p_nota = (double *) realloc(p_nota, n * sizeof(double));
	   p_nota[n-1] = buffer;
       }
    } while(seguir);


    for (int i=0; i<n; i++)
	printf("=> %.2lf\n", p_nota[i]);

    free(p_nota);

    return EXIT_SUCCESS;
}

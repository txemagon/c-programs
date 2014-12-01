#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double resultado = 0;

    for(int primer_elemento_del_par=1; 
	    primer_elemento_del_par < argc - 1;
	    primer_elemento_del_par += 2)
	resultado += 
	    atof(argv[primer_elemento_del_par]) * 
	    atof(argv[primer_elemento_del_par + 1]);

    printf("escalar: %.2lf\n", resultado);

    return EXIT_SUCCESS;
}

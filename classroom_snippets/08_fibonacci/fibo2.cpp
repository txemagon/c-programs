#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int total_de_terminos;

    if (argc<2){
	fprintf(stderr, "Usage: %s <cantidad de terminos>\n", argv[0]);
	return EXIT_FAILURE;
    }


    total_de_terminos = atoi(argv[1]);

    if (total_de_terminos < 1)
	return EXIT_SUCCESS;
    printf(

    for (int 

    return EXIT_SUCCESS;
}

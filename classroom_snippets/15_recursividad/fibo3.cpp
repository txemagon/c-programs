#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    for (int i=0; i<MAX; i++)
	printf("%i ", siguiente_fibonacci());
    printf("\n");

    return EXIT_SUCCESS;
}

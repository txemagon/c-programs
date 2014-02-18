#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    for (int i=0x20; i<0x80; i++)
	printf("0x%X: %c\n", i, i);

    return EXIT_SUCCESS;
}

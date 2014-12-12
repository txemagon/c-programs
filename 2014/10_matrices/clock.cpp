#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    for (int i=0; i<1000; i++){
	printf("\r%i                  ", i);
	fflush(stdout);
	usleep(100000);
    }

    return EXIT_SUCCESS;
}

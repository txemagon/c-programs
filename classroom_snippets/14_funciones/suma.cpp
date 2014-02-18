#include <stdio.h>
#include <stdlib.h>

int suma(int desde) {
    if (desde == 0)
	return 0;
    return desde + suma(desde - 1);
}

int main(int argc, char *argv[]){
    int n;

    if (argc < 2)
	return EXIT_FAILURE;

    n = atoi(argv[1]);

    printf("%i\n", suma(n));
    return EXIT_SUCCESS;
}

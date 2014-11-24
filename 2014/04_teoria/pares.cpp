#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char *argv[]) {

    int par[N];

    for (int i=0; i<N; i++)
	par[i] = 2 * i ;

    for (int i=0; i<N; i++)
	printf("par[%i] = %i\n", i, par[i]);

    return EXIT_SUCCESS;
}

+---+---+---+---+---+
| 0 | 2 | 4 | 6 | 8 |
+---+---+---+---+---+

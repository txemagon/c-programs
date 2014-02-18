#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a[2][3] = {
	{1, -3, 5},
	{-4, 2, 1}
    };

    int b[3][2] = {
	{1, -2},
	{3, -1},
	{4,  5}
    };

    int c[2][2];

    for (int i=0; i<2; i++)
	for(int j=0; j<2; j++){
	    c[i][j] = 0;
	    for(int k=0; k<3; k++)
		c[i][j] += a[i][k] * b[k][j];
	}

    for (int i=0; i<2; i++){
	for(int j=0; j<2; j++)
	    printf(" %i", c[i][j]);
	printf("\n");
    }

    return EXIT_SUCCESS;
}

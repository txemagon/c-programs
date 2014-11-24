#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int opciones[][2] = { 
	{1, 51},
	{2, 52},
	{3, 53},
	{4, 54},
	{5, 55},
	{6, 56}
    };

    int *p = &opciones[1][1];

    return EXIT_SUCCESS;
}

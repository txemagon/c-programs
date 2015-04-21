#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define N 100

#include "display.h"


int main(int argc, char *argv[]) {

    Option option;
    char buffer[0x1000];
    char *mssg[N];
    int n = 0;

    while ( (option = menu()) != done) { 
	switch(option){
	    case send: 
		printf(">: ");
		scanf(" %s", buffer);
		mssg[n] = (char *)  malloc(strlen(buffer) + 1);
		strcpy(mssg[n++], buffer);
		break;
	    case get: 
		break;
	    case peep: 
		for (int i=0; i<n; i++)
		    printf("%s\n", mssg[i]);
		printf("Pulse una tecla para continuar.");
		scanf(" %*c");
		break;
	}
    }



    return EXIT_SUCCESS;
}

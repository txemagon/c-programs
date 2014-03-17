#include <stdio.h>
#include <stdlib.h>

void print(const char *inicio) {

    for(; *inicio; inicio++)
	printf(" %c", *inicio == 'o' ? '0' : *inicio );

    printf("\n");
}

int main(int argc, char *argv[]){

    const char *list[] = { 
	"bread", 
	"toast", 
	"bacon",
	"ham",
	NULL
    }; 


    for (int i=0; list[i]; i++)
	print(list[i]);

    return EXIT_SUCCESS;
}

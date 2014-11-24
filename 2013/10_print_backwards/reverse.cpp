#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    const char *sentence  = "The world is a vampire.";
    const char *printable = sentence;
    
    while(*printable != '\0') 
	printable++;

    while(printable != sentence){
	printable--;
	printf("%c", *printable);
    }

    printf("\n");

    return EXIT_SUCCESS;
}

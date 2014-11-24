#include <stdio.h>
#include <stdlib.h>

void f2(const char *names[5]){

    printf("The size of the array in function f2(const char *names[5]) is: %i\n", sizeof(names));
}


void f1(const char *names[]){

    printf("The size of the array in function f1(const char *names[]) is: %i\n", sizeof(names));
}

int main(int argc, char *argv[]){

    const char *names[] = { "pepe", "juan", "antonio", "jose", "manolo" };

    system("clear");
    printf("I've declared some Spanish names.\n\n");

    for (int i=0; i< sizeof(names) / sizeof(char *); i++)
	printf("\t\t%i.- %s\n", i+1, names[i]);


    printf("The size of the array in function main is: %i\n", sizeof(names));

    f1(names);
    f2(names);

    return EXIT_SUCCESS;
}

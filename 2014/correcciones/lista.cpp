#include <stdio.h>
#include <stdlib.h>

#define N 0x100

int main(int argc, char *argv[]) {
    char buffer[N];


    do{
	scanf(" %s", buffer);
mall(strlen(buffer) + 1);
    } while(1);

    return EXIT_SUCCESS;
}

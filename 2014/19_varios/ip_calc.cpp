#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char ip[0x20];
    char *num;
    int hex = 0;

    printf("ip: ");
    scanf(" %s", ip);

    num = strtok(ip, ".");
    
    while(num){
	hex <<= 8;
        hex += atoi(num);
        num = strtok(NULL, ".");
    }

    printf("%X\n", hex);


    return EXIT_SUCCESS;
}

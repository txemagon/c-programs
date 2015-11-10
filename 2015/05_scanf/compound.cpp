#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[0x20];

    printf("Tell me your name: ");
    gets(name);
    printf("%s, and I'll make "
           "you the queen of a"
           "rose garden. \n", name);

    return EXIT_SUCCESS;
}

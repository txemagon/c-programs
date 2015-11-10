#include <stdio.h>
#include <stdlib.h>

int main(){
    char number[20];
    char rubbish[0x100];

    printf("Hexadecimal: ");
    scanf(" %[0-9a-fA-F]", number);

    scanf(" %[^\n]", rubbish);

    printf("%s\n", number);
    printf("%s\n", rubbish);

    return EXIT_SUCCESS;
}

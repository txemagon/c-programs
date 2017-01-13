#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char mi_nombre[] = { 86, 'i', '\x63', 0164, '\0' };

    printf("%i\012", mi_nombre[0]);
    printf("%c\n", mi_nombre[0]);

    printf("%s\n", mi_nombre);

    return EXIT_SUCCESS;
}

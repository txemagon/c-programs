#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    int edad = 25234;
    char mi_edad[10];
    sprintf(mi_edad, "%x\n", edad);

    printf("%s\n", mi_edad);

    return EXIT_SUCCESS;
}

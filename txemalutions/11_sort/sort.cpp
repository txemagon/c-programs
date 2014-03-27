#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    const char *list[] = { "yield", "yelp"};

    if (strcmp(list[0], list[1]) > 0){
        const char *aux = list[1];
        list[1] = list[0];
        list[0] = aux;
    }

    for (int i=0; i<2; i++)
        printf("%s\n", list[i]);

    return EXIT_SUCCESS;
}


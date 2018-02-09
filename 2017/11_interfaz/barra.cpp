#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    printf("Esto es lo que no se borra. \n");
    for (int i=0; i<=100; i++){
        sleep(1);
        fprintf(stderr, "\r");
        for (int progre=0; progre<=i; progre++)
            fprintf(stderr, "=");
        fprintf(stderr, "> %i%%", i);
    }

    fprintf(stderr, "\n\nDone.");
    return EXIT_SUCCESS;
}

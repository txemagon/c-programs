#include <stdio.h>
#include <stdlib.h>

int ticket(){
    static int n_ticket = 0;

    return ++n_ticket;
}

int main(int argc, char *argv[]){

    for (int i=0; i<3; i++)
        printf("Ticket: %i\n", ticket());

    return EXIT_SUCCESS;
}

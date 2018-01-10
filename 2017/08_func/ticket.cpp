#include <stdio.h>
#include <stdlib.h>

int ticket() {
    static int ticket_number = 0;
    return ++ticket_number;
}
int main(){

    printf("%i\n", ticket());
    printf("%i\n", ticket());
    printf("%i\n", ticket());
    printf("%i\n", ticket());
    printf("%i\n", ticket());
    printf("%i\n", ticket());
    return EXIT_SUCCESS;
}

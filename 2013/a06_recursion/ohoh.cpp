#include <stdio.h>
#include <stdlib.h>

void f(){ f(); }

int main(int argc, char *argv[]){

    f();
    return EXIT_SUCCESS;
}

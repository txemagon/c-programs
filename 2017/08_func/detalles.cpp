#include <stdio.h>
#include <stdlib.h>


int miau() {
    return 2;
}

void guau(int *p_var){
    *p_var = 2;
}

int main(){

    int b;
    int a = miau();

    guau(&b);

    return EXIT_SUCCESS;
}

#include <stdio.h>


#define MUEVE(f,c) "\x1b["#f";"#c"f"

int main(){

    printf(MUEVE(10,5) "Hola\n");

    return 0;
}

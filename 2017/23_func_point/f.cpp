#include <stdio.h>
#include <stdlib.h>


int suma(int op1, int op2){
    return op1 + op2;
}

int main(){
    int (*resta)(int op1, int op2);
    int a = 3, b = 7;
    int *p = &a;
    char op;

    printf("a ó b?: ");
    scanf(" %c", &op);
    if (op == 'b')
        p = &b;

    printf("%i\n", *p);

    suma(a, b);
    resta = &suma;
    printf("%i\n", (*resta)(a, b));
    return EXIT_SUCCESS;
}

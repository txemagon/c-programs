#include <stdio.h>
#include <stdlib.h>

#include "general.h"

int main(int argc, char *argv[]){

    int i;
    struct TOp op[4];

    op[0] = new_and(7, 9 );
    op[1] = new_or(7, 9 );
    op[2] = new_xor(7, 9 );
    op[3] = new_and(7, 13 );

    for (i=0; i<4; i++)
        printf ( " %2i %c %2i = %2i\n",
          op[i].op1, op[i].sym, op[i].op2,
          (*op[i].operacion)(op[i].op1, op[i].op2) );

    return EXIT_SUCCESS;
}

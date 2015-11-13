#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *agrv){

    FILE *pf;

    pf = fopen("lyrics.txt", "w");

    fprintf(pf, "In the summer time\n"
            "when the weather is fine\n"
            "You women, you got women\n"
            "in your mind.\n\n");

    fclose(pf);

    return EXIT_SUCCESS;
}

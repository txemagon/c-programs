#include <stdio.h>
#include <stdlib.h>

#define SCORE_FILE "points.dat"
#define N 0x20
#define IN 10

struct Score {
    char user[N];
    int score;
};

void pretty_print(struct Score user){
    static int orden = 0;
    printf("\t\t%i.- %s\t%i\n", ++orden, user.user, user.score);
}

int main(int argc, const char **argv){

    FILE *pf = NULL;
    struct Score board[IN];

    if ( !(pf = fopen(SCORE_FILE, "r")) ){
        fprintf(stderr, "File %s not found.\n",  SCORE_FILE);
        return EXIT_FAILURE;
    }


    for (int i=0; i<IN; i++)
        fscanf(pf, " %s\t%i", board[i].user, &board[i].score);

    fclose(pf);

    for (int i=0; i<IN; i++)
        pretty_print(board[i]);

    return EXIT_SUCCESS;
}

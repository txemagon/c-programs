#ifndef __SCORE_H__
#define __SCORE_H__

#define MAXCHAR 20
#define PLAYERS 10
#define FICHERO "scores.bin"

typedef struct{
    char nombre[MAXCHAR];
    int score;
} Score;

#endif

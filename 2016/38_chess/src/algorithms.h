#ifndef __ALGORITHMS_H__
#define __ALGORITHMS_H__

#include <stdio.h>
#include "general.h"
#include "io.h"

#define ADD(accu, inc) accu.x += inc.x, accu.y += inc.y

#define UP         direction[0]
#define UP_RIGHT   direction[1]
#define RIGHT      direction[2]
#define RIGHT_DOWN direction[3]
#define DOWN       direction[4]
#define DOWN_LEFT  direction[5]
#define LEFT       direction[6]
#define LEFT_UP    direction[7]


struct TVector {
    int x;
    int y;
};

enum TPiece {pawn, rook, knight, bishop, queen, king };

struct TVector direction[] = {
    {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}
};

struct TVector *pawn_mv[] = { &DOWN, NULL };
struct TVector *rook_mv[] = { &RIGHT, &LEFT, &UP, &DOWN, NULL };
struct TVector *knight_mv[] = { NULL };
struct TVector *bishop_mv[] = { &UP_RIGHT, &LEFT_UP, &RIGHT_DOWN, &DOWN_LEFT, NULL };


struct TVector **movements[] = {
    pawn_mv, rook_mv, knight_mv, bishop_mv
    };

#ifdef __cplusplus
extern "C"
{
#endif

int is_empty (int row, int col, char board[SIZE][SIZE]);
int rook_check (int row, int col, char board[SIZE][SIZE]);
int bishop_check (int row, int col, char board[SIZE][SIZE]);

#ifdef __cplusplus
}
#endif

#endif

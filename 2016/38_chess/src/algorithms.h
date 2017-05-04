#ifndef __ALGORITHMS_H__
#define __ALGORITHMS_H__

#include <stdio.h>
#include "general.h"
#include "io.h"

#define ADD(accu, inc) accu.x += inc.x, accu.y += inc.y

struct TVector {
    int x;
    int y;
};

enum TPiece {pawn, rook, knight, bishop, queen, king };

#ifdef __cplusplus
extern "C"
{
#endif

int is_empty (int row, int col, char board[SIZE][SIZE]);
int check (int row, int col, char board[SIZE][SIZE], enum TPiece piece);

#ifdef __cplusplus
}
#endif

#endif

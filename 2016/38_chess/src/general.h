#ifndef __GENERAL_H__
#define __GENERAL_H__

#define _GNU_SOURCE
#include <errno.h>

#define BOARD_FN "whites_board"
#define SIZE     8

#define IN_LIMITS(x) (x)>=0 && (x)<SIZE

#define USAGE "\
    Usage: %s \n\
           Shows the board contained in <" BOARD_FN "> \n\
           and checks for tower possibilities.\n\
"

enum TPiece {pawn, rook, knight, bishop, queen, king, nop };

struct Color {
    const char *white;
    const char *black;
};

struct Piece {
    enum TPiece class_number;
    char symbol;
    struct Color bs;   /* Board Symbol */
    const char *name;
};

#define PIECES 7
extern struct Piece set[PIECES];


#endif


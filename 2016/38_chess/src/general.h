#ifndef __GENERAL_H__
#define __GENERAL_H__

#define _GNU_SOURCE
#include <errno.h>

#define BOARD_FN "whites_board"
#define SIZE     8

#define IN_LIMITS(x) (x)>=0 && (x)<SIZE
#define ADD(accu, inc) accu.x += inc.x, accu.y += inc.y


#define USAGE "\
    Usage: %s \n\
           Shows the board contained in <" BOARD_FN "> \n\
           and checks for tower possibilities.\n\
"
#endif


#ifndef __IO_H__
#define __IO_H__

#include "general.h"


#ifdef __cplusplus
extern "C"
{
#endif

int repeat (void);  /* true if users wants to repeat */
void load (const char *filename, char storage[SIZE][SIZE]);
void dump (char board[SIZE][SIZE]);
void ask_coordinates (int *y, int *x, const char *name);

#ifdef __cplusplus
}
#endif

#endif

#ifndef __IO_H__
#define __IO_H__

#include "general.h"
#include "interfaz.h"

#define MAX_CAR 0x100
#define OUT_LIN 7
#define PROMPT_LIN 17
#define EXIT_LIN 23

enum TColor {white, black};

#ifdef __cplusplus
extern "C"
{
#endif

void set_color(enum TColor new_color);
int repeat (void);  /* true if users wants to repeat */
void load (const char *filename, char storage[SIZE][SIZE]);
void prepare_win(int line);
void dump (char board[SIZE][SIZE]); /* dump data to screen */
void print_piece(char mark, int row, int col);
void print_possibility(int row, int col, char board[SIZE][SIZE]);
int good_coordinates (int row, int col);
void ask_coordinates (int *y, int *x, const char *name);
void ask_piece(enum TPiece *piece);
void title(const char *s);

#ifdef __cplusplus
}
#endif

#endif

#include <stdio.h>
#include <stdlib.h>

#include "general.h"
#include "io.h"


int is_empty (int row, int col, char board[SIZE][SIZE]);
int tower_check (int row, int col, char board[SIZE][SIZE]);

int
main (int argc, char *argv[])
{
  char chess_board[SIZE][SIZE];
  int row, col;

  do
    {
      load (BOARD_FN, chess_board);
      title("chess");
      dump (chess_board);
      do
	{
	  ask_coordinates (&row, &col, "torre");
	}
      while (!is_empty (row, col, chess_board));
      tower_check (row, col, chess_board);
    }
  while (repeat ());


  return EXIT_SUCCESS;
}

int
is_empty (int row, int col, char board[SIZE][SIZE])
{
  ;
}

int
tower_check (int row, int col, char board[SIZE][SIZE])
{
  ;
}

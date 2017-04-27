#include <stdio.h>
#include <stdlib.h>

#include "general.h"
#include "io.h"
#include "algorithms.h"


int
main (int argc, char *argv[])
{
  char chess_board[SIZE][SIZE];
  int row, col;
  int (*p_check[2])(int row, int col, char board[SIZE][SIZE]) = {
      &rook_check,
      &bishop_check
  };

  do
    {
      load (BOARD_FN, chess_board);
      title ("chess");
      dump (chess_board);
      do
	{
	  ask_coordinates (&row, &col, "Alfil");
	}
      while (!good_coordinates (row, col) ||
	     !is_empty (row, col, chess_board));
      print_piece ('A', row, col);
      (*p_check[1]) (row, col, chess_board);
    }
  while (repeat ());

  MOVE(EXIT_LIN, 1);

  return EXIT_SUCCESS;
}


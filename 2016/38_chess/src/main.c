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

  do
    {
      load (BOARD_FN, chess_board);
      title ("chess");
      dump (chess_board);
      do
	{
	  ask_coordinates (&row, &col, set[rook].name);
	}
      while (!good_coordinates (row, col) ||
	     !is_empty (row, col, chess_board));
      print_piece (set[rook].symbol, row, col);
      check (row, col, chess_board, set[rook].class_number);
    }
  while (repeat ());

  MOVE(EXIT_LIN, 1);

  return EXIT_SUCCESS;
}


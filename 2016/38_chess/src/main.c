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
  enum TPiece piece;

  do
    {
      load (BOARD_FN, chess_board);
      title ("chess");
      dump (chess_board);
      ask_piece(&piece);
      do
	{
	  ask_coordinates (&row, &col, set[piece].name);
	}
      while (!good_coordinates (row, col) ||
	     !is_empty (row, col, chess_board));
      print_piece (set[piece].symbol, row, col);
      check (row, col, chess_board, set[piece].class_number);
    }
  while (repeat ());

  MOVE(EXIT_LIN, 1);

  return EXIT_SUCCESS;
}


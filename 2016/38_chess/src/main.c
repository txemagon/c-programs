#include <stdio.h>
#include <stdlib.h>

#include "general.h"
#include "io.h"
#include "algorithms.h"

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

struct Piece set[] = {
   {pawn, 'P', {"♙", "♟"}, "Peón"},
   {}

};
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
	  ask_coordinates (&row, &col, "Alfil");
	}
      while (!good_coordinates (row, col) ||
	     !is_empty (row, col, chess_board));
      print_piece ('A', row, col);
      check (row, col, chess_board, set[pawn].class_number);
    }
  while (repeat ());

  MOVE(EXIT_LIN, 1);

  return EXIT_SUCCESS;
}


#include <stdio.h>
#include <stdlib.h>

#include "general.h"
#include "io.h"


int is_empty (int row, int col, char board[SIZE][SIZE]);
int tower_check (int row, int col, char board[SIZE][SIZE]);
int good_coordinates(int row, int col);

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
	  ask_coordinates (&row, &col, "Torre");
	}
      while ( !good_coordinates(row, col) ||
              !is_empty (row, col, chess_board));
      print_piece('T', row, col);
      tower_check (row, col, chess_board);
    }
  while (repeat ());


  return EXIT_SUCCESS;
}

int
good_coordinates(int row, int col)
{
    return row >= 0 && row < SIZE &&
           col >= 0 && col < SIZE;
}

int
is_empty (int row, int col, char board[SIZE][SIZE])
{
  return board[row][col] == ' ';
}

int
tower_check (int row, int col, char board[SIZE][SIZE])
{
    int offs;
  for (offs=1; col+offs<SIZE; offs++)
      if (!is_empty(row, col+offs, board))
      {
          printf("Comes => (%i, %i): %c\n",
                  row+1, col+offs+1, board[row][col+offs]);
          break;
      }

  for (offs=1; col-offs>=0; offs++)
      if (!is_empty(row, col-offs, board))
      {
          printf("Comes => (%i, %i): %c\n",
                  row+1, col-offs+1, board[row][col-offs]);
          break;
      }

  for (offs=1; row+offs<SIZE; offs++)
      if (!is_empty(row+offs, col, board))
      {
          printf("Comes => (%i, %i): %c\n",
                  row+offs+1, col+1, board[row+offs][col]);
          break;
      }

  for (offs=1; row-offs>=0; offs++)
      if (!is_empty(row-offs, col, board))
      {
          printf("Comes => (%i, %i): %c\n",
                  row-offs+1, col+1, board[row-offs][col]);
          break;
      }

}

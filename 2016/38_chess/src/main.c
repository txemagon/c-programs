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
      title ("chess");
      dump (chess_board);
      do
	{
	  ask_coordinates (&row, &col, "Torre");
	}
      while (!good_coordinates (row, col) ||
	     !is_empty (row, col, chess_board));
      print_piece ('T', row, col);
      tower_check (row, col, chess_board);
    }
  while (repeat ());

  MOVE(EXIT_LIN, 1);

  return EXIT_SUCCESS;
}

int
is_empty (int row, int col, char board[SIZE][SIZE])
{
  return board[row][col] == ' ';
}

int
check_direction (int row, int col, struct TVector dir, char board[SIZE][SIZE])
{
  int offs;
  struct TVector cell = { col, row };
  ADD (cell, dir);
  for (offs = 0; IN_LIMITS (cell.x) && IN_LIMITS (cell.y); ADD (cell, dir))
    if (!is_empty (cell.y, cell.x, board))
      {
	print_possibility (cell.y, cell.x, board);
	return 1;
      }
  return 0;
}

int
tower_check (int row, int col, char board[SIZE][SIZE])
{
  //int offs;
  struct TVector dir;

  prepare_win (OUT_LIN);
  printf (BOLD_ON
	  "\tCOMPROBANDO LA TORRE\n" "\t====================\n\n" BOLD_OFF);

  // Convertir a un array a punteros a dirección
  dir.x = 1;
  dir.y = 0;
  check_direction(row, col, dir, board);

  dir.x = -1;
  dir.y = 0;
  check_direction(row, col, dir, board);

  dir.x = 0;
  dir.y = 1;
  check_direction(row, col, dir, board);

  dir.x = 0;
  dir.y = -1;
  check_direction(row, col, dir, board);


/*
  for (offs = 1; col + offs < SIZE; offs++)
    if (!is_empty (row, col + offs, board))
      {
	print_possibility (row, col + offs, board);
	break;
      }

  for (offs = 1; col - offs >= 0; offs++)
    if (!is_empty (row, col - offs, board))
      {
	print_possibility (row, col - offs, board);
	break;
      }

  for (offs = 1; row + offs < SIZE; offs++)
    if (!is_empty (row + offs, col, board))
      {
	print_possibility (row + offs, col, board);
	break;
      }

  for (offs = 1; row - offs >= 0; offs++)
    if (!is_empty (row - offs, col, board))
      {
	print_possibility (row - offs, col, board);
	break;
      }
*/
}

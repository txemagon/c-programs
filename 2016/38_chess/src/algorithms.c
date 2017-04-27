#include "algorithms.h"

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
bishop_check (int row, int col, char board[SIZE][SIZE])
{
  //int offs;
  struct TVector dir;

  prepare_win (OUT_LIN);
  printf (BOLD_ON
	  "\tCOMPROBANDO EL ALFIL\n" "\t====================\n\n" BOLD_OFF);

  // Convertir a un array a punteros a dirección
  dir.x = 1;
  dir.y = 1;
  check_direction(row, col, dir, board);

  dir.x = -1;
  dir.y = -1;
  check_direction(row, col, dir, board);

  dir.x = -1;
  dir.y = 1;
  check_direction(row, col, dir, board);

  dir.x = 1;
  dir.y = -1;
  check_direction(row, col, dir, board);


}

int
rook_check (int row, int col, char board[SIZE][SIZE])
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


}

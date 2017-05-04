#include "algorithms.h"

#define UP         direction[0]
#define UP_RIGHT   direction[1]
#define RIGHT      direction[2]
#define RIGHT_DOWN direction[3]
#define DOWN       direction[4]
#define DOWN_LEFT  direction[5]
#define LEFT       direction[6]
#define LEFT_UP    direction[7]


struct TVector direction[] = {
    {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}
};

struct TVector *pawn_mv[] = { &DOWN, NULL };
struct TVector *rook_mv[] = { &RIGHT, &LEFT, &UP, &DOWN, NULL };
struct TVector *knight_mv[] = { NULL };
struct TVector *bishop_mv[] = { &UP_RIGHT, &LEFT_UP, &RIGHT_DOWN, &DOWN_LEFT, NULL };


struct TVector **movements[] = {
    pawn_mv, rook_mv, knight_mv, bishop_mv
    };


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
check (int row, int col, char board[SIZE][SIZE], enum TPiece piece)
{
  int i;

  prepare_win (OUT_LIN);
  printf (BOLD_ON
	  "\tCOMPROBANDO EL ALFIL\n" "\t====================\n\n" BOLD_OFF);

  for (i=0; movements[piece][i] != NULL; i++)
      check_direction(row, col, *movements[piece][i], board);
}


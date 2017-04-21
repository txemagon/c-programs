#include "io.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <error.h>
#include <errno.h>

const char *good_chars = "TCAKQP-";

void
title (const char *s)
{
  char command[MAX_CAR];
  sprintf (command, "toilet -fpagga --gay '    %s    '", s);
  system ("clear");
  system (command);
}

void
print_usage (FILE * output)
{
  fprintf (output, USAGE, program_invocation_short_name);
}

void
error_ocurred ()
{
  print_usage (stderr);
  error (-errno, errno, "%s\n", strerror (errno));
}


char
transform (char c)
{
  c = toupper (c);
  if (!strchr (good_chars, c))
    c = '\0';
  if (c == '-')
    c = ' ';
  return c;
}

void
load (const char *filename, char storage[SIZE][SIZE])
{
  FILE *pf;
  char c;
  int row = 0, col = 0;

  memset (storage, ' ', SIZE * SIZE);

  pf = fopen (filename, "r");
  if (!pf)
    error_ocurred ();

  while (!feof (pf))
    {
      c = fgetc (pf);
      if (c == '\n')
	{
	  col = 0;
	  row++;
	}
      c = transform (c);

      if (c)
	{
	  storage[row][col] = c;
	  col++;
	}

    }

  fclose (pf);
}

void
prepare_win (int line)
{
  int i;
  MOVE (line, 1);
  for (i = 0; i < 10; i++)
    printf ("                           \n");
  MOVE (line, 1);
}

void
dump (char board[SIZE][SIZE])
{
  grid_show (board);
}

int
good_coordinates (int row, int col)
{
  return IN_LIMITS(row) && IN_LIMITS(col);
}

void
ask_coordinates (int *y, int *x, const char *name)
{
  prepare_win (PROMPT_LIN);
  printf (BOLD_ON "[%s. Posición]" BOLD_OFF "\n", name);
  ANSI_SWITCH_COLOR (AC_GREEN, FORE_NORMAL);
  printf ("  fila, columna: ");
  ANSI_SWITCH_COLOR (AC_GREEN, FORE_LIGHT);
  scanf ("%i %*[,] %i", y, x);
  ANSI_COLOR_RESET;
  (*y)--;
  (*x)--;
}

int
repeat (void)
{
  char answer;

  prepare_win (PROMPT_LIN);
  ANSI_SWITCH_COLOR (AC_GREEN, FORE_NORMAL);
  printf ("Otra vez (" INVER_ON "s/N" INVER_OFF "): ");
  scanf (" %c", &answer);
  ANSI_COLOR_RESET;

  return tolower (answer) == 's' ? 1 : 0;
}

void
print_piece (char mark, int row, int col)
{
  ANSI (BOLD_ON);
  ANSI_SWITCH_COLOR (AC_GREEN, BACK_NORMAL);
  print_number (row, col, mark);
  ANSI (AC_RESET BOLD_OFF);
}

void
print_possibility (int row, int col, char board[SIZE][SIZE])
{
  printf ("\tComes => ");
  ANSI_SWITCH_COLOR (AC_CYAN, BACK_LIGHT);
  ANSI_SWITCH_COLOR (AC_WHITE, FORE_LIGHT);
  printf (" (%i, %i):", row + 1, col + 1);
  ANSI_COLOR_RESET;
  printf (" ");
  ANSI_SWITCH_COLOR (AC_CYAN, BACK_LIGHT);
  ANSI_SWITCH_COLOR (AC_BLUE, FORE_NORMAL);
  printf (" %c \n", board[row][col]);
  ANSI_COLOR_RESET;
}

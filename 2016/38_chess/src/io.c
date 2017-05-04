#include "io.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <error.h>
#include <errno.h>

const char *good_chars = "TCAKQP-";
enum TColor color = white;

void set_color(enum TColor new_color)
{
    color = new_color;
}

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

const char *transform_char(void *mark)
{
    int i;
    char c = *((char *) mark);
    const char *result;
    for (i=0; set[i].symbol != c && i<PIECES; i++);
    result = color == white ? set[i].bs.white : set[i].bs.black;
    return result;
}

void
dump (char board[SIZE][SIZE])
{
  grid_show (board, &transform_char);
}

int
good_coordinates (int row, int col)
{
  return IN_LIMITS(row) && IN_LIMITS(col);
}

void prepare_read(const char *subject, const char *title, const char *prompt)
{

  prepare_win (PROMPT_LIN);
  printf (BOLD_ON "[%s. %s]" BOLD_OFF "\n", title, subject);
  ANSI_SWITCH_COLOR (AC_GREEN, FORE_NORMAL);
  printf ("%s", prompt);
  ANSI_SWITCH_COLOR (AC_GREEN, FORE_LIGHT);
}

void end_read()
{
  ANSI_COLOR_RESET;
}

void
ask_piece (enum TPiece *piece)
{
    prepare_read("Seleccionar", "Pieza",
             "\t1.- Torre\n"
             "\t3.- Alfil\n"
             "  Elección: ");
    scanf(" %u", piece);
    end_read();
}

void
ask_coordinates (int *y, int *x, const char *name)
{
  prepare_read("Posición", name, "  fila, columna: ");
  scanf ("%i %*[,] %i", y, x);
  end_read();
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
  print_number (row, col, transform_char(&mark));
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

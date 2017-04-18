#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <error.h>
#include <errno.h>

void
print_usage (FILE *output)
{
    fprintf (output, USAGE, program_invocation_short_name);
}

void
error_ocurred ()
{
  print_usage(stderr);
  error (errno, errno, "%s", strerror (errno));
}

int
repeat (void)
{
  return 1;
}

void
load (const char *filename, char storage[SIZE][SIZE])
{
  FILE *pf;

  pf = fopen(filename, "r");
  if (!pf)
      error_ocurred();
  fclose(pf);
}

void
dump (char board[SIZE][SIZE])
{
  ;
}

void
ask_coordinates (int *y, int *x, const char *name)
{
  ;
}

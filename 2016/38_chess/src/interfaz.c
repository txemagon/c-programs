#include <stdio.h>
#include <unistd.h>
#include "interfaz.h"

#define STR(x) #x
#define FORMAT_STR(w) "%" STR(w) "c"


void
pintar_fila (int f, int w, const char *cini, const char *cmed, const char *cfin, int space)
{
    int c, r, rv;
  int vl = 1 + 2 * VSPACE + 1;
  MOVE (YBASE + vl * f, XBASE);
  printf ("%s", cini);
  for (c = 0; c < w - 1; c++)
    {
      for (r = 0; r < HSPACE * 2 + CWIDTH; r++)
	printf ("%s", ACS_HLINE);
      printf ("%s", cmed);
    }
  for (r = 0; r < HSPACE * 2 + CWIDTH; r++)
    printf ("%s", ACS_HLINE);
  printf ("%s",  cfin);

  if (space)
    {
      for (rv = 0; rv < 1 + VSPACE * 2; rv++)
	{
	  MOVE (YBASE + vl * f + 1 + rv, XBASE);
          printf ("%s", ACS_VLINE);
	  for (c = 0; c < w; c++)
	    {
	      for (r = 0; r < HSPACE * 2 + CWIDTH; r++)
		printf ("%s", " ");
	      printf ("%s", ACS_VLINE);
	    }
	}
    }
}

void
grid (int w, int h)
{
    int f;

  /* Primera fila */
  pintar_fila (0, w, ACS_ULCORNER, ACS_TTEE, ACS_URCORNER, 1);

  /* Resto de filas */
  for (f = 1; f < h; f++)
    pintar_fila (f, w, ACS_LTEE, ACS_PLUS, ACS_RTEE, 1);

  /* Última fila */
  pintar_fila (N, w, ACS_LLCORNER, ACS_BTEE, ACS_LRCORNER, 0);

}


void
pon_numero (int fila, int col, char n)
{
  MOVE (YBASE + 1 + VSPACE + fila * (2 + 2 * VSPACE),
	    XBASE + 1 + HSPACE + col * (1 + 2 * HSPACE + CWIDTH));
  printf(FORMAT_STR (CWIDTH), n);
  fflush(stdout);
}

void
muestra (char matriz[N][N])
{
  int f, c;
  grid (N, N);
  for (f = 0; f < N; f++)
    for (c = 0 ; c < N; c++)
      pon_numero (f, c, matriz[f][c]);
  printf("\n");
  usleep (4000000);
}

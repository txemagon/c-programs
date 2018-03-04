#include <iostream>
#include <GL/glew.h>
#include <stdlib.h>

#include "display.h"

int
main ( int argc, char *argv[] )
{
    Display display(800, 600, "<Your Title>");

    while (!display.IsClosed())
    {
        display.clear(0.0f, 0.15f, 0.3f, 1.0f);
        display.Update();
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

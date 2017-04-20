#ifndef __ANSI_COLORS_
#define __ANSI_COLORS_

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define BOLD_ON            "\x1b[1m"
#define BOLD_OFF           "\x1b[22m"
#define ITALICS_ON         "\x1b[3m"
#define ITALICS_OFF        "\x1b[23m"
#define UNDER_ON           "\x1b[4m"
#define UNDER_OFF          "\x1b[24m"
#define INVER_ON           "\x1b[7m"
#define INVER_OFF          "\x1b[27m"

#define ANSI_RESET         "\x1b[0m"

#define MOVE(r,c) printf("\x1b[%i;%if", r, c);

#endif

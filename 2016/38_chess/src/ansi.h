#ifndef __ANSI_COLORS_
#define __ANSI_COLORS_

#define ANSI_COLOR_RESET   "\x1b[0m"

#define ANSI_COLOR_BLACK   "\x1b[30m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_WHITE   "\x1b[37m"
#define ANSI_COLOR_DFLT    "\x1b[39m"

#define ANSI_BCKGND_BLACK   "\x1b[40m"
#define ANSI_BCKGND_RED     "\x1b[41m"
#define ANSI_BCKGND_GREEN   "\x1b[42m"
#define ANSI_BCKGND_YELLOW  "\x1b[43m"
#define ANSI_BCKGND_BLUE    "\x1b[44m"
#define ANSI_BCKGND_MAGENTA "\x1b[45m"
#define ANSI_BCKGND_CYAN    "\x1b[46m"
#define ANSI_BCKGND_WHITE   "\x1b[47m"
#define ANSI_BCKGND_DFLT    "\x1b[49m"


#define BOLD_ON            "\x1b[1m"
#define FAINT_ON           "\x1b[2m"
#define FAINT_OFF          "\x1b[22m"
#define BOLD_OFF           "\x1b[22m"
#define ITALICS_ON         "\x1b[3m"
#define ITALICS_OFF        "\x1b[23m"
#define UNDER_ON           "\x1b[4m"
#define UNDER_OFF          "\x1b[24m"
#define INVER_ON           "\x1b[7m"
#define INVER_OFF          "\x1b[27m"

#define ANSI_RESET         "\x1b[0m"

#define SAVE_CURSOR        "\x1b[s"
#define RESTORE_CURSOR     "\x1b[u"

#define MOVE(r,c) printf("\x1b[%i;%if", r, c);
#define GO_DOWN(n) printf("\x1b[%iB", n);
#define GO_UP(n) printf("\x1b[%iA", n);


#endif

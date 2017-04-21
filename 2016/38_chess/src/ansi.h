#ifndef __ANSI_COLORS_
#define __ANSI_COLORS_

#define AC_RESET           "\x1b[0m"
#define ANSI_COLOR_RESET   printf ( AC_RESET); fflush(stdout);


/* colors */
#define AC_BLACK   0
#define AC_RED     1
#define AC_GREEN   2
#define AC_YELLOW  3
#define AC_BLUE    4
#define AC_MAGENTA 5
#define AC_CYAN    6
#define AC_WHITE   7
#define AC_DFLT    9

/* Variations */
#define FORE_NORMAL        3
#define FORE_LIGHT         9
#define BACK_NORMAL        4
#define BACK_LIGHT         10

#define ANSI_COLOR(color, variation) "\x1b[" #variation #color "m"
#define ANSI_SWITCH_COLOR(color, variation)   printf ( ANSI_COLOR(color, variation) ); fflush(stdout);


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

// #define SAVE_CURSOR        "\x1b[s"
// #define RESTORE_CURSOR     "\x1b[u"

// Go for: infocmp $TERM | grep -Eo '( sc=\\E.. )|( rc=\\E..)'
#define SAVE_CURSOR        "\0337"
#define RESTORE_CURSOR     "\0338"
#define CURSOR_OFF         "\x1b[?25l"
#define CURSOR_ON          "\x1b[?25h"


#define ANSI(seq)          printf ( seq ); fflush (stdout);

#define MOVE(r,c) printf("\x1b[%i;%if", r, c);
#define GO_DOWN(n) printf("\x1b[%iB", n);
#define GO_UP(n) printf("\x1b[%iA", n);


#endif

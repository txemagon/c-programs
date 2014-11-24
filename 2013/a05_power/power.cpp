#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>

#define ENGLISH 0
#define SPANISH 1
#define MAX 0x100

void print_usage(const char *command_name){
    fprintf(stderr, 
	    "Usage: %s [options] <base> <exponent>\n"
	    "\n"
	    "\n This program raises base to exponent." 
	    "\n"
	    "\n\t <base>\t\t is a real number."
	    "\n"
	    "\n\t <exponent>\t is an integer."
	    "\n"
	    "\nOPTIONS"
	    "\n======="
	    "\n"
	    "\n\t -h\t\t Shows help"
	    "\n",
	    command_name);
}

double power(double base, int exponent){

    double result = 1;
    bool   help_flag = false;

    for (int index = 0; index < exponent; index++)
	result *= base;

    return result;
}

int main(int argc, char *argv[]){

    double base, exponent;
    int c;
    int language = ENGLISH;
    char user[MAX];
    const char *user_language = NULL;
    const char *sentence[] = {
	"The result is: ",
	"El reultado es: "
    };

    while ((c = getopt(argc, argv, "hl:")) != -1)
	switch(c){
	    case 'h':
		print_usage(argv[0]);
		break;
	    case 'l':
		user_language = optarg;
		strncpy(user, user_language, MAX);
		if(strcasecmp(user_language, "spanish") == 0)
		    language = SPANISH;
		break;
	    case '?':
		print_usage(argv[0]);
		break;
	}

    if (argc - optind < 2){
	print_usage(argv[0]);
        exit(EXIT_FAILURE);
    }

    base = atof(argv[optind]);
    exponent = atoi(argv[optind + 1]);

    printf("%s%lf\n", sentence[language], power(base, exponent));

    return EXIT_SUCCESS;
}


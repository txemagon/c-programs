#include <stdio.h>
#include <stdlib.h>

/* El objetivo es compilar todo el prog. */

double suma (double op1, double op2){ return op1 + op2; }
double resta(double op1, double op2){ return op1 - op2; }
double multi(double op1, double op2){ return op1 * op2; }
double divid(double op1, double op2){ return op1 / op2; }

int main(int argc, char *argv[]) {

    double (*pfun[4])(double, double);

    double op[][4] = {
	{ 3, 7, 9, 10 },
	{ 3, 4, 9,  2 }
    };

    /* Programa */
    const char * p = "+-*/";

    for (int i=0; *p != '\0'; p++, i++)
	switch(*p){
	    case '+': pfun[i] = suma;
		      break;
            case '-': pfun[i] = resta;
		      break;
	    case '*': pfun[i] = multi;
		      break;
	    case '/': pfun[i] = divid;
		      break;
	}

    for (int i=0; i<4; i++)
	printf(" %.2lf operado con %.2lf = %.2lf\n", 
		op[0][i],  op[1][i], 
		pfun[i](op[0][i], op[1][i]) ); 
    

    return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

double suma (double op1, double op2){ return op1 + op2; }
double resta(double op1, double op2){ return op1 - op2; }
double multi(double op1, double op2){ return op1 * op2; }
double divid(double op1, double op2){ return op1 / op2; }

int main(int argc, char *argv[]) {

    double op[][4] = {
	{ 3, 7, 9, 10 },
	{ 3, 4, 9,  2 }
    };

    const char * p = "+-*/";

    for (int i=0; *p != '\0'; p++, i++){
	double resultado = 0.;
	switch(*p){
	    case '+': resultado = suma(op[0][i], op[1][i]);
		      break;
            case '-': resultado = resta(op[0][i], op[1][i]);
		      break;
	    case '*': resultado = multi(op[0][i], op[1][i]);
		      break;
	    case '/': resultado = divid(op[0][i], op[1][i]);
		      break;
	}
	printf(" %.2lf %c %.2lf = %.2lf\n", 
		op[0][i], *p, op[1][i], resultado); 
    }

    return EXIT_SUCCESS;
}

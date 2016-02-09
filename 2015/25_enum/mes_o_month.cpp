#include <stdio.h>
#include <stdlib.h>

enum Lenguaje {en, es};
enum Mes {enero, febrero, marzo, abril, mayo, junio, julio, agosto, septiembre, octubre, noviembre, diciembre };

const char *meses[2][12] ={
    {
        "january",
        "february",
        "march",
        "april",
        "may",
        "june",
        "july",
        "august",
        "september",
        "october",
        "november",
        "december"

    },
    {
        "enero",
        "febrero",
        "marzo",
        "abril",
        "mayo",
        "junio",
        "julio",
        "agosto",
        "septiembre",
        "octubre",
        "noviembre",
        "diciembre"
    }
};

int main(int argc, const char **argv){

    enum Lenguaje l = en;
    enum Mes cumple = noviembre;

    printf("Mi cumpleaños es en: %s\n",
            meses[l][cumple]);

    return EXIT_SUCCESS;
}

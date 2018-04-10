#include "clasificador.h"


bool esta_entre(char minimo, char maximo, char test){
    return test >= minimo && test <= maximo;
}

bool es_letra(char test){
    return esta_entre('a', 'z', test) || esta_entre('A', 'Z', test);
}

bool es_vocal(char test){
    test = (char) tolower(test);
     return test == 'a' || test == 'e' || test == 'i' || test == 'o' || test == 'u';
}

bool es_vocal2(char test){
    char vocales[] = "aeiou";

    test = (char) tolower(test);
    for (int i=0; vocales[i] != '\0'; i++)
        if (test == vocales[i])
            return true;
    return false;
}

bool es_numero(char test){
    return esta_entre('0', '9', test);
}

int clasifica(char test){
    if (es_letra(test))
        if (es_vocal(test))
            return vocal;
        else
            return consonante;
    if (es_numero(test))
        return numero;
    return err;
}


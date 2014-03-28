#include <stdio.h>
#include <stdlib.h>

bool es_divisible(int candidato, int divisor){
    if (divisor < 2)
        return false;
    return candidato % divisor == 0 || 
           es_divisible(candidato, divisor-1);
}

bool es_primo(int candidato){
    return !es_divisible(candidato, candidato-1);
}

int main(int argc, char *argv[]){
    
    int candidato = atoi(argv[1]);

    printf("%i %s es primo.\n", candidato, 
            es_primo(candidato ) ? "sí" : "no");

    return EXIT_SUCCESS;
}

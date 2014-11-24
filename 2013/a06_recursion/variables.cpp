#include <stdio.h>
#include <stdlib.h>

void a(){
    printf("Hola\n");
}

void f(){ 
    int variable;
    f(); 
    a();
}

int main(int argc, char *argv[]){

    f();
    return EXIT_SUCCESS;
}

/*
 *     +------+
 *     | main |
 *     |  o   |
 *     +--+---+
 *        |
 *        V
 *   +----------+
 *   |     f    |<+
 *   +----------+ X
 *   | variable | |
 *   |        o-+-+
 *   |    o-----+---+
 * +-+-> a()    |   |
 * | +----+-----+   |
 * |      |         |
 * |      V         |
 * | +----------+   |
 * | |     f    |<--+
 * | +----------+ 
 * | | variable | 
 * +||          |
 *   +----------+
 */

#include "general.h"

int _and(int op1, int op2) { return op1 & op2; }
int _or (int op1, int op2) { return op1 | op2; }
int _xor(int op1, int op2) { return op1 ^ op2; }


struct TOp new_op(int op1, int op2, char sym, int (*pf)(int, int) ) {
    struct TOp gnu;
    gnu.op1 = op1;
    gnu.op2 = op2;
    gnu.sym = sym;
    gnu.operacion = pf;

    return gnu;
}

struct TOp new_and(int op1, int op2) { return new_op(op1, op2, '&', &_and); }
struct TOp new_or(int op1, int op2) { return new_op(op1, op2, '|', &_or); }
struct TOp new_xor(int op1, int op2) { return new_op(op1, op2, '^', &_xor); }

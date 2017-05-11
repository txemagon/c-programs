#ifndef __GENERAL_H__
#define __GENERAL_H__

struct TOp {
    int op1;
    int op2;
    char sym;
    int (*operacion)(int, int);
};

#ifdef __cplusplus
extern "C" {
#endif

    struct TOp new_and(int, int);
    struct TOp new_or (int, int);
    struct TOp new_xor(int, int);

#ifdef __cplusplus
}
#endif

#endif

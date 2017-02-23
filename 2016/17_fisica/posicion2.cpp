#include <stdio.h>
#include <stdlib.h>

#define DIM    2
#define DELTA .1

#define X 0
#define Y 1

int main(int argc, char *argv[]){
    double t =   0.;
    double a[DIM] = {  0., -10. },
           v[DIM] = { 20.,  40. },
           s[DIM] = {  0.,   0. };


    /* Pasen los años */
    for (t=0.; s[Y]>=0. ; t+= DELTA){
        printf(" t[%.2lfs] => "
                "v: (%.2lf, %.2lf)m/s => "
                "s: (%.2lf, %.2lf)m\n", t, v[X], v[Y], s[X], s[Y]);
        v[Y] += a[Y] * DELTA;
        s[Y] += v[Y] * DELTA;

        v[X] += a[X] * DELTA;
        s[X] += v[X] * DELTA;
}



    return EXIT_SUCCESS;
}

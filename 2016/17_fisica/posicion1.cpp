#include <stdio.h>
#include <stdlib.h>

#define DELTA .1

int main(int argc, char *argv[]){
    double a_x =   0.;
    double v_x =  20.;
    double s_x =   0.;

    double a_y = -10.;
    double v_y =  40.;
    double s_y =   0.;

    double t =   0.;



    /* Pasen los años */
    for (t=0.; s_y>=0. ; t+= DELTA){
        printf(" t[%.2lfs] => " 
                "v: (%.2lf, %.2lf)m/s => " 
                "s: (%.2lf, %.2lf)m\n", t, v_x, v_y, s_x, s_y);
        v_y += a_y * DELTA;
        s_y += v_y * DELTA;

        v_x += a_x * DELTA;
        s_x += v_x * DELTA;
}



    return EXIT_SUCCESS;
}

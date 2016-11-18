#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int perfecto,
        sum = 0;

    system("clear");
    system("toilet --gay -fpagga PERFECTO");
    printf("Numero: ");
    scanf(" %i", &perfecto);

    for(int div=perfecto/2; div>0; div--)
        if ( perfecto%div == 0 )
            sum += div;

    printf("%i ", perfecto);
    if ( sum != perfecto )
        printf("no ");
    printf("es perfecto.\n");

    return EXIT_SUCCESS;
}

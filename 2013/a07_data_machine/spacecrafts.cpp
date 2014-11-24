#include <stdio.h>
#include <stdlib.h>

#define N   0x100
#define MAX 0x20

struct TWeapon{
    char name[MAX];
    double power;
    double length;
};

struct TCoords{
    double x;
    double y;
    double z;
};

struct TShip{
    int life;
    struct TCoords pos;
    struct TCoords vel;
    struct TCoords acc;
    struct TWeapon weapons[N];
    int current_weapon;
};

int main(int argc, char *argv[]){

    struct TShip my_ship;

    my_ship.life = 100;
    my_ship.pos.x = my_ship.pos.y = 100;
    my_ship.pos.z = 0;
   
    struct TShip enemy[100];

    return EXIT_SUCCESS;
}

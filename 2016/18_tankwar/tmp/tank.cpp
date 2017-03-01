#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

    const char *tanque[2] = { "\x30\x31\x32", "\x33\x34\x35" };
    const char *victan[3] = {
        "  \x40\x41 ",
        "\x42\x43\x44\x45\x46",
        "\x47\x48\x49\x4A\x4B"
    };

    printf("%s\n%s\n\n", tanque[0], tanque[1]);
    printf("%s\n%s\n%s\n\n", victan[0], victan[1], victan[2]);

    return EXIT_SUCCESS;
}

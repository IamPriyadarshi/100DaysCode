#include <stdio.h>

int main(void) {
    enum Test { X = 5, Y = 20, Z = -1 };
    printf("X=%d Y=%d Z=%d\n", X, Y, Z);
    return 0;
}

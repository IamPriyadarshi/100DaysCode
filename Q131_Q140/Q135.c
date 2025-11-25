#include <stdio.h>

int main(void) {
    enum Numbers { A = 10, B, C, D };
    printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
    return 0;
}

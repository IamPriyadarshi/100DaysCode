#include <stdio.h>

int main(void) {
    enum Light { RED, YELLOW, GREEN };
    enum Light signal;
    int x;
    if (scanf("%d", &x) != 1) return 0;
    signal = (enum Light)x;
    if (signal == RED) printf("Stop\n");
    else if (signal == YELLOW) printf("Wait\n");
    else if (signal == GREEN) printf("Go\n");
    else printf("Invalid\n");
    return 0;
}

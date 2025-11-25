#include <stdio.h>

int main(void) {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    int s;
    if (scanf("%d", &s) != 1) return 0;
    enum Status st = (enum Status)s;
    switch (st) {
        case SUCCESS: printf("Operation succeeded\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
        default: printf("Unknown status\n");
    }
    return 0;
}

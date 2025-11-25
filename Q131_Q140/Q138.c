#include <stdio.h>

int main(void) {
    enum Color { RED, GREEN, BLUE, YELLOW };
    const char *names[] = { "RED", "GREEN", "BLUE", "YELLOW" };
    for (int i = RED; i <= YELLOW; ++i) {
        printf("%s = %d\n", names[i], i);
    }
    return 0;
}

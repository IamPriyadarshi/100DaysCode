#include <stdio.h>

int main(void) {
    enum Choice { ADD=1, SUBTRACT, MULTIPLY };
    int ch;
    if (scanf("%d", &ch) != 1) return 0;
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;
    switch (ch) {
        case ADD: printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}

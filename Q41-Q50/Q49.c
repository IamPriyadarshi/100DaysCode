/* Q49: Print pattern
   5
   45
   345
   2345
   12345
*/
#include <stdio.h>

int main(void) {
    for (int row = 1; row <= 5; ++row) {
        int start = 6 - row; // row=1 ->5, row=5 ->1
        for (int v = start; v <= 5; ++v) printf("%d", v);
        putchar('\n');
    }
    return 0;
}

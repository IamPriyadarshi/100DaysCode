/* Q53: Print pattern
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>

int main(void) {
    int n = 5; /* number of rows in the upper pyramid */

    /* Upper pyramid */
    for (int i = 1; i <= n; ++i) {
        for (int s = 0; s < n - i; ++s) putchar(' ');
        for (int j = 0; j < 2 * i - 1; ++j) putchar('*');
        putchar('\n');
    }

    /* Lower inverted pyramid (excluding middle row) */
    for (int i = n - 1; i >= 1; --i) {
        for (int s = 0; s < n - i; ++s) putchar(' ');
        for (int j = 0; j < 2 * i - 1; ++j) putchar('*');
        putchar('\n');
    }

    return 0;
}

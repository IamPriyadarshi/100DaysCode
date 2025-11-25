/* Q54: Print diamond pattern

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>

int main(void) {
    int n = 4; /* height of top half */

    /* Top pyramid */
    for (int i = 1; i <= n; ++i) {
        for (int s = 0; s < n - i; ++s) putchar(' ');
        for (int j = 0; j < 2 * i - 1; ++j) putchar('*');
        putchar('\n');
    }

    /* Bottom inverted pyramid (excluding middle row) */
    for (int i = n - 1; i >= 1; --i) {
        for (int s = 0; s < n - i; ++s) putchar(' ');
        for (int j = 0; j < 2 * i - 1; ++j) putchar('*');
        putchar('\n');
    }

    return 0;
}

/* Q51: Print pattern
        5
       45
      345
     2345
    12345
*/
#include <stdio.h>

int main(void) {
    int n = 5;
    for (int row = 1; row <= n; ++row) {
        /* leading spaces */
        for (int s = 0; s < n - row; ++s) {
            putchar(' ');
        }
        /* numbers from (6 - row) to 5 */
        for (int num = 6 - row; num <= 5; ++num) {
            printf("%d", num);
        }
        putchar('\n');
    }
    return 0;
}

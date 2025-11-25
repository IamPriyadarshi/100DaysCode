/* Q52: Print pattern of vertical stars with blank lines between groups:

*

*
*
*

*
*
*
*
*

*
*
*

*

So groups have 1, 3, 5, 3, 1 stars respectively.
*/
#include <stdio.h>

int main(void) {
    int group_counts[] = {1, 3, 5, 3, 1};
    int groups = 5;

    for (int g = 0; g < groups; ++g) {
        for (int i = 0; i < group_counts[g]; ++i) {
            printf("*\n");
        }
        if (g != groups - 1) {
            /* blank line between groups */
            printf("\n");
        }
    }
    return 0;
}

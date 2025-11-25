/* Q56: Read and print elements of a one-dimensional array */
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int a[1000];
    if (n > 1000) n = 1000; /* basic safety */

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    putchar('\n');

    return 0;
}

/* Q58: Find maximum and minimum element in an array */
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int a[1000];
    if (n > 1000) n = 1000;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    int max = a[0], min = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("Maximum = %d\nMinimum = %d\n", max, min);
    return 0;
}

/* Q60: Count positive, negative, and zero elements in an array */
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

    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) pos++;
        else if (a[i] < 0) neg++;
        else zero++;
    }

    printf("Positive = %d\nNegative = %d\nZero = %d\n", pos, neg, zero);
    return 0;
}

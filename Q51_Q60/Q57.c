/* Q57: Find the sum of array elements */
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

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }

    printf("Sum of elements = %lld\n", sum);
    return 0;
}

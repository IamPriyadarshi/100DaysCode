/* Q62: Reverse an array in place (without extra space) */
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of elements (max 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) return 0;
    int a[100];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (int i = 0, j = n-1; i < j; ++i, --j) {
        int tmp = a[i]; a[i] = a[j]; a[j] = tmp;
    }
    printf("Reversed array:\n");
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

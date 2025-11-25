/* Q63: Merge two arrays (concatenate) */
#include <stdio.h>

int main(void) {
    int n1, n2;
    printf("Enter size of first array (max 100): ");
    if (scanf("%d", &n1) != 1 || n1 < 0 || n1 > 100) return 0;
    int a[200];
    if (n1 > 0) {
        printf("Enter %d elements:\n", n1);
        for (int i = 0; i < n1; ++i) scanf("%d", &a[i]);
    }
    printf("Enter size of second array (max 100): ");
    if (scanf("%d", &n2) != 1 || n2 < 0 || n2 > 100) return 0;
    if (n2 > 0) {
        printf("Enter %d elements:\n", n2);
        for (int i = 0; i < n2; ++i) scanf("%d", &a[n1 + i]);
    }
    int n = n1 + n2;
    printf("Merged array:\n");
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

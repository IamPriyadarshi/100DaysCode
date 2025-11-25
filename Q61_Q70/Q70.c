/* Q70: Rotate an array to the right by k positions */
#include <stdio.h>

void reverse(int a[], int l, int r) {
    while (l < r) { int t = a[l]; a[l] = a[r]; a[r] = t; l++; r--; }
}

int main(void) {
    int n;
    printf("Enter number of elements (max 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) return 0;
    int a[100];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int k;
    printf("Enter k (right rotations): ");
    if (scanf("%d", &k) != 1) return 0;
    k = k % n; if (k < 0) k += n;
    // reverse whole, reverse first k, reverse remaining n-k
    reverse(a, 0, n-1);
    reverse(a, 0, k-1);
    reverse(a, k, n-1);
    printf("Array after rotating right by %d:\n", k);
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

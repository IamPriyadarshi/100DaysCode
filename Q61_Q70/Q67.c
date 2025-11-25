/* Q67: Insert an element in an array at a given position (0-based) */
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of elements (max 99): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 99) return 0;
    int a[100];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int pos, val;
    printf("Enter position (0-based) and value to insert: ");
    if (scanf("%d %d", &pos, &val) != 2) return 0;
    if (pos < 0) pos = 0;
    if (pos > n) pos = n; // append if beyond end
    for (int i = n; i > pos; --i) a[i] = a[i-1];
    a[pos] = val; n++;
    printf("Array after insertion:\n");
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

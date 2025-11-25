/* Q68: Delete an element from an array (first occurrence) */
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of elements (max 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) return 0;
    int a[100];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int key;
    printf("Enter element to delete (first occurrence): ");
    if (scanf("%d", &key) != 1) return 0;
    int idx = -1;
    for (int i = 0; i < n; ++i) if (a[i] == key) { idx = i; break; }
    if (idx == -1) { printf("Element not found\n"); return 0; }
    for (int i = idx; i < n-1; ++i) a[i] = a[i+1];
    n--;
    printf("Array after deletion:\n");
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

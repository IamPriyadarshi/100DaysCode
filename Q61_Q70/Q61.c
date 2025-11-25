/* Q61: Linear search for an element in an array */
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of elements (max 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) return 0;
    int a[100];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int key;
    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) return 0;
    int pos = -1;
    for (int i = 0; i < n; ++i) if (a[i] == key) { pos = i; break; }
    if (pos == -1) printf("Element not found\n"); else printf("Element found at index %d (0-based)\n", pos);
    return 0;
}

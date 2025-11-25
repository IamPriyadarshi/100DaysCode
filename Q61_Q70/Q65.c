/* Q65: Binary search in a sorted array */
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of elements (sorted, max 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) return 0;
    int a[100];
    printf("Enter %d sorted integers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int key;
    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) return 0;
    int l = 0, r = n - 1, pos = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == key) { pos = mid; break; }
        else if (a[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    if (pos == -1) printf("Element not found\n"); else printf("Element found at index %d (0-based)\n", pos);
    return 0;
}

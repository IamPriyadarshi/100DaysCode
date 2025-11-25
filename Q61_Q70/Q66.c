/* Q66: Insert an element into a sorted array at appropriate position */
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of elements in sorted array (max 99): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 99) return 0;
    int a[100];
    printf("Enter %d sorted integers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int key;
    printf("Enter element to insert: ");
    if (scanf("%d", &key) != 1) return 0;
    int i = n - 1;
    while (i >= 0 && a[i] > key) {
        a[i+1] = a[i];
        i--;
    }
    a[i+1] = key;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; ++i) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

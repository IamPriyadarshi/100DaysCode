/* Q69: Find the second largest element in an array */
#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    printf("Enter number of elements (max 100): ");
    if (scanf("%d", &n) != 1 || n <= 1 || n > 100) return 0;
    int a[100];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int largest = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (a[i] > largest) { second = largest; largest = a[i]; }
        else if (a[i] > second && a[i] < largest) second = a[i];
    }
    if (second == INT_MIN) printf("No distinct second largest element\n");
    else printf("Second largest = %d\n", second);
    return 0;
}

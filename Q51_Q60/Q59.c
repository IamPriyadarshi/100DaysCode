/* Q59: Count even and odd numbers in an array */
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

    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) even++;
        else odd++;
    }

    printf("Even count = %d\nOdd count = %d\n", even, odd);
    return 0;
}

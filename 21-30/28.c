#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) return 0;

    // Use unsigned long long for larger product, but still may overflow for big n
    unsigned long long product = 1;
    int found = 0;
    for (int i = 2; i <= n; i += 2) {
        product *= (unsigned long long)i;
        found = 1;
    }

    if (!found) {
        printf("No even numbers in range 1 to %d\n", n);
    } else {
        printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    }
    return 0;
}

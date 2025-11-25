#include <stdio.h>

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) return 0;
    if (n < 0) {
        printf("Factorial not defined for negative numbers\n");
        return 0;
    }
    unsigned long long fact = 1;
    for (int i = 2; i <= n; ++i) fact *= (unsigned long long)i;
    printf("%d! = %llu\n", n, fact);
    return 0;
}

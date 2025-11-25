/* Q43: Check if a number is a strong number (sum of factorials of digits equals the number) */
#include <stdio.h>

long long factorial(int d) {
    long long f = 1;
    for (int i = 2; i <= d; ++i) f *= i;
    return f;
}

int main(void) {
    long long n;
    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &n) != 1) return 0;
    if (n < 0) { printf("Negative numbers are not considered\n"); return 0; }

    long long x = n;
    long long sum = 0;
    if (x == 0) sum = factorial(0); // 0! = 1, but 0 is not a strong number by usual definition
    while (x > 0) {
        int d = x % 10;
        sum += factorial(d);
        x /= 10;
    }

    if (sum == n) printf("%lld is a strong number\n", n);
    else printf("%lld is not a strong number\n", n);

    return 0;
}

/* Q55: Print all prime numbers from 1 to n */
#include <stdio.h>

int is_prime(long long x) {
    if (x <= 1) return 0;
    if (x == 2 || x == 3) return 1;
    if (x % 2 == 0) return 0;
    for (long long i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    long long n;
    printf("Enter n: ");
    if (scanf("%lld", &n) != 1) return 0;

    printf("Prime numbers from 1 to %lld:\n", n);
    for (long long i = 2; i <= n; ++i) {
        if (is_prime(i)) {
            printf("%lld ", i);
        }
    }
    putchar('\n');
    return 0;
}

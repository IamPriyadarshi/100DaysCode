/* Q34: Check if a number is prime */
#include <stdio.h>
#include <math.h>

int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) return 0;

    if (n <= 1) { printf("%lld is not prime\n", n); return 0; }
    if (n <= 3) { printf("%lld is prime\n", n); return 0; }
    if (n % 2 == 0) { printf("%lld is not prime\n", n); return 0; }

    long long limit = (long long) sqrt((double)n);
    for (long long i = 3; i <= limit; i += 2) {
        if (n % i == 0) { printf("%lld is not prime\n", n); return 0; }
    }
    printf("%lld is prime\n", n);
    return 0;
}

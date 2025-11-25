/* Q42: Check if a number is a perfect number */
#include <stdio.h>

int main(void) {
    long long n;
    printf("Enter a positive integer: ");
    if (scanf("%lld", &n) != 1) return 0;
    if (n <= 0) { printf("Please enter a positive integer\n"); return 0; }

    long long sum = 0;
    for (long long i = 1; i*i <= n; ++i) {
        if (n % i == 0) {
            if (i != n) sum += i;
            long long j = n / i;
            if (j != i && j != n) sum += j;
        }
    }

    if (sum == n) printf("%lld is a perfect number\n", n);
    else printf("%lld is not a perfect number\n", n);

    return 0;
}

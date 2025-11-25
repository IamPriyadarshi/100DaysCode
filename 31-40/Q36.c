/* Q36: Find HCF (GCD) of two numbers using Euclid's algorithm */
#include <stdio.h>
#include <stdlib.h>

long long gcd(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main(void) {
    long long a, b;
    printf("Enter two integers: ");
    if (scanf("%lld %lld", &a, &b) != 2) return 0;
    if (a == 0 && b == 0) { printf("GCD undefined for both zero\n"); return 0; }
    printf("GCD = %lld\n", gcd(a, b));
    return 0;
}

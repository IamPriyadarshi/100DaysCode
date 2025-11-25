/* Q37: Find LCM of two numbers (using GCD) */
#include <stdio.h>
#include <stdlib.h>

long long gcd_ll(long long a, long long b) {
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
    if (a == 0 || b == 0) { printf("LCM is 0 when either number is 0\n"); return 0; }
    long long g = gcd_ll(a, b);
    long long l = llabs(a / g * b); // avoid overflow: divide before multiply
    printf("LCM = %lld\n", l);
    return 0;
}

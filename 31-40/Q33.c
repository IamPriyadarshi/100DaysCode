/* Q33: Check if a number is an Armstrong number (generalized) */
#include <stdio.h>
#include <math.h>

int main(void) {
    long long n;
    printf("Enter a non-negative integer: ");
    if (scanf("%lld", &n) != 1) return 0;
    if (n < 0) {
        printf("Negative numbers are not considered Armstrong numbers\n");
        return 0;
    }

    long long temp = n;
    int digits = 0;
    if (temp == 0) digits = 1;
    while (temp > 0) { digits++; temp /= 10; }

    temp = n;
    long long sum = 0;
    while (temp > 0) {
        int d = temp % 10;
        long long p = 1;
        for (int i = 0; i < digits; ++i) p *= d;
        sum += p;
        temp /= 10;
    }

    if (sum == n) printf("%lld is an Armstrong number\n", n);
    else printf("%lld is not an Armstrong number\n", n);

    return 0;
}

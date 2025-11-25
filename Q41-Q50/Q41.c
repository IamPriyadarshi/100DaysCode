/* Q41: Swap first and last digit of a number */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) return 0;

    int negative = n < 0;
    unsigned long long x = negative ? - (unsigned long long)n : (unsigned long long)n;

    if (x < 10) {
        printf("Result: %lld\n", (long long)(negative ? -x : x));
        return 0;
    }

    unsigned long long last = x % 10;

    unsigned long long pow10 = 1;
    unsigned long long first = x;
    while (first >= 10) {
        first /= 10;
        pow10 *= 10;
    }

    unsigned long long middle = (x % pow10) / 10; // remove first and last digits
    unsigned long long result = last * pow10 + middle * 10 + first;

    if (negative) printf("Result: -%llu\n", result);
    else printf("Result: %llu\n", result);
    return 0;
}

/* Q31: Print binary representation of an integer */
#include <stdio.h>
#include <limits.h>

int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) return 0;

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int sign = 0;
    unsigned long long x;
    if (n < 0) { sign = 1; x = (unsigned long long)(-n); }
    else x = (unsigned long long)n;

    int bits[64];
    int idx = 0;
    while (x > 0 && idx < 64) {
        bits[idx++] = x % 2;
        x /= 2;
    }

    if (sign) printf("-");
    printf("Binary: ");
    for (int i = idx - 1; i >= 0; --i) putchar(bits[i] ? '1' : '0');
    putchar('\n');
    return 0;
}

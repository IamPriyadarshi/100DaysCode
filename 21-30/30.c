#include <stdio.h>

int main() {
    long long num;
    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) return 0;
    int negative = 0;
    if (num < 0) { negative = 1; num = -num; }

    long long rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }

    if (negative) rev = -rev;
    printf("Reversed number = %lld\n", rev);
    return 0;
}

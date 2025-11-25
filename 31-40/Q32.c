/* Q32: Check if a number is a palindrome */
#include <stdio.h>

int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) return 0;

    if (n < 0) {
        printf("%lld is not a palindrome (negative number)\n", n);
        return 0;
    }

    long long original = n, rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if (rev == original) printf("%lld is a palindrome\n", original);
    else printf("%lld is not a palindrome\n", original);

    return 0;
}

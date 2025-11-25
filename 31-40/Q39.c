/* Q39: Product of odd digits of a number */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) return 0;
    long long x = llabs(n);
    long long prod = 1;
    int found = 0;
    if (x == 0) {
        // 0 has no odd digits
        printf("No odd digits found\n");
        return 0;
    }
    while (x > 0) {
        int d = x % 10;
        if (d % 2 == 1) { prod *= d; found = 1; }
        x /= 10;
    }
    if (found) printf("Product of odd digits = %lld\n", prod);
    else printf("No odd digits found\n");
    return 0;
}

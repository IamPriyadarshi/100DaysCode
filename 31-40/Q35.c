/* Q35: Print all factors of a given number (in ascending order) */
#include <stdio.h>
#include <math.h>

int main(void) {
    long long n;
    printf("Enter an integer (>0): ");
    if (scanf("%lld", &n) != 1) return 0;
    if (n <= 0) { printf("Please enter a positive integer\n"); return 0; }

    printf("Factors of %lld: ", n);
    long long root = (long long) sqrt((double)n);
    // To keep it simple and correct for all n, we print by checking 1..n
    for (long long i = 1; i <= n; ++i) {
        if (n % i == 0) printf("%lld ", i);
    }
    printf("\n");
    return 0;
}

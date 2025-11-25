/* Q45: Sum of series 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
   General term for i starting at 1: (2*i) / (4*i - 1)
*/
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) { printf("Sum = 0\n"); return 0; }

    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        double num = 2.0 * i;
        double den = 4.0 * i - 1.0;
        sum += num / den;
    }

    printf("Sum = %.6f\n", sum);
    return 0;
}

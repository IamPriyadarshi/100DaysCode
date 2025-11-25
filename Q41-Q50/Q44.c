/* Q44: Sum of series 1 + 3/4 + 5/6 + 7/8 + ... up to n terms
   Here the first term is taken as 1 (not 1/2). Subsequent terms follow (2*i-1)/(2*i) for i>=2.
*/
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) { printf("Sum = 0\n"); return 0; }

    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        if (i == 1) sum += 1.0;
        else {
            double num = 2.0 * i - 1.0;
            double den = 2.0 * i;
            sum += num / den;
        }
    }

    printf("Sum = %.6f\n", sum);
    return 0;
}

/* Q64: Find the digit that occurs the most times in an integer */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) return 0;
    long long x = llabs(n);
    int freq[10] = {0};
    if (x == 0) freq[0] = 1;
    while (x > 0) {
        freq[x % 10]++;
        x /= 10;
    }
    int maxd = 0;
    for (int d = 1; d <= 9; ++d) {
        if (freq[d] > freq[maxd]) maxd = d;
    }
    printf("Digit that occurs most: %d (count = %d)\n", maxd, freq[maxd]);
    return 0;
}

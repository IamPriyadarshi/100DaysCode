#include <stdio.h>

int main(void) {
    int n, k; if (scanf("%d %d", &n, &k) != 2) return 0;
    int a[100000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    if (k > n || k <= 0) { printf("0\n"); return 0; }
    long long sum = 0;
    for (int i = 0; i < k; ++i) sum += a[i];
    long long maxsum = sum;
    for (int i = k; i < n; ++i) {
        sum += a[i] - a[i-k];
        if (sum > maxsum) maxsum = sum;
    }
    printf("%lld\n", maxsum);
    return 0;
}

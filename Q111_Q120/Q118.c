#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[200000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    long long total = (long long)n * (n + 1) / 2;
    long long sum = 0;
    for (int i = 0; i < n; ++i) sum += a[i];
    long long missing = total - sum;
    printf("%lld\n", missing);
    return 0;
}

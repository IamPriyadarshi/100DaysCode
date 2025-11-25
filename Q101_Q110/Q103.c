#include <stdio.h>

int main(void) {
    int n; if (scanf("%d", &n) != 1) return 0;
    int a[100000];
    long long total = 0;
    for (int i = 0; i < n; ++i) { scanf("%d", &a[i]); total += a[i]; }
    long long left = 0;
    for (int i = 0; i < n; ++i) {
        long long right = total - left - a[i];
        if (left == right) { printf("%d\n", i); return 0; }
        left += a[i];
    }
    printf("-1\n");
    return 0;
}

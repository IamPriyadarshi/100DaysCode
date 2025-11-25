#include <stdio.h>

int main(void) {
    int n; if (scanf("%d", &n) != 1) return 0;
    int a[100000];
    long long prefix[100000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    prefix[0] = a[0];
    for (int i = 1; i < n; ++i) prefix[i] = prefix[i-1] * a[i];
    long long suffix = 1;
    long long ans[100000];
    for (int i = n-1; i >= 0; --i) {
        long long left = (i==0) ? 1 : prefix[i-1];
        ans[i] = left * suffix;
        suffix = suffix * a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (i) printf(" %lld", ans[i]); else printf("%lld", ans[i]);
    }
    printf("\n");
    return 0;
}

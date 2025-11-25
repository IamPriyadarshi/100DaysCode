#include <stdio.h>
#include <stdlib.h>

int cmp(const void *p, const void *q) {
    int a = *(const int*)p;
    int b = *(const int*)q;
    return (a > b) - (a < b);
}

int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    int a[100000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    if (k < 1 || k > n) { printf("-1\n"); return 0; }
    printf("%d\n", a[k-1]);
    return 0;
}

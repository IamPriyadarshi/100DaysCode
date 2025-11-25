#include <stdio.h>

int ceil_index(int a[], int n, int x) {
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] >= x) { ans = m; r = m - 1; }
        else l = m + 1;
    }
    return ans;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[100000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int x; scanf("%d", &x);
    int idx = ceil_index(a, n, x);
    if (idx == -1) printf("-1\n"); else printf("%d\n", idx);
    return 0;
}

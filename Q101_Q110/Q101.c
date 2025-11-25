#include <stdio.h>

int lower_bound_first(int a[], int n, int target) {
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] >= target) { if (a[m] == target) ans = m; r = m - 1; }
        else l = m + 1;
    }
    return ans;
}

int lower_bound_last(int a[], int n, int target) {
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] <= target) { if (a[m] == target) ans = m; l = m + 1; }
        else r = m - 1;
    }
    return ans;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[100000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int target; scanf("%d", &target);
    int first = lower_bound_first(a, n, target);
    int last = lower_bound_last(a, n, target);
    if (first == -1) printf("-1 -1\n");
    else printf("%d %d\n", first, last);
    return 0;
}

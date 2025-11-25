#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[100000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    long long max_ending = a[0], max_so_far = a[0];
    for (int i = 1; i < n; ++i) {
        if (max_ending < 0) max_ending = a[i];
        else max_ending += a[i];
        if (max_ending > max_so_far) max_so_far = max_ending;
    }
    printf("%lld\n", max_so_far);
    return 0;
}

#include <stdio.h>

int main(void) {
    int n, target;
    if (scanf("%d %d", &n, &target) != 2) return 0;
    int a[100000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (a[i] + a[j] == target) { printf("%d %d\n", i, j); return 0; }
        }
    }
    printf("-1 -1\n");
    return 0;
}

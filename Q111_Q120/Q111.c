#include <stdio.h>

int main(void) {
    int n, k;
    if (scanf("%d %d", &n, &k) != 2) return 0;
    int a[100000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (int i = 0; i + k <= n; ++i) {
        int found = 0;
        for (int j = i; j < i + k; ++j) {
            if (a[j] < 0) { printf("%d", a[j]); found = 1; break; }
        }
        if (!found) printf("0");
        if (i + k < n) printf(" ");
    }
    printf("\n");
    return 0;
}

#include <stdio.h>

int main(void) {
    int m, n;
    if (scanf("%d %d", &m, &n) != 2) return 0;
    int a[100000], b[100000], c[200000];
    for (int i = 0; i < m; ++i) scanf("%d", &a[i]);
    for (int j = 0; j < n; ++j) scanf("%d", &b[j]);
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }
    while (i < m) c[k++] = a[i++];
    while (j < n) c[k++] = b[j++];
    for (int t = 0; t < k; ++t) {
        if (t) printf(" ");
        printf("%d", c[t]);
    }
    printf("\n");
    return 0;
}

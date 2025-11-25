#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[200000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    // Using visited array to detect duplicate in single iteration
    int maxv = 0;
    for (int i = 0; i < n; ++i) if (a[i] > maxv) maxv = a[i];
    int seen_size = maxv + 1;
    int *seen = (int*)malloc(sizeof(int) * seen_size);
    if (!seen) return 0;
    memset(seen, 0, sizeof(int) * seen_size);
    int dup = -1;
    for (int i = 0; i < n; ++i) {
        if (seen[a[i]]) { dup = a[i]; break; }
        seen[a[i]] = 1;
    }
    if (dup == -1) printf("-1\n"); else printf("%d\n", dup);
    free(seen);
    return 0;
}

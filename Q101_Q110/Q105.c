#include <stdio.h>

int main(void) {
    int n; if (scanf("%d", &n) != 1) return 0;
    int a[100000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int candidate = 0, count = 0;
    for (int i = 0; i < n; ++i) {
        if (count == 0) { candidate = a[i]; count = 1; }
        else { if (a[i] == candidate) count++; else count--; }
    }
    int occ = 0;
    for (int i = 0; i < n; ++i) if (a[i] == candidate) occ++;
    if (occ > n/2) printf("%d\n", candidate); else printf("-1\n");
    return 0;
}

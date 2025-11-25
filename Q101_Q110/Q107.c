#include <stdio.h>

int main(void) {
    int n; if (scanf("%d", &n) != 1) return 0;
    int a[100000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (int i = 0; i < n; ++i) {
        int pg = -1;
        for (int j = i-1; j >= 0; --j) if (a[j] > a[i]) { pg = a[j]; break; }
        if (i) printf(",%d", pg); else printf("%d", pg);
    }
    printf("\n");
    return 0;
}

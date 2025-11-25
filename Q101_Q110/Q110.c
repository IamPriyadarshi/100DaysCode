#include <stdio.h>

int main(void) {
    int n, k; if (scanf("%d %d", &n, &k) != 2) return 0;
    int a[100000];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    if (k <= 0 || k > n) return 0;
    int deque[100000];
    int front = 0, back = -1;
    for (int i = 0; i < n; ++i) {
        while (front <= back && deque[front] <= i - k) front++;
        while (front <= back && a[deque[back]] <= a[i]) back--;
        deque[++back] = i;
        if (i >= k - 1) {
            if (i == k - 1) printf("%d", a[deque[front]]);
            else printf(" %d", a[deque[front]]);
        }
    }
    printf("\n");
    return 0;
}

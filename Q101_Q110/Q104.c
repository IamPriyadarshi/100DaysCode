#include <stdio.h>
#include <math.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    long long t = n * (n + 1) / 2;
    long long s = (long long) sqrt((double) t);
    if (s * s == t && s <= n) printf("%lld\n", s);
    else printf("-1\n");
    return 0;
}

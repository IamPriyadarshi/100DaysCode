#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    // remove newline
    int n = strlen(s);
    if (n > 0 && s[n-1] == '\n') s[--n] = '\0';
    int last_index[256];
    for (int i = 0; i < 256; ++i) last_index[i] = -1;
    int maxlen = 0, start = 0;
    for (int i = 0; i < n; ++i) {
        unsigned char c = s[i];
        if (last_index[c] >= start) start = last_index[c] + 1;
        last_index[c] = i;
        int len = i - start + 1;
        if (len > maxlen) maxlen = len;
    }
    printf("%d\n", maxlen);
    return 0;
}

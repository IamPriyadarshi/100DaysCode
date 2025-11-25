#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100000], t[100000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    if (!fgets(t, sizeof(t), stdin)) return 0;
    int cnt[26] = {0};
    int i;
    for (i = 0; s[i]; ++i) if (s[i] >= 'a' && s[i] <= 'z') cnt[s[i]-'a']++;
    for (i = 0; t[i]; ++i) if (t[i] >= 'a' && t[i] <= 'z') cnt[t[i]-'a']--;
    int ok = 1;
    for (i = 0; i < 26; ++i) if (cnt[i] != 0) { ok = 0; break; }
    if (ok) printf("Anagram\n"); else printf("Not Anagram\n");
    return 0;
}

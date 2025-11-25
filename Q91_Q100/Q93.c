/* Q93: Check if two strings are anagrams (case-insensitive, ignore spaces) */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s1[1000], s2[1000];
    printf("Enter first string: ");
    if (!fgets(s1, sizeof(s1), stdin)) return 0;
    printf("Enter second string: ");
    if (!fgets(s2, sizeof(s2), stdin)) return 0;
    int f1[26]={0}, f2[26]={0};
    for (int i=0;s1[i];i++) {
        if (isalpha((unsigned char)s1[i])) f1[tolower(s1[i])-'a']++;
    }
    for (int i=0;s2[i];i++) {
        if (isalpha((unsigned char)s2[i])) f2[tolower(s2[i])-'a']++;
    }
    int ok=1;
    for (int i=0;i<26;i++) if (f1[i]!=f2[i]) { ok=0; break; }
    if (ok) printf("Anagram\n"); else printf("Not anagram\n");
    return 0;
}

/* Q94: Find the longest word in a sentence */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[1000];
    printf("Enter a sentence: ");
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int n = strlen(s);
    if (n>0 && s[n-1]=='\n') s[--n]=0;
    int maxlen = 0, maxstart = 0;
    int i = 0;
    while (i < n) {
        while (i < n && isspace((unsigned char)s[i])) i++;
        int start = i;
        int len = 0;
        while (i < n && !isspace((unsigned char)s[i])) { i++; len++; }
        if (len > maxlen) { maxlen = len; maxstart = start; }
    }
    if (maxlen == 0) { printf("No words found\n"); return 0; }
    char word[1000]; strncpy(word, s + maxstart, maxlen); word[maxlen]=0;
    printf("Longest word: %s\n", word);
    return 0;
}

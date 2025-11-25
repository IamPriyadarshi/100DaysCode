/* Q96: Reverse each word in a sentence without changing order */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[1000];
    printf("Enter a sentence: ");
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int n = strlen(s);
    if (n>0 && s[n-1]=='\n') s[--n]=0;
    int i = 0;
    while (i < n) {
        while (i < n && isspace((unsigned char)s[i])) { putchar(s[i]); i++; }
        int start = i;
        while (i < n && !isspace((unsigned char)s[i])) i++;
        int end = i - 1;
        for (int j = end; j >= start; --j) putchar(s[j]);
    }
    putchar('\n');
    return 0;
}

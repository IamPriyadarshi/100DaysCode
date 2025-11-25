/* Q98: Print initials with surname in full.
   For name like "john ronald reuel tolkien" -> J.R.R Tolkien */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char s[500];
    printf("Enter full name: ");
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int n = strlen(s); if (n>0 && s[n-1]=='\n') s[--n]=0;
    // parse words
    char words[50][50]; int wc=0;
    int i=0;
    while (i < n) {
        while (i < n && isspace((unsigned char)s[i])) i++;
        if (i >= n) break;
        int j=0;
        while (i < n && !isspace((unsigned char)s[i]) && j<49) words[wc][j++] = s[i++];
        words[wc][j]=0; wc++;
    }
    if (wc==0) return 0;
    for (int k=0;k<wc-1;k++) {
        printf("%c.", toupper((unsigned char)words[k][0]));
    }
    printf(" %s\n", words[wc-1]);
    return 0;
}

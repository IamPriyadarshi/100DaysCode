/* Q100: Print all substrings of a string */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[500];
    printf("Enter a string: ");
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int n = strlen(s);
    if (n>0 && s[n-1]=='\n') s[--n]=0;
    for (int i=0;i<n;i++) {
        for (int len=1; i+len<=n; len++) {
            for (int k=0;k<len;k++) putchar(s[i+k]);
            putchar('\n');
        }
    }
    return 0;
}

/* Q97: Print initials of a name */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char s[500];
    printf("Enter full name: ");
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int n = strlen(s); if (n>0 && s[n-1]=='\n') s[--n]=0;
    int i=0; int first=1;
    while (i < n) {
        while (i < n && isspace((unsigned char)s[i])) i++;
        if (i < n) {
            if (!first) printf(".");
            printf("%c", toupper((unsigned char)s[i]));
            first = 0;
            while (i < n && !isspace((unsigned char)s[i])) i++;
        }
    }
    printf("\n");
    return 0;
}

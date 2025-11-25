#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int n = strlen(s);
    if (n>0 && s[n-1]=='\n') s[--n]=0;
    int i = 0;
    while (i < n && isspace((unsigned char)s[i])) i++;
    for (int j = 0; j < n; ++j) s[j] = tolower((unsigned char)s[j]);
    if (i < n) s[i] = toupper((unsigned char)s[i]);
    // write to file
    FILE *f = fopen("sentence_case.txt", "w");
    if (!f) return 0;
    fprintf(f, "%s\n", s);
    fclose(f);
    printf("Output written to sentence_case.txt\n");
    return 0;
}

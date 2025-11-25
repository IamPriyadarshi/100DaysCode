/* Q91: Remove all vowels from a string */
#include <stdio.h>
#include <string.h>

int is_vowel(char c) {
    if (c>='A' && c<='Z') c = c - 'A' + 'a';
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main(void) {
    char s[1000];
    printf("Enter a string: ");
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int n = strlen(s);
    if (n>0 && s[n-1]=='\n') s[--n]=0;
    char out[1000]; int j=0;
    for (int i=0;i<n;i++) {
        if (!is_vowel(s[i])) out[j++]=s[i];
    }
    out[j]=0;
    printf("Result: %s\n", out);
    return 0;
}

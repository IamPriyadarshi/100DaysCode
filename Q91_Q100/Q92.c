/* Q92: Find first repeating lowercase alphabet in a string */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    printf("Enter a string: ");
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int freq[26] = {0};
    int n = strlen(s);
    for (int i=0;i<n;i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') freq[c - 'a']++;
    }
    for (int i=0;i<n;i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z' && freq[c - 'a'] > 1) {
            printf("First repeating lowercase alphabet: %c\n", c);
            return 0;
        }
    }
    printf("No repeating lowercase alphabet found\n");
    return 0;
}

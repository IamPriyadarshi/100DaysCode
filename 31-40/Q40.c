/* Q40: 1's complement of a binary number (input as string to preserve leading zeros) */
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1024];
    printf("Enter a binary number (e.g. 0101): ");
    if (scanf("%1023s", s) != 1) return 0;
    size_t n = strlen(s);
    // Validate and compute complement
    for (size_t i = 0; i < n; ++i) {
        if (s[i] != '0' && s[i] != '1') {
            printf("Invalid binary number (found '%c')\n", s[i]);
            return 0;
        }
    }
    printf("1's complement: ");
    for (size_t i = 0; i < n; ++i) putchar(s[i] == '0' ? '1' : '0');
    putchar('\n');
    return 0;
}

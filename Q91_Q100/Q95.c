#include <stdio.h>

int string_length(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

int is_rotation(char s1[], char s2[]) {
    int n1 = string_length(s1);
    int n2 = string_length(s2);
    if (n1 != n2) return 0;

    for (int shift = 0; shift < n1; shift++) {
        int match = 1;
        for (int i = 0; i < n1; i++) {
            if (s1[(i + shift) % n1] != s2[i]) {
                match = 0;
                break;
            }
        }
        if (match) return 1;
    }
    return 0;
}

int main() {
    char s1[200], s2[200];
    fgets(s1, 200, stdin);
    fgets(s2, 200, stdin);

    int l1 = string_length(s1);
    if (s1[l1-1] == '\n') s1[l1-1] = '\0';
    int l2 = string_length(s2);
    if (s2[l2-1] == '\n') s2[l2-1] = '\0';

    if (is_rotation(s1, s2))
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char filename[256];
    printf("Enter filename: ");
    if (!fgets(filename, sizeof(filename), stdin)) return 0;
    filename[strcspn(filename, "\n")] = 0;
    FILE *f = fopen(filename, "r");
    if (!f) { printf("Cannot open file\n"); return 0; }
    int ch;
    long long vowels = 0, consonants = 0;
    while ((ch = fgetc(f)) != EOF) {
        if (isalpha(ch)) {
            char c = tolower(ch);
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vowels++;
            else consonants++;
        }
    }
    fclose(f);
    printf("Vowels=%lld Consonants=%lld\n", vowels, consonants);
    return 0;
}

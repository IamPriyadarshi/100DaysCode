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
    long long chars = 0, words = 0, lines = 0;
    int in_word = 0;
    while ((ch = fgetc(f)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) {
            if (in_word) { words++; in_word = 0; }
        } else {
            in_word = 1;
        }
    }
    if (in_word) words++;
    fclose(f);
    printf("Characters: %lld\nWords: %lld\nLines: %lld\n", chars, words, lines);
    return 0;
}

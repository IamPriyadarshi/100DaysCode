#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *fin = fopen("input.txt", "r");
    if (!fin) { printf("Cannot open input.txt\n"); return 0; }
    FILE *fout = fopen("output.txt", "w");
    if (!fout) { fclose(fin); printf("Cannot open output.txt\n"); return 0; }
    int ch;
    while ((ch = fgetc(fin)) != EOF) {
        if (ch >= 'a' && ch <= 'z') ch = ch - 'a' + 'A';
        fputc(ch, fout);
    }
    fclose(fin); fclose(fout);
    printf("Converted lowercase to uppercase and wrote to output.txt\n");
    return 0;
}

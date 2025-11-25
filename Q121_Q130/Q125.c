#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[256];
    printf("Enter filename to append: ");
    if (!fgets(filename, sizeof(filename), stdin)) return 0;
    filename[strcspn(filename, "\n")] = 0;
    FILE *f = fopen(filename, "a");
    if (!f) { printf("Cannot open file\n"); return 0; }
    printf("Enter a line to append: ");
    char line[1024];
    // consume leftover newline
    getchar();
    if (!fgets(line, sizeof(line), stdin)) { fclose(f); return 0; }
    fprintf(f, "%s", line);
    fclose(f);
    printf("Appended to %s\n", filename);
    return 0;
}

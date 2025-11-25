#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[256];
    printf("Enter filename: ");
    if (!fgets(filename, sizeof(filename), stdin)) return 0;
    filename[strcspn(filename, "\n")] = 0;
    FILE *f = fopen(filename, "r");
    if (!f) { printf("Error: file does not exist or cannot be opened\n"); return 0; }
    char buf[512];
    while (fgets(buf, sizeof(buf), f)) fputs(buf, stdout);
    fclose(f);
    return 0;
}

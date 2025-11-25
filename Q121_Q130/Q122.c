#include <stdio.h>

int main(void) {
    char line[512];
    FILE *f = fopen("info.txt", "r");
    if (!f) { printf("Failed to open info.txt\n"); return 0; }
    while (fgets(line, sizeof(line), f)) {
        fputs(line, stdout);
    }
    fclose(f);
    return 0;
}

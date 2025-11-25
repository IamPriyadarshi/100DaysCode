#include <stdio.h>

int main(void) {
    char src[256], dst[256];
    printf("Enter source filename: ");
    if (!fgets(src, sizeof(src), stdin)) return 0;
    printf("Enter destination filename: ");
    if (!fgets(dst, sizeof(dst), stdin)) return 0;
    src[strcspn(src, "\n")] = 0;
    dst[strcspn(dst, "\n")] = 0;
    FILE *fs = fopen(src, "r");
    if (!fs) { printf("Cannot open source\n"); return 0; }
    FILE *fd = fopen(dst, "w");
    if (!fd) { fclose(fs); printf("Cannot open destination\n"); return 0; }
    int ch;
    while ((ch = fgetc(fs)) != EOF) fputc(ch, fd);
    fclose(fs); fclose(fd);
    printf("Copied %s -> %s\n", src, dst);
    return 0;
}

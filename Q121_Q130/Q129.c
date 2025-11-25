#include <stdio.h>

int main(void) {
    char filename[256];
    printf("Enter filename containing integers: ");
    if (!fgets(filename, sizeof(filename), stdin)) return 0;
    filename[strcspn(filename, "\n")] = 0;
    FILE *f = fopen(filename, "r");
    if (!f) { printf("Cannot open file\n"); return 0; }
    long long sum = 0;
    long long count = 0;
    long long x;
    while (fscanf(f, "%lld", &x) == 1) {
        sum += x; count++;
    }
    fclose(f);
    if (count == 0) { printf("No integers found\n"); return 0; }
    double avg = (double)sum / (double)count;
    printf("Sum=%lld Average=%.6f\n", sum, avg);
    return 0;
}

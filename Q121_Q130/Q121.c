#include <stdio.h>

int main(void) {
    char name[200];
    int age;
    printf("Enter name: ");
    if (!fgets(name, sizeof(name), stdin)) return 0;
    // remove newline
    name[strcspn(name, "\n")] = 0;
    printf("Enter age: ");
    if (scanf("%d", &age) != 1) return 0;

    FILE *f = fopen("info.txt", "w");
    if (!f) { perror("fopen"); return 0; }
    fprintf(f, "Name: %s\nAge: %d\n", name, age);
    fclose(f);
    printf("Data successfully saved to info.txt\n");
    return 0;
}

#include <stdio.h>

int main(void) {
    char filename[256] = "students.txt";
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1) return 0;
    FILE *f = fopen(filename, "w");
    if (!f) { printf("Cannot open students.txt for writing\n"); return 0; }
    for (int i = 0; i < n; ++i) {
        char name[100]; int roll; int marks;
        printf("Enter name roll marks: ");
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(f, "%s %d %d\n", name, roll, marks);
    }
    fclose(f);
    // read and display
    f = fopen(filename, "r");
    if (!f) { printf("Cannot open students.txt for reading\n"); return 0; }
    char name[100]; int roll, marks;
    while (fscanf(f, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s Roll: %d Marks: %d\n", name, roll, marks);
    }
    fclose(f);
    return 0;
}

#include <stdio.h>
typedef struct { char name[50]; int roll_no; float marks; } Student;
int main() {
    Student a[5];
    for (int i=0;i<5;++i) {
        printf("Student %d name: ", i+1);
        if (i==0) { int c = getchar(); if (c!='\n' && c!=EOF) ungetc(c, stdin); }
        if (!fgets(a[i].name, sizeof a[i].name, stdin)) return 0;
        for (int k=0;a[i].name[k];++k) if (a[i].name[k]=='\n') { a[i].name[k]='\0'; break; }
        printf("Roll: "); if (scanf("%d", &a[i].roll_no)!=1) return 0;
        printf("Marks: "); if (scanf("%f", &a[i].marks)!=1) return 0;
        getchar();
    }
    int top = 0;
    for (int i=1;i<5;++i) if (a[i].marks > a[top].marks) top = i;
    printf("\nTop Student: %s (Roll %d) Marks: %.2f\n", a[top].name, a[top].roll_no, a[top].marks);
    return 0;
}

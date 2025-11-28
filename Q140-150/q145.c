#include <stdio.h>
typedef struct { char name[50]; int roll; float marks; } Student;
Student top_student(Student arr[], int n) {
    int t = 0; for (int i=1;i<n;++i) if (arr[i].marks > arr[t].marks) t = i;
    return arr[t];
}
int main() {
    Student s[3];
    for (int i=0;i<3;++i) {
        printf("Name: ");
        if (i==0) { int c = getchar(); if (c!='\n' && c!=EOF) ungetc(c, stdin); }
        if (!fgets(s[i].name, sizeof s[i].name, stdin)) return 0;
        for (int k=0;s[i].name[k];++k) if(s[i].name[k]=='\n'){s[i].name[k]='\0';break;}
        printf("Roll: "); if (scanf("%d", &s[i].roll)!=1) return 0;
        printf("Marks: "); if (scanf("%f", &s[i].marks)!=1) return 0;
        getchar();
    }
    Student top = top_student(s,3);
    printf("Top -> %s (Roll %d) Marks %.2f\n", top.name, top.roll, top.marks);
    return 0;
}

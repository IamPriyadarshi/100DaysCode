#include <stdio.h>
typedef struct { char name[50]; int roll_no; float marks; } Student;
int main() {
    Student s;
    printf("Enter name: ");
    if (!fgets(s.name, sizeof s.name, stdin)) return 0;
    for (int i=0; s.name[i]; ++i) if (s.name[i]=='\n') { s.name[i]='\0'; break; }
    printf("Enter roll no: "); if (scanf("%d", &s.roll_no)!=1) return 0;
    printf("Enter marks: "); if (scanf("%f", &s.marks)!=1) return 0;
    printf("\nStudent Data:\nName: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
    return 0;
}

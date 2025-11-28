#include <stdio.h>
typedef enum { MALE, FEMALE, OTHER } Gender;
typedef struct { char name[50]; Gender g; } Person;
int main() {
    Person p;
    printf("Enter name: ");
    if (!fgets(p.name, sizeof p.name, stdin)) return 0;
    /* remove newline */
    for (int i=0; p.name[i]; ++i) if (p.name[i]=='\n') { p.name[i]='\0'; break; }
    int ge;
    printf("Enter gender (0=MALE,1=FEMALE,2=OTHER): ");
    if(scanf("%d", &ge)!=1) return 0;
    p.g = (Gender)ge;
    printf("Name: %s\nGender: ", p.name);
    if (p.g==MALE) printf("MALE\n");
    else if (p.g==FEMALE) printf("FEMALE\n");
    else printf("OTHER\n");
    return 0;
}

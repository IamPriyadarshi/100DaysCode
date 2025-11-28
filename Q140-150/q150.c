#include <stdio.h>
typedef struct { char name[50]; int age; } Person;
int main(){
    Person p = {"Alice", 30};
    Person *pp = &p;
    printf("Before: %s, age %d\n", pp->name, pp->age);
    /* modify using -> */
    pp->age = 31;
    printf("After: %s, age %d\n", pp->name, pp->age);
    return 0;
}

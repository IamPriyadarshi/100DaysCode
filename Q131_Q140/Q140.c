#include <stdio.h>

int main(void) {
    enum Gender { MALE, FEMALE, OTHER };
    struct Person { char name[100]; enum Gender g; };
    struct Person p;
    if (scanf("%s %d", p.name, (int*)&p.g) != 2) return 0;
    if (p.g == MALE) printf("%s is Male\n", p.name);
    else if (p.g == FEMALE) printf("%s is Female\n", p.name);
    else if (p.g == OTHER) printf("%s is Other\n", p.name);
    else printf("Unknown gender\n");
    return 0;
}

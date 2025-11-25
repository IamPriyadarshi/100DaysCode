#include <stdio.h>

int main(void) {
    enum Role { ADMIN, USER, GUEST };
    int r;
    if (scanf("%d", &r) != 1) return 0;
    enum Role role = (enum Role)r;
    if (role == ADMIN) printf("Welcome Admin\n");
    else if (role == USER) printf("Welcome User\n");
    else if (role == GUEST) printf("Welcome Guest\n");
    else printf("Unknown role\n");
    return 0;
}

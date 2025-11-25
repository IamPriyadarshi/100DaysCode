#include <stdio.h>

int main(void) {
    enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
    const char *names[] = { "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY" };
    for (int i = SUNDAY; i <= SATURDAY; ++i) {
        printf("%s = %d\n", names[i], i);
    }
    return 0;
}

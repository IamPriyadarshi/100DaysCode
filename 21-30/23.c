#include <stdio.h>

int main() {
    int days;
    printf("Enter number of days late: ");
    if (scanf("%d", &days) != 1) return 0;

    if (days > 30) {
        printf("Membership Cancelled\n");
        return 0;
    }

    int fine = 0;
    if (days <= 5) {
        fine = days * 2;
    } else if (days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
    } else { // days between 11 and 30
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    }

    printf("Fine = \u20B9%d\n", fine); // \u20B9 is the rupee symbol
    return 0;
}

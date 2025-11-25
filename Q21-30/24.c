#include <stdio.h>

int main() {
    int units;
    printf("Enter units consumed: ");
    if (scanf("%d", &units) != 1) return 0;

    double bill = 0;
    int remaining = units;

    if (remaining > 100) {
        bill += 100 * 5;
        remaining -= 100;
    } else {
        bill += remaining * 5;
        remaining = 0;
    }

    if (remaining > 0) {
        if (remaining > 100) {
            bill += 100 * 7;
            remaining -= 100;
        } else {
            bill += remaining * 7;
            remaining = 0;
        }
    }

    if (remaining > 0) {
        if (remaining > 100) {
            bill += 100 * 10;
            remaining -= 100;
        } else {
            bill += remaining * 10;
            remaining = 0;
        }
    }

    if (remaining > 0) {
        bill += remaining * 12;
    }

    printf("Electricity bill for %d units = \u20B9%.2f\n", units, bill);
    return 0;
}

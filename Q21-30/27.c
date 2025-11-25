#include <stdio.h>

int main() {
    int n;
    printf("Enter how many odd numbers to sum (n): ");
    if (scanf("%d", &n) != 1) return 0;
    int sum = 0;
    int count = 0;
    int num = 1;
    while (count < n) {
        sum += num;
        num += 2;
        count++;
    }
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}

#include <stdio.h>

int main() {
    double cp, sp;
    printf("Enter cost price: ");
    if (scanf("%lf", &cp) != 1) return 0;
    printf("Enter selling price: ");
    if (scanf("%lf", &sp) != 1) return 0;

    if (sp > cp) {
        double profit = sp - cp;
        double percent = (profit / cp) * 100.0;
        printf("Profit = %.2f\nProfit Percentage = %.2f%%\n", profit, percent);
    } else if (cp > sp) {
        double loss = cp - sp;
        double percent = (loss / cp) * 100.0;
        printf("Loss = %.2f\nLoss Percentage = %.2f%%\n", loss, percent);
    } else {
        printf("No profit, no loss\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
    char op;
    double a, b;
    printf("Enter operation (+ - * / %%) and two operands (e.g. + 5 3): ");
    if (scanf(" %c %lf %lf", &op, &a, &b) != 3) return 0;

    switch (op) {
        case '+': printf("%.2f + %.2f = %.2f\n", a, b, a + b); break;
        case '-': printf("%.2f - %.2f = %.2f\n", a, b, a - b); break;
        case '*': printf("%.2f * %.2f = %.2f\n", a, b, a * b); break;
        case '/':
            if (b == 0) printf("Error: Division by zero\n");
            else printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            break;
        case '%':
            // modulo works on integers; cast to long long
            {
                long long ai = (long long)a;
                long long bi = (long long)b;
                if (bi == 0) printf("Error: Modulo by zero\n");
                else printf("%lld %% %lld = %lld\n", ai, bi, ai % bi);
            }
            break;
        default:
            printf("Unsupported operation\n");
    }
    return 0;
}

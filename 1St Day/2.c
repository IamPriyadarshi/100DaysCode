//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main (){
    float num1,num2;
    printf("Enter the 1st no :");
    scanf("%f", &num1);
    printf("Enter the 2nd no :");
    scanf("%f", &num2);
    printf("Sum = %f \n", num1 + num2);

    printf("Product = %f \n", num1 * num2);

    printf("Difference = %f \n " , num1 - num2);

    printf("Quotient = %f", num1/num2);

return 0;

}
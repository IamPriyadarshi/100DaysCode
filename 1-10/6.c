//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main (){
    int a , b , swap;
    printf("Enter the 1st no : ");
    scanf("%d",&a);
    printf("Enter the 2nd no : ");
    scanf("%d",&b);
    swap = a ;
    a = b ;
    b = swap;

    printf("After swapping \n");
    printf("a = %d",a);
    printf("b = %d",b);

    return 0;


}
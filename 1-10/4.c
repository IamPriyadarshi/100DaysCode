//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
#define PI 3.14

int main(){
    float radius, area, circumference;
    printf("Enter the radius :");
    scanf("%f",&radius);
    area = PI * radius * radius ;
    printf("Area = %f \n", area);
    circumference = 2 * PI * radius;
    printf ("Circumference = %f \n", circumference);
 return 0;
}
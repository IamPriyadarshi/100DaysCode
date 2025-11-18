//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main (){
    int len,br;


    printf("Enter the Length :");
    scanf("%d", &len);

    printf("Enter the Breadth:");
    scanf("%d" , &br);

    printf("Area : %d \n", len * br);

    return 0;
}
/* Q72: Sum of all elements in a matrix */
#include <stdio.h>
int main(void) {
    int r,c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d",&r,&c)!=2) return 0;
    if (r<=0||c<=0||r>50||c>50) return 0;
    long long sum=0;
    int x;
    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++) for(int j=0;j<c;j++){ scanf("%d",&x); sum+=x; }
    printf("Sum of all elements = %lld\n", sum);
    return 0;
}

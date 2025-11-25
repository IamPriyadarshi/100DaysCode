/* Q78: Sum of main diagonal elements for a square matrix */
#include <stdio.h>
int main(void){
    int n;
    printf("Enter size of square matrix (n): ");
    if (scanf("%d",&n)!=1) return 0;
    if (n<=0||n>50) return 0;
    long long sum=0;
    int x;
    printf("Enter matrix elements row-wise:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){ scanf("%d",&x); if(i==j) sum+=x; }
    }
    printf("Sum of main diagonal = %lld\n", sum);
    return 0;
}

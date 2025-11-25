/* Q73: Sum of each row of a matrix and store in an array */
#include <stdio.h>
int main(void){
    int r,c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d",&r,&c)!=2) return 0;
    if (r<=0||c<=0||r>50||c>50) return 0;
    int a[50][50];
    long long rowSum[50]={0};
    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){ scanf("%d",&a[i][j]); rowSum[i]+=a[i][j]; }
    }
    printf("Row sums:\n");
    for(int i=0;i<r;i++) printf("Row %d sum = %lld\n", i, rowSum[i]);
    return 0;
}

/* Q75: Add two matrices */
#include <stdio.h>
int main(void){
    int r,c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d",&r,&c)!=2) return 0;
    if (r<=0||c<=0||r>50||c>50) return 0;
    int A[50][50], B[50][50];
    printf("Enter first matrix elements:\n");
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&A[i][j]);
    printf("Enter second matrix elements:\n");
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&B[i][j]);
    printf("Sum matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) printf("%d ", A[i][j]+B[i][j]);
        printf("\n");
    }
    return 0;
}

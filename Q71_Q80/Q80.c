/* Q80: Multiply two matrices */
#include <stdio.h>
int main(void){
    int r1,c1,r2,c2;
    printf("Enter rows and cols of first matrix: ");
    if (scanf("%d %d",&r1,&c1)!=2) return 0;
    printf("Enter rows and cols of second matrix: ");
    if (scanf("%d %d",&r2,&c2)!=2) return 0;
    if (r1<=0||c1<=0||r2<=0||c2<=0|| r1>50||c1>50||r2>50||c2>50) return 0;
    if (c1 != r2) { printf("Matrices cannot be multiplied: columns of A must equal rows of B\n"); return 0; }
    int A[50][50], B[50][50], C[50][50];
    printf("Enter first matrix elements:\n");
    for(int i=0;i<r1;i++) for(int j=0;j<c1;j++) scanf("%d",&A[i][j]);
    printf("Enter second matrix elements:\n");
    for(int i=0;i<r2;i++) for(int j=0;j<c2;j++) scanf("%d",&B[i][j]);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            long long sum=0;
            for(int k=0;k<c1;k++) sum += (long long)A[i][k] * B[k][j];
            C[i][j] = (int)sum;
        }
    }
    printf("Product matrix (%d x %d):\n", r1, c2);
    for(int i=0;i<r1;i++){ for(int j=0;j<c2;j++) printf("%d ", C[i][j]); printf("\n"); }
    return 0;
}

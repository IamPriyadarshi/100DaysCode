/* Q79: Diagonal traversal of a matrix (top-left to bottom-right diagonals) */
#include <stdio.h>
int main(void){
    int r,c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d",&r,&c)!=2) return 0;
    if (r<=0||c<=0||r>50||c>50) return 0;
    int a[50][50];
    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);
    printf("Diagonal traversal (by i+j constant):\n");
    for(int d=0; d<=r+c-2; ++d){
        // i from max(0, d-(c-1)) to min(r-1, d)
        int start = d - (c - 1); if (start < 0) start = 0;
        int end = d < r-1 ? d : r-1;
        for(int i = start; i <= end; ++i){
            int j = d - i;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

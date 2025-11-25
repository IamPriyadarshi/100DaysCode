/* Q71: Read and print a matrix */
#include <stdio.h>
int main(void) {
    int r, c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2) return 0;
    if (r<=0 || c<=0 || r>50 || c>50) return 0;
    int a[50][50];
    printf("Enter matrix elements (%d x %d):\n", r, c);
    for (int i=0;i<r;i++) for (int j=0;j<c;j++) scanf("%d",&a[i][j]);
    printf("Matrix:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}

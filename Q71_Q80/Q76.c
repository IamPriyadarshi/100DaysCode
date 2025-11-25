/* Q76: Check if a matrix is symmetric */
#include <stdio.h>
#include <stdbool.h>
int main(void){
    int n;
    printf("Enter size of square matrix (n): ");
    if (scanf("%d",&n)!=1) return 0;
    if (n<=0||n>50) return 0;
    int a[50][50];
    printf("Enter matrix elements:\n");
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    bool sym=true;
    for(int i=0;i<n && sym;i++) for(int j=i+1;j<n;j++) if(a[i][j]!=a[j][i]) { sym=false; break; }
    if(sym) printf("Matrix is symmetric\n"); else printf("Matrix is not symmetric\n");
    return 0;
}

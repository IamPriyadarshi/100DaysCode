/* Q77: Check if diagonal elements are distinct */
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
    bool distinct=true;
    for(int i=0;i<n && distinct;i++){
        for(int j=i+1;j<n;j++){
            if(a[i][i]==a[j][j]) { distinct=false; break; }
        }
    }
    if(distinct) printf("Diagonal elements are distinct\n"); else printf("Diagonal elements are NOT distinct\n");
    return 0;
}

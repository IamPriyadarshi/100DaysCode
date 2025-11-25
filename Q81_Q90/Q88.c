/* Q88: Replace spaces with hyphens */
#include <stdio.h>
int main(void){
    char s[500];
    printf("Enter a string: ");
    fgets(s,500,stdin);
    for(int i=0;s[i] && s[i]!='\n';i++){
        if(s[i]==' ') s[i]='-';
    }
    printf("Modified: %s\n",s);
    return 0;
}

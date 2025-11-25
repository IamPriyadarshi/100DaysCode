/* Q84: Lowercase to uppercase without built-in */
#include <stdio.h>
int main(void){
    char s[500];
    printf("Enter lowercase string: ");
    fgets(s,500,stdin);
    for(int i=0;s[i] && s[i]!='\n';i++){
        if(s[i]>='a' && s[i]<='z') s[i]=s[i]-32;
    }
    printf("Uppercase: %s", s);
    return 0;
}

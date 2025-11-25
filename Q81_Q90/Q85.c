/* Q85: Reverse a string */
#include <stdio.h>
int main(void){
    char s[500];
    printf("Enter a string: ");
    fgets(s,500,stdin);
    int len=0;
    while(s[len] && s[len]!='\n') len++;
    for(int i=0,j=len-1;i<j;i++,j--){
        char t=s[i]; s[i]=s[j]; s[j]=t;
    }
    s[len]='\0';
    printf("Reversed: %s\n", s);
    return 0;
}

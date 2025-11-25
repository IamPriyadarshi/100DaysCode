/* Q86: Check palindrome */
#include <stdio.h>
int main(void){
    char s[500];
    printf("Enter a string: ");
    fgets(s,500,stdin);
    int len=0; while(s[len] && s[len]!='\n') len++;
    int pal=1;
    for(int i=0,j=len-1;i<j;i++,j--){
        if(s[i]!=s[j]){ pal=0; break; }
    }
    if(pal) printf("Palindrome\n"); else printf("Not Palindrome\n");
    return 0;
}

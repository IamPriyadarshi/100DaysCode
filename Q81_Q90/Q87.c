/* Q87: Count spaces, digits, special chars */
#include <stdio.h>
int main(void){
    char s[500];
    printf("Enter a string: ");
    fgets(s,500,stdin);
    int sp=0,d=0,sc=0;
    for(int i=0;s[i] && s[i]!='\n';i++){
        if(s[i]==' ') sp++;
        else if(s[i]>='0'&&s[i]<='9') d++;
        else if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))) sc++;
    }
    printf("Spaces=%d Digits=%d SpecialChars=%d\n",sp,d,sc);
    return 0;
}

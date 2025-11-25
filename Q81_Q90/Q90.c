/* Q90: Toggle case */
#include <stdio.h>
int main(void){
    char s[500];
    printf("Enter a string: ");
    fgets(s,500,stdin);
    for(int i=0;s[i] && s[i]!='\n';i++){
        if(s[i]>='a'&&s[i]<='z') s[i]=s[i]-32;
        else if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
    }
    printf("Toggled: %s\n", s);
    return 0;
}

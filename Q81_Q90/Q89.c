/* Q89: Count frequency of a character */
#include <stdio.h>
int main(void){
    char s[500], ch;
    printf("Enter a string: ");
    fgets(s,500,stdin);
    printf("Enter character to count: ");
    scanf("%c", &ch);
    int cnt=0;
    for(int i=0;s[i] && s[i]!='\n';i++){
        if(s[i]==ch) cnt++;
    }
    printf("Frequency of '%c' = %d\n", ch, cnt);
    return 0;
}

/* Q82: Print each character on a new line */
#include <stdio.h>
int main(void){
    char s[500];
    printf("Enter a string: ");
    fgets(s,500,stdin);
    for(int i=0; s[i] != '\0' && s[i] != '\n'; i++)
        printf("%c\n", s[i]);
    return 0;
}

/* Q81: Count characters without strlen */
#include <stdio.h>
int main(void){
    char s[500];
    printf("Enter a string: ");
    fgets(s, 500, stdin);
    int count=0;
    while(s[count] != '\0' && s[count] != '\n') count++;
    printf("Length = %d\n", count);
    return 0;
}

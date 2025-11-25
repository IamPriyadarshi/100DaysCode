/* Q83: Count vowels and consonants */
#include <stdio.h>
int main(void){
    char s[500];
    printf("Enter a string: ");
    fgets(s,500,stdin);
    int v=0,c=0;
    for(int i=0;s[i] && s[i]!='\n';i++){
        char ch=s[i];
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            char t = (ch>='A'&&ch<='Z'? ch+32: ch);
            if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u') v++;
            else c++;
        }
    }
    printf("Vowels=%d Consonants=%d\n",v,c);
    return 0;
}

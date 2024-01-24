#include <stdio.h>
#include <stdlib.h>

int words(char *s){
    int cp=0;
    int i=0;

    while(i<strlen(s)){
        if (s[i]!=' ' &&(s[i+1]==' '|| s[i+1]=='\0')){cp++;}i++;
    }
    return cp;
}
int main()
{
    char s[100];
    gets(s);
    printf("nombres des mots est : %d",words(s));


    return 0;
}

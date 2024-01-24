#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    printf("enter a string:");
    gets(s);
    int i=0;
    int slen = strlen(s);
    while(i<=slen){
        if (s[i]=='a' ||s[i]=='e' ||s[i]=='y' ||s[i]=='u' ||s[i]=='i' ||s[i]=='o'){
            for (int j=i;j<=slen ;j++){
                s[j]=s[j+1];
            }
            slen--;
        }
        i++;

    }
    s[slen]='\0';
    puts(s);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseWords(char *s);

int main()
{
    char s[]="This is the way.";

    reverseWords(s);
    puts(s);
    reverseWords(s);
    puts(s);

    return 0;
}
void reverseWords(char *s){
    int len=strlen(s);
    int  i=0,j=0;
    char tmp[100];
    for(i=0;i<len;i++){
        for(j=0;i<len;j++, i++){
            if (s[i]== ' '|| s[i]== '.') break;
            tmp[j]=s[i];
        }
        while(j>0){
            j--;
            s[i-j-1]=tmp[j];
        }
    }

}


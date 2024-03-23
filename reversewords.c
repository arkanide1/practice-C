#include <stdio.h>
#include <string.h>
#include <stdlib.h>


    char* reverseWords(char* s) {
        char marks[] = " ,.!\t\0\n?;:";
        int len=strlen(s);
        int i=0,j=0 ;
        char tmp[100];
        for (i =0;i<len;i++){
            for (j =0;i<len;j++, i++){
                if (s[i] == ' ' || s[i] == '.')break;
                tmp[j] = s[i];
            }
            while (j>0){
                j--;
                s[i-j-1] =tmp[j];
            }
        }
        s[len]='\0';
        return s;
    }


int main(){
    char chaine[100]="hwllo world";
    char *result = reverseWords(chaine);
    puts(result);
    return 0;
}
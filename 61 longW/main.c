#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int longestWord(char *s){

    int len=strlen(s);
    int cp=0;
    int max=-1;
    char nonwords[]=" ,.;\n\t";
    int i=0;
    while (i<len){
        cp=0;
        while (i<len){
            if(strchr(nonwords,s[i])!= NULL)break;
            i++;
            cp++;
        }

        if (max<cp) max=cp;

        while (i<len){
            if(strchr(nonwords,s[i])== NULL)break;
            i++;
        }
    }

    return max;

}

int main()
{
    char s[100];
    gets(s);

    printf("length of the longest word is : %d",longestWord(s));;

    return 0;
}

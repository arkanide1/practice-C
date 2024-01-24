#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int smallestWord(char *s);

int main()
{
    char s[100];
    gets(s);
    printf("the lenght of the smallest number is : %d ",smallestWord(s) );

    return 0;
}

int smallestWord(char *s){
    int len=strlen(s) , cp=0, i=0, min=100;
    char nonwords[]=" ,.;:\n\t";

    while(i<len){
        cp=0;
        while (i<len){
            if(strchr(nonwords,s[i])!= NULL)break;
            i++;
            cp++;
        }
        if (min > cp ) min = cp;
        while(i<len){
            if ( strchr(nonwords, s[i]) == NULL) break;
            i++;
        }
    }
    return min;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trimbefore(char *s);
void trimafter(char *s);

int main()
{
    char s1[]="    \n\t\n  this is the way.";
    char s2[]="this is the way.    \n\t\n  ";
    char s3[]="    \n\t\n  this is the way.   \n\t\n  ";
    trimbefore(s1);
    trimafter(s2);
    puts(s1);
    puts(s2);
    trimbefore(s3);
    trimafter(s3);
    puts(s3);
    return 0;
}

void trimbefore(char *s){
    int cp=0;
    while(s[cp]== ' ' ||s[cp]=='\t' || s[cp]=='\n')cp++;

    if (cp !=0){
        int i= 0;
        while(s[i+cp]!='\0'){
            s[i]=s[i+cp];i++;
        }
    s[i]='\0';
    }
}

void trimafter(char *s){
    int cp = strlen(s)-1;
    while (cp>0){
        if(s[cp]== ' ' ||s[cp]=='\t' || s[cp]=='\n'){
            cp--;
        }else{break;}
    }

    if (cp != strlen(s)-1){
        s[cp+1]='\0';
    }
}

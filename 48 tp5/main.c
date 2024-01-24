#include <stdio.h>
#include <stdlib.h>


char * prefixecommun(char * chaine1, char * chaine2);
int main()
{
    char ch1[50], ch2[50], *ch;
    gets(ch1);
    gets(ch2);

    ch=prefixecommun(ch1,ch2);
    puts(ch);
    return 0;
}
char * prefixecommun(char * ch1, char * ch2){
    char *ch,*p1=ch1, *p2=ch2;
    int lg1=strlen(ch1), lg2=strlen(ch2);



    if (*p1 != *p2){
     return NULL;
    }else {
    ch=(char*)malloc((lg1>lg2? lg1:lg2)*sizeof(char));
        while(*p1 == *p2){
            ch[p1-ch1]= *p1;p1++;p2++;
        }
    }
    ch[p1-ch]='\0';
    return ch;



}

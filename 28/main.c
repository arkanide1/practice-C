#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[100];
    char *p,*q, tmp;
    int lg;
    gets(ch);
    lg=strlen(ch);

    for(p=ch,q=ch+lg-1;p<q;p++,q--){
        tmp=*p;
        *p=*q;
        *q=tmp;
    }

    puts(ch);
    return 0;
}

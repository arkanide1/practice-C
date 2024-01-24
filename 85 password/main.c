#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool goodPass(char *s){
    int len = strlen(s);
    int low=0, up=0, sym= 0, digit=0;
    char digits[]="123456789";
    char lows[]="abcdefghigklmnopqrstuvwxyz";
    char ups[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char syms[]="!@#$*()-+{}[]";

    if (len < 8)
        return false;

    for (int i=0;i<len;i++){
        if (strchr(lows,s[i])!=NULL){
            low+=1;
        } else if (strchr(ups,s[i])!=NULL){
            up+=1;
        }else if (strchr(syms,s[i])!=NULL){
            sym+=1;
        }else if ( strchr(digits,s[i]) != NULL){
            digit+=1;
        }
    }
    if (low ==0 ||up ==0 ||sym ==0 ||digit ==0 )
        return false;

    return true;
}

int main()
{
    char pass[100];

    do{
        printf("enter a password :");
        gets(pass);
    }while (! goodPass(pass) );

        printf("thats what im talking about");
    return 0;
}


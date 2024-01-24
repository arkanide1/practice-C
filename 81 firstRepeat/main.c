#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void printFisrtRepeat(char *s){
    int len = strlen(s);
    int i,j;
    bool found = false;
    for ( i = 0 ;i < len ;i++){
        for ( j=i+1;j<len;j++){
            if (s[i]==s[j]){
                found = true;
            }
        }
        if (found){
            printf("%c\n", s[i]);
            break;
        }
    }
    if(!found){
        printf ("repeat not found");
    }



}

int main()
{
    char s[100]="abcdefghijklmnopjklmnop";
    printFisrtRepeat(s);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch1[100], ch2[100];
    int cp=0, lg1,lg2,i;
    do{
    gets(ch1);
    gets(ch2);
    lg1=strlen(ch1);
    lg2=strlen(ch2);
    }while(lg1 != lg2);

    for(i=0;i<lg1;i++){
        if(ch1[i] != ch2[i]){
            cp++;
        }
    }
    printf("la distance est %d " , cp);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void minOcc(char *s);

int main()
{
    char s[]="cabcdabc";
    minOcc(s);
    return 0;
}
void minOcc(char *s){
    int len=strlen(s);
    int F[len], i,j,cp;
    for (i=0;i<len;i++){
            F[i]=-1;
        cp=1;
        for(j=0;j<len;j++){
            if (s[i]== s[j]&& i!=j){
                F[j]=0;
                cp++;
            }
        }
        if ( F[i] != 0){
            F[i]=cp;
        }

    }

    int max =F[0];

    for (i=0;i<len;i++){
        if (F[i]>max)
            max= F[i];
    }
    for(i =0;i<len;i++){
        if (F[i]==max)
            printf("%c - %d\n",s[i],F[i]);
    }
}

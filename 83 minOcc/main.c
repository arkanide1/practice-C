#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void minOcc(char *s);

void minOcc2(char *s);

int main()
{
    char s[]="abcdab";
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


    for (i=0;i<len;i++){
        if (F[i]==1)
            printf("%c - %d\n",s[i],F[i]);

    }
}


void minOcc2(char *s){
    int len = strlen(s);
    char unique[len];
    int counted=0;
    int minCount;
    int minChar;

    for(int i=0;i<len;i++){
        bool alreadyCounted = false;

        for (int j=0;j<counted;j++){
            if (s[i]== unique[j])
                alreadyCounted=true;
        }

        if(alreadyCounted) continue;
        int count = 0;

        for (int j=0;j<len;j++)
            if (s[i]==s[j]) count++;

        unique[counted++]=s[i];
        counted++;

        if (counted==1){
            minCount = count;
            minChar=s[i];
        }else if (count < minCount){
            minCount= count;
            minChar= s[i];
        }
    if (len>0){
        printf("%c:%d\n",minChar,minCount);
    }else {
        printf("errorstring has 0 length");
    }
    }
}

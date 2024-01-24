#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[10];
    int lg,F[10],i,j,cp, max,posmax;

    gets(ch);
    lg=strlen(ch);


    for(i=0;i<lg;i++){
        F[i]= -1;
    }
    for(i=0;i<lg;i++){
        cp=1;
        for(j=i+1;j<lg;j++){
            if (ch[i] == ch[j]){
                F[j]=0;
                cp++;
            }
        }
        if (F[i] != 0){
            F[i]= cp;
        }
    }
    max=F[0];
    for(i=0;i<lg;i++){
        if( max < F[i] ){
            max= F[i];
        }
    }

    for(i=0;i<lg;i++){
        if( max == F[i] ){
            posmax=i;

    printf(" %c il se repete %d fois\n ",ch[posmax], max  );
        }
    }



    return 0;
}

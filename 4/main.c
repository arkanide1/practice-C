#include <stdio.h>
#include <stdlib.h>
#define Nmax 100

int main()
{
    int T[Nmax],F[Nmax],i,j,cp,N;

    do{
        printf("enter la taille de tableau :");
        scanf("%d", &N);
    }while(N<0 ||N>Nmax);

    for (i=0;i<N;i++){
        printf("T[%d]:",i);
        scanf("%d", &T[i]);
    }
    for (i=0;i<N;i++){
        F[i]=-1;
    }

    for(i=0;i<N;i++){
        cp=1;
        for(j=i+1;j<N;j++){
            if(T[i] == T[j]){
                F[j]=0;
                cp++;
            }
        }
        if (F[i] != 0){
            F[i]=cp;
        }
    }
    for (i=0;i<N;i++){
        if (F[i]==1){
            printf("%d\n", T[i]);
        }
    }

    return 0;
}

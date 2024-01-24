#include <stdio.h>
#include <stdlib.h>
#define Nmax 100
int main()
{
    int T[Nmax],N,i,pos,M;

    do{
        printf("enter la taille de tableau :");
        scanf("%d", &N);
    }while(N<0 ||N>Nmax);

    for (i=0;i<N;i++){
        printf("T[%d]:",i);
        scanf("%d", &T[i]);
    }
    do{
        printf("enter la position :");
        scanf("%d", &pos);
    }while(pos <0 || pos > N);

    printf("enter l'element a insere :");
    scanf("%d", &M);

    for(i=N;i>pos;i--){
        T[i]=T[i-1];
    }
    T[pos]=M;
    N++;
    for(i=0;i<N;i++){
        printf("T[%d]=%d\n",i,T[i]);
    }

    return 0;
}

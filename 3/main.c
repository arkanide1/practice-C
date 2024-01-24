#include <stdio.h>
#include <stdlib.h>
#define Nmax 100
int main()
{
    int T[Nmax],N,i,pos;

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
        if(pos <0 || pos > N) printf("pos n'est pas valide!");
    }while(pos <0 || pos > N);


    for(i=pos;i<N;i++){
        T[i]=T[i+1];
    }
    N--;
    for(i=0;i<N;i++){
        printf("T[%d]=%d\n",i,T[i]);
    }

    return 0;
}

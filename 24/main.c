#include <stdio.h>
#include <stdlib.h>
#define Nmax 100
int main()
{
    int T[Nmax];
    int N, *p, *p1, *p2, tmp;

    do{
        printf("enterer la taille du tableau :");
        scanf("%d" , &N);
    }while(N<0 || N>Nmax);

    for(p=T;p<T+N;p++){
        printf("T[%d] : ", p-T);
        scanf("%d" , p);
    }

    for(p1=T;p1<T+N-1;p1++){
        p=p1;
        for(p2=p1+1;p2<T+N;p2++){
            if (*p > *p2){
                p=p2;
            }
            if (p != p1){
                tmp=*p1;
                *p1=*p2;
                *p2=tmp;
            }
        }

    }

    for(p=T;p<T+N;p++){
        printf("T[%d] = %d\n", p-T, *p);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define Nmax 100
int main()
{
    int *p, *q;
    int T[Nmax],N, tmp;

    printf("entere la taile du tableau :");
    scanf("%d" , &N);


    for(p=T;p<T+N;p++){
        printf("T[%d] :", p-T);
        scanf("%d", p);
    }
    for(p=T, q=T+N-1 ;p<q;p++, q--){
        tmp = *p;
        *p=*q;
        *q=tmp;
    }

    for(p=T;p<T+N;p++){
        printf("T[%d] = %d", p-T, *p);
    }

    return 0;
}

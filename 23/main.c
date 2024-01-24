#include <stdio.h>
#include <stdlib.h>
#define Nmax 100
int main()
{
    int A[Nmax], B[Nmax];
    int N,M;
    int *p,*q;

    printf("taille A :");
    scanf("%d" , &N);
    printf("taille B :");
    scanf("%d" , &M);

    for(p=A;p<N+A;p++){
        printf("A[%d] :", p-A);
        scanf("%d" , p);
    }
    for(q=B;q<B+M;q++){
        printf("B[%d] :", q-B);
        scanf("%d" , q);
    }
    for(p=A+N , q=B;p<N+A+M;p++, q++){
        *p=*q;
    }

    for(p=A;p<A+M+N;p++){
        printf("A[%d] = %d", p-A, *p);
    }

    return 0;
}

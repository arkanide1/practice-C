#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N=10;
    int x , T[N];
    int *p ,*q;

    for(p=T;p<T+N;p++){
        printf("T[%d]: ", p-T);
        scanf("%d" , p);
    }
    printf("enter la valeur de x :");
    scanf("%d" , &x);

    for(p=T,q=T;p<T+N;p++){
        *q=*p;
        if( *q != x ){
            q++;
        }

    }
    N = q-T;

    for(p=T;p<T+N;p++){
        printf("%d   ", *p);
    }


    return 0;
}

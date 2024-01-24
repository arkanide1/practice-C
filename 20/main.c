#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10],*p;

    p=T;

    for(p=T; p<T+10;p++){

        printf("T[%d] : " ,p-T);
        scanf("%d" , p);
    }

    for(p=T;p<T+10;p++){
        printf("T[%d] = %d " ,p-T, *p);
    }
    return 0;
}

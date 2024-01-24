#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i ;
    int *p= &n;
    do{
        printf("enter un nombre positif :");
        scanf("%d", p);
    }while(*p<0);

    for (i=1;i<= *p/2;i++){
        if (*p%i==0){
            printf("%d  ", i);
        }
    }

    return 0;
}

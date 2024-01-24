#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*)
    int n,s=0,p=1,i ;

    printf("enter un nombre :");
    scanf("%d", &n);



    for(i=2;i<=n;i=i+2){s+= i; p*=i;}
    printf("la somme est %d produit est %d ",s,p);

    i=2;s=0;p=1;
    while(i<=n){s+= i; p*=i;i=i+2;}
    printf("la somme est %d produit est %d ",s,p);

    int i, N;
    printf("enter un nombre :");
    scanf("%d", &N);

    for (i=2;i<=N/2;i++){
        if ( N%i == 0)
            printf("%d   ", i);
    }


    int N, a, puis=1 , i;

    do{
            printf("enter lq puissance :");
        scanf("%d", &N);

    }while( N<0 || N>10 );

    printf("enter un nombre :");
    scanf("%d", &a);


    for(i=0;i<N;i++){
        puis=puis*a;

    }
    printf(" %d ",puis);

    int i,j;
    int N;
    printf("enter un nombre :");
    scanf("%d", &N);


    for (i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    */

    int i;
    int N, s=0;
    printf("enter un nombre :");
    scanf("%d", &N);

    for (i=1;i<=N/2;i++){
        if (N%i==0) s+=i;
    }
    s==N ? printf("parfait ") : printf("n'est pas parfait");

    return 0;
}

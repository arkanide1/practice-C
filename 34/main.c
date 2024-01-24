#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *T,n,min , i;

    printf("entez la taille du tab :");
    scanf("%d" , &n);
    T=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++){
        printf("T[%d] : ", i);
        scanf("%d", &T[i] );
    }
    min=*T;

    for(i=0;i<n;i++){
        if (min > T[i]){
             min=T[i];
        }

    }
    printf("le min est : %d ", min);



    return 0;
}

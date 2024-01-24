#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *n ,s=0;

    n=(int*)malloc(sizeof(int));

    printf("enter un nombre: ");
    scanf("%d", n);

    for(i=1;i<=*n;i=i+2){
        s+=i;
    }

    printf("lq somme est %d" , s);
    free(n);

    return 0;
}

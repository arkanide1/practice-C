#include <stdio.h>
#include <stdlib.h>

void multi(int x);
int main()
{
    int n;
    printf("enter unn nomber :");
    scanf("%d", &n);
    multi(n);

    return 0;
}

void multi(int x){
    int i;
    for (i=0;i<=10;i++){
        printf("%d * %d = %d\n",x,i,x*i);
    }
}

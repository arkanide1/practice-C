#include <stdio.h>
#include <stdlib.h>

int cube(int x);
int main()
{
    int n;
    printf("enter un nomber :");
    scanf("%d", &n);
    printf("le cube de %d est %d",n,cube(n));


    return 0;
}
int cube(int x){
    return x*x*x;
}

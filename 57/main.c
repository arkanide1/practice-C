#include <stdio.h>
#include <stdlib.h>

int sum (int N){
    if (N==0) return 0;
    return N+sum(N-1);
}

int main()
{
    int N;
    printf("enter a number :");
    scanf("%d", &N);
    printf("%d\n", sum(N));
    return 0;
}

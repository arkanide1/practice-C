#include <stdio.h>
#include <stdlib.h>

void estpremier(int x);
int main()
{
    int n;
    printf("enter un nomber :");
    scanf("%d", &n);
    estpremier(n);
    return 0;
}
void estpremier(int x){
    int i ,cp=0;
    for(i=2;i<x/2;i++){
        if (x%i==0){
            cp=1;
        }
    }
    cp==0 ? printf("est premier") : printf("n'est pas premier");
}

#include <stdio.h>
#include <stdlib.h>

int tribonacci2(int n){
    if (n==0) return 0;
    else if (n==1 || n==2 )return 1;
    else return tribonacci(n-1)+tribonacci(n-2)+ tribonacci(n-3);
}
int tribonacci(int n){

    int a=0,b=1,c=1;
    int sum;
    if (n==0) return 0;
    else if (n==1 )return 1;
    else{
        for(int i=3;i<=n;i++){
            sum= a+b+c ;
            a=b;
            b=c;
            c=sum;
        }
    }
    return sum;
}

int main()
{
    int n;
    printf("enter a num :");
    scanf("%d", &n);
    printf("%d",tribonacci(n) );

    return 0;
}

#include <stdio.h>
#include <stdlib.h>


void fct(int *a,int *b){
    int s ,p;
    if (*a**b>0){
        s=*a;
        *a=*b;
        *b=s;
    }else{
        s=*a+*b;
        p=*a**b;
        *a = s;
        *b = p;
    }

}
int main()
{
    int a,b;
    printf("enter la valeur de a:");
    scanf("%d", &a);
    printf("enter la valeur de b:");
    scanf("%d", &b);
    fct(&a,&b);
    printf(" la nouvelle valeur de a: %d\n",a);
    printf(" la nouvelle valeur de b: %d\n",b);


    return 0;

}

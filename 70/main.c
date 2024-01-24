#include <stdio.h>
#include <stdlib.h>

int main(){

    int  A[]={12,23,34,45,56,67,78,89,90};
    int *p=A;
    int n=2;

    printf("1 : %d\n", *p+12);
    printf("2 : %d\n", *(p+n));
    printf("3 : %d\n", *(p++));
    printf("4 : %d\n", ++*p);
    printf("5 : %d\n", &A[3]-p+1);
    printf("6 : %d\n", A[*p%2?n--:--n]);
    printf("7 : %d\n", --*p**p--);
    printf("1 : %d\n", *p );
    printf("8 : %d\n", ++*p );




    return 0;
}

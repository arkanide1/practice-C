#include <stdio.h>
#include <stdlib.h>

void bar(){
    int nb=1337;
}
int *foo(){
    int *n;
    n = malloc(sizeof(int));
    *n=42;

    return n;
}



int main()
{
    int *p;
    p=foo();
    printf("%d\n", *p);
    bar();
    printf("%d\n", *p);


    return 0;
}

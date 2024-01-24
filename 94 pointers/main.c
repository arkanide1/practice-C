#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb= 42;
    int *p;
    p=&nb;
    printf("%d , %.3f , %e\n", *p, (float)*p , *(float *)p );

    int n=0b100000000;
    int *pn=&n;
    printf("%d %d", *pn, *(short *)pn  );


    return 0;
}

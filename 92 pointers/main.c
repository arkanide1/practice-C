#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n=9;
    int *pn;
    int **ppn;
    int **ppm;
    int ***pppn;

    pn= &n;
    ppn = &pn;
    pppn= &ppn;

    //les adresses
    printf("%d\n", n);
    printf("%p\n", pn);
    printf("%p\n", ppn);
    printf("%p\n", pppn);
    printf("\n");

    //pn
    printf("%d\n", pn);
    printf("%d\n", *pn);
    printf("\n");

    //ppn
    printf("%d\n", ppn);
    printf("%d\n", *ppn);
    printf("%d\n", **ppn);
    printf("\n");

    //pppn
    printf("%d\n", pppn);
    printf("%d\n", *pppn);
    printf("%d\n", **pppn);
    printf("%d\n", ***pppn);



    return 0;
}

int myfct(int b){
    return b*2;
}

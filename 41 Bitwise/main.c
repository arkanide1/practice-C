#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x=9;

    unsigned int y=24;

    unsigned int r ;

    r= x<< 2;

    printf("r : %d\n", r);

    r= x>> 2;

    printf("r : %d\n", r);

    r= ~x;

    printf("r : %d\n", r);

    r= x&y;

    printf("r : %d\n", r);

    r= x|y;

    printf("r : %d\n", r);

    r= x^y; // ou exclusive

    printf("r : %d\n", r);


    return 0;
}

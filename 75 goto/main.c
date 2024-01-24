#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=0;


        start:
    if (i<10){
        printf("statement %d\n", i);
        i++;
        goto start;
    }


    return 0;
}

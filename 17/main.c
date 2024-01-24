#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , *pa=&a;

    scanf("%d",pa);
    if (*pa%2 ==0){
        printf("%d  est pair", *pa);
    }else{
        printf("%d  n'est pas pair",*pa);
    }


    return 0;
}

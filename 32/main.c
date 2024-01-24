#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pr, *rv;

    pr=(int*)malloc(sizeof(int));
    rv=(int*)malloc(sizeof(int));

    printf("enter le revient :");
    scanf("%d" , rv);
    printf("enter le vente :");
    scanf("%d", pr);

    if (*rv-*pr >0){
        printf("perte");
    }else{
        printf("gaigne");
    }
    free(pr);
    free(rv);

    return 0;
}

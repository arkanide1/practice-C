#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a ,b;
    float *pa = &a , *pb=&b;
    printf("enter la valeur de a :");
    scanf("%f", pa);
    printf("enter la valeur de b :");
    scanf("%f", pb);

    printf("la somme est :%.2f\n", *pa+*pb);
    printf("la soustraction est :%.2f\n", *pa-*pb);
    printf("le produit est :%.2f\n", *pa * *pb);
    if(*pb==0){
        printf("la division est impossible !\n");
    }else {
        printf("la division est : %.2f\n ", *pa / *pb);
    }




    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int i;

float somme(float T[]);
float produit(float T[]);
float moyenne(float T[]);
void posneg(float T[]);
int main()
{
    float T[10];
    for(i=0;i<10;i++){
        printf("T[%d] : ",i);
        scanf("%f", &T[i]);
    }
    printf("la somme est %.2f\n", somme(T));
    printf("la produit est %.2f\n", produit(T));
    printf("la moyenne est %.2f\n", moyenne(T));
    posneg(T);

    return 0;
}
float somme(float T[]){
    float somme=0;
    for(i=0;i<10;i++){
        somme+=T[i];
    }

    return somme;
}
float produit(float T[]){
    float prod=1;
    for(i=0;i<10;i++){
        prod*=T[i];
    }

    return prod;
}
float moyenne(float T[]){
    return somme(T)/10 ;
}
void posneg(float T[]){
    printf("les element positif :");
    for (i=0;i<10;i++){if (T[i]>0){printf("%.2f   ",T[i]);}}
    printf("\nles element negatif :");
    for (i=0;i<10;i++){if (T[i]<0){printf("%.2f   ",T[i]);}}
}

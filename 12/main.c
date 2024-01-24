#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
void D(float r);
void P(float r);
void S(float r);

int main()
{
    float r ;
    printf("enter le rayon :");
    scanf("%f", &r);
    D(r);
    P(r);
    S(r);

    return 0;
}
void D(float r){
    printf("le diametre est : %.2f\n",r*2);
}
void P(float r){
    printf("le perimetre est : %.2f\n",r*2*PI);
}
void S(float r){
    printf("le surface est : %.2f\n",r*r*PI);
}

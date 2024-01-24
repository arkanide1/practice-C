#include <stdio.h>
#include <stdlib.h>

int i;
float max(float T[]);
float min(float T[]);
void inverse(float T[]);

int main()
{
    float T[10];
    for(i=0;i<10;i++){
        printf("T[%d] : ",i);
        scanf("%f", &T[i]);
    }
    printf("le max est :%.2f\n", max(T));
    printf("le min est :%.2f\n", min(T));
    inverse(T);
    return 0;
}
float max(float T[]){
    float max = T[0];
    for(i=0;i<10;i++){
        if(T[i]>max){
            max=T[i];
        }
    }
    return max;
}
float min(float T[]){
    float min = T[0];
    for(i=0;i<10;i++){
        if(T[i] < min){
            min=T[i];
        }
    }
    return min;
}

void inverse(float T[]){
    for(i=0;i<10;i++){
        printf("T[%d] = %.2f",i ,T[10-i-1]);
    }
}























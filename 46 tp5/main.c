#include <stdio.h>
#include <stdlib.h>


float resistance( float r[], int n){
    float req=0.0;
    int i;
    for (i=0;i<n;++i) {
        if (r[i]==0.0) return 0.0;
        req += 1/r[i];
    }
    return 1/req;
}

int main()
{
    int i, n;
    float *r ,req;

    printf("enter le nombre de resistance :");
    scanf("%d" , &n);
    r=(float*)malloc(n*sizeof(float));

    for(i=0;i<n;i++){
            printf("resistance %d : ", i+1);
            scanf("%f", &r[i]);
    }
    req=resistance(r,n);
    printf("la resistance equivalente est :%.2f ", req);

    return 0;
}

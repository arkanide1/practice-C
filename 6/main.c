#include <stdio.h>
#include <stdlib.h>
#define Nmax 100
int main()
{
    int T[Nmax], P[Nmax], I[Nmax];
    int i,N,cpp=0,cpi=0,j,z;
    do{
        printf("enter ala taille u tableau:");
        scanf("%d", &N);
    }while(N<0 || N>Nmax);



    for (i=0;i<N;i++){
        printf("T[%d] : ", i);
        scanf("%d", &T[i]);
    }


    for(i=0;i<N;i++){
        if (T[i]%2 == 0){
            P[cpp++]=T[i];
        }else{
            I[cpi++]=T[i];
        }
    }
    printf("les elements paires :");
    for(i=0;i<cpp;i++){
        printf("%d   ", P[i]);
    }
    printf("les elements impaires :");
    for(i=0;i<cpi;i++){
        printf("%d   ", I[i]);
    }
    /*
    */
    return 0;
}

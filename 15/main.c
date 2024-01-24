#include <stdio.h>
#include <stdlib.h>
#define N 5
int i,j;

void remplir(float T[]){
    printf("remplir le tableau : \n");
    for (i=0;i<N;i++){
        printf("T[%d] :", i);
        scanf("%f", &T[i]);
    }
    afficher(T);
}
void triC(float T[]){
    int tmp , posmin;
    for (i=0;i<N-1;i++){
        posmin = i;
        for (j=i+1;j<N;j++){
            if ( T[posmin]>T[j] ){
                posmin=j;
            }
        }
        if ( posmin != i){
            tmp = T[i];
            T[i]=T[posmin];
            T[posmin] = tmp;
        }
    }
    afficher(T);
}

void triD(float T[]){
    int tmp , posmax;
    for (i=0;i<N-1;i++){
        posmax = i;
        for (j=i+1;j<N;j++){
            if ( T[posmax]<T[j] ){
                posmax=j;
            }
        }
        if ( posmax != i){
            tmp = T[i];
            T[i]=T[posmax];
            T[posmax] = tmp;
        }
    }
    afficher(T);
}

void afficher(float T[]){
    for (i=0;i<N;i++){
        printf("T[%d] = %.2f\n",i,T[i]);
    }
}

int main()
{
    float T[N];
    remplir(T);
    printf("le tri croissant est :\n");
    triC(T);
    printf("le tri decroissant est :\n");
    triD(T);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>


void triC(int *T, int N){
    int i,j,posmin,tmp;
    for(i=0;i<N-1;i++){
        posmin=i;
        for(j=i+1;j<N;j++){
            if (T[posmin]> T[j]){
                posmin =j;
            }
        }
        if (posmin != i){
            tmp= T[posmin];
            T[posmin]= T[i];
            T[i]=tmp;
        }
    }
}

int main()
{
   int *T;
   int N,i;

   printf("enter la taille du tableau :");
   scanf("%d" , &N);
   srand(time(NULL));

   for(i=0;i<N;i++){
    T[i]=rand()%21;
   }
    //before
   for(i=0;i<N;i++){
        printf("T[%d] =%d ",i,T[i]);
   }

   triC(T,N);
   //after
    printf("\n");
   for(i=0;i<N;i++){
        printf("T[%d] =%d ",i,T[i]);
   }


    return 0;
}

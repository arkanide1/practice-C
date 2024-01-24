#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *T;
    int N,i,n, s, OldN;
    char cont;
    printf("entrez la taille du tableau :");
    scanf("%d" , &N);
    T=(int*)malloc(N*sizeof(int));
    srand(time(NULL));

    for(i=0;i<N;i++){
        T[i]= rand()%21;
    }

    do{
    s=0;
    printf("les elements du tableau :\n");
     for(i=0;i<N;i++){
        printf("T[%d] = %d\n",i,T[i]);
        s+=T[i];
    }
    printf("la moyenne est : %.2f\n", (float)s/N);
    printf("continue Y/n");
    scanf(" %c" , &cont);
    if (cont == 'n' || cont == 'N' ){
        break;
    }else{
        OldN=N;
        printf("le nombre  des valeur :");
        scanf("%d", &n);
        N=N+n;
        T=(int*)realloc(T,N*sizeof(int));
        for(i=OldN;i<N;i++){
            printf("T[%d] :",i);
            scanf("%d" , &T[i]);
        }
    }
    }while(cont != 'n' || cont != 'N');

    free(T);
    return 0;
}

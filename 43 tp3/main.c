#include <stdio.h>
#include <stdlib.h>
#define Nmax 20
#define Cmax 20
#define Lmax 20

int main()
{
    /*
    int Notes[Nmax];
    int N,i;

    do {printf("enter le nombre des etudiants "); scanf("%d", &N);  }while(N>Nmax || N<0);

    for(i=0;i<N;i++){printf("Notes %d :" ,i+1); scanf("%d", &Notes[i]);  }
    for(i=0;i<N;i++){printf("Notes %d : %d " ,i+1, Notes[i]); }

    int T[]={1,2,4,6};
    int i , tmp;

    for  (i=0;i<4/2;i++){
        tmp = T[i];
        T[i]=T[4-i-1];
        T[4-i-1]= tmp;
    }
    for(i=0;i<4;i++){printf("T %d : %d \n" ,i, T[i]); }
    int A[Lmax][Cmax] ,B[Lmax][Cmax], AB[Lmax][Cmax];
    int i,j, L,C;
    do{
        printf("entere le nombre des lines :");
        scanf("%d",&L);
        printf("entere le nombre des columns :");
        scanf("%d",&C);

    }while(L<0||L>Lmax|| C<0||C>Cmax);

    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("A[%d][%d] : ",i,j);
            scanf("%d", &A[i][j]);
        }
    }

    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("B[%d][%d] : ",i,j);
            scanf("%d", &B[i][j]);
        }
    }
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            AB[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("AB[%d][%d] :%d ",i,j,AB[i][j] );
        }
        printf("\n");
    }


    int T[Nmax];
    int i,j, N,posmin ,tmp;

    do {
        printf("enter le taille :");
        scanf("%d", &N);

    }while(N<0 || N>Nmax);

    for (i=0;i<N;i++){
        do {
            printf("T[%d] :", i);
            scanf("%d", &T[i]);
        }while(T[i]%2);

    }
    //affichage
    printf("------------\n");
    for (i=0;i<N;i++){
        printf("T[%d] = %d \n", i,T[i]);
    }

    //tri

    for ( i = 0; i < N - 1; i++) {
        posmin = i;
        for ( j = i + 1; j < N; j++) {
            if (T[posmin] > T[j]) {
                posmin = j;
            }
        }
        if (posmin != i) {
            tmp = T[i];
            T[i] = T[posmin];
            T[posmin] = tmp;
        }
    }
    //affichage
    printf("------------\n");
    for (i=0;i<N;i++){
        printf("T[%d] = %d \n", i,T[i]);
    }

    //insere M

    int cp=0 , M;
    printf("eneter M:");
    scanf("%d", &M);


    for (i=0;i<N;i++){
        if (M>T[i]){
            cp++;
        }
    }
    for (i=N;i>cp;i--){
        T[i]=T[i-1];
    }
    T[cp]=M;N++;
    //affichage
    printf("------------\n");
    for (i=0;i<N;i++){
        printf("T[%d] = %d \n", i,T[i]);
    }
    */


    int T[Nmax];
    int i,j ,z, N,posmin , tmp;

    do {
        printf("enter le taille :");
        scanf("%d", &N);

    }while(N<0 || N>Nmax);


    for(i=0;i<N;i++){
        printf("T[%d] :",i);
        scanf("%d",&T[i] );
    }

    for (i=0;i<N;i++){
        for(j=i+1;j<N;){
            if (T[i] == T[j]){
                for(z=j;z<N;z++){
                    T[z]=T[z+1];
                }
                N--;
            }else{j++;}

        }
    }

    //tri

    for ( i = 0; i < N - 1; i++) {
        posmin = i;
        for ( j = i + 1; j < N; j++) {
            if (T[posmin] > T[j]) {
                posmin = j;
            }
        }
        if (posmin != i) {
            tmp = T[i];
            T[i] = T[posmin];
            T[posmin] = tmp;
        }
    }
    //affichage
    printf("------------\n");
    for (i=0;i<N;i++){
        printf("T[%d] = %d \n", i,T[i]);
    }


    return 0;
}

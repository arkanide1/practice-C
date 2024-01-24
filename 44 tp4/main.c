#include <stdio.h>
#include <stdlib.h>
#define Nmax 100
#include <time.h>
int main()
{
    /*

    int A[Nmax];
    int *p,*q, x,N;

    printf ("enter la taille du tableau :");
    scanf("%d", &N);
    printf ("enter x :");
    scanf("%d", &x);
    for(p=A;p<A+N;p++){
        printf("A[%d] : " , p-A);
        scanf("%d" , p);
    }

    for(p=A,q=A;p<A+N;p++){
        *q=*p;
        if (*q != x){
            q++;
        }
    }
    N=q-A;
    printf("\n---------------------------\n");
for(p=A;p<A+N;p++){
        printf("A[%d] = %d\n " , p-A, *p);
    }

    int N, *p, *p1, *p2, tmp;
    //remplissage

    do{
        printf("enter la taille :");
        scanf("%d", &N);
    }while(N<0||N>Nmax);

    int *T= (int *)malloc(N*sizeof(int));

    srand(time(NULL));
    for (p=T;p<T+N;p++){
        *p= rand()%10;
    }

    //affichage1
    printf("\naffichage\n");
    for(p=T;p<T+N;p++){
        printf("T[%d] = %d\n" , p-T, *p);
    }
    //tri
    p1=T;p2=T;
    for(p1=T;p1<T+N-1;p1++){
            p=p1;
        for(p2=p1;p2<T+N;p2++){
            if(*p>*p2){
                p=p2;
            }
        }
        if(p != p1){
            tmp = *p;
            *p=*p1;
            *p1=tmp;
        }
    }
    //affichage2
     printf("\naffichage trie\n");
    for(p=T;p<T+N;p++){
        printf("T[%d] = %d\n" , p-T, *p);
    }

    // tableau paire est impaire
    int cpi=0 , *TP, *TI;
    for(p=T;p<T+N;p++){
        if(*p%2 == 1){
            cpi++;
        }
    }

    TI=(int*)malloc(cpi*sizeof(int));
    TP=(int *)malloc((N-cpi)*sizeof(int));

    for(p=T, p1=TI , p2=TP ;p<T+N;p++){
        if(*p%2 == 1){
            *p1++=*p;
        }else{
            *p2++=*p;
        }
    }
    //affichage3
     printf("\naffichage pair impair\n");
    for(p1=TI;p1<TI+cpi;p1++){
        printf("TI[%d] = %d\n" , p1-TI,*p1 );
    }
    for(p2=TP;p2<TP+(N-cpi);p2++){
        printf("TP[%d] = %d\n" , p2-TP,*p2 );
    }
    //fusion

    p=T;p1=TI;p2=TP;

    if(*p1<*p2){
        *p++=*p1++;
    }else{
        *p++=*p2++;
    }

    while( p1<TI+cpi && p2 < TP+(N-cpi) ){
        if(*p1<*p2){if ( *p1 != *(p-1)) {*p++=*p1++;}else{p1++;}
        }else      {if ( *p2 != *(p-1)) {*p++=*p2++;}else{p2++;}}
    }
    while( p1<TI+cpi){
        if ( *p1 != *(p-1)) {*p++=*p1++;}else{p1++;}
    }
     while( p2 < TP+(N-cpi)){
        if ( *p2 != *(p-1)) {*p++=*p2++;}else{p2++;}
    }
    //affichage 5
    N=p-T;
    T=  (int*)realloc(T, N*sizeof(int));
    printf("\n tableau final\n");
    for(p=T;p<T+N;p++){
        printf("T[%d] = %d\n" , p-T,*p );
    }

    */

    return 0;
}

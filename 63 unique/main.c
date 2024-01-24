#include <stdio.h>
#include <stdlib.h>

void printUnique(int a[], int n);
void printUnique2(int a[], int n);


int main()
{
    int a[]={1,2,3,4,5,5,4,4,3,6,7,8,3};
    int len = sizeof(a)/sizeof(a[0]);
    printUnique2(a,len);


    return 0;
}
void printUnique(int a[], int n){
    int i,j,cp;
    int F[n];
    for(int i=0;i<n;i++){
        F[i]=-1;
    }

    for (int i= 0;i<n;i++){
        cp=1;
        for(int j=i+1;j<n;j++){
            if (a[i]==a[j]){
                cp++;
                F[j]=0;
                break;
            }
        }
        if(F[i] != 0 ){
            F[i]=cp;
        }
    }
    for(i=0;i<n;i++){
        if (F[i]==1){
            printf("%d   ", a[i]);
        }
    }
}

void printUnique2(int a[], int n){
    int i,j,matchFound;
    for (i=0;i<n;i++){
        matchFound=0;
        for(j=0;j<n;j++){
            if ( a[i]==a[j] && i!=j){
                matchFound=1;
            }
        }
        if (matchFound==0) printf("%d   ", a[i]);
    }

}

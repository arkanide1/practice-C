#include <stdio.h>
#include <stdlib.h>

void merge(int a[],int m, int b[], int n, int r[]){
    int i=0,j=0,k=0;
    while (i<m && j<n){
        if (a[i]<b[j]){
            r[k++]=a[i++];
        }else{
            r[k++]=b[j++];
        }
    }
    while(i<m){
        r[k++]=a[i++];
    }
    while(j<n){
        r[k++]=b[j++];
    }
    return

}

int main()
{
    int T1[]={1,3,5,7,9};
    int T2[]={2,4,5,6,8};
    int r[10];
    merge(T1,5,T2,5,r);

    for(int i = 0;i<10;i++){
        printf("r[%d] : %d\n",i,r[i]);
    }



    return 0;
}

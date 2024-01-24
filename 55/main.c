#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int A[]={1,2,3,4,5};
    int B[]={2,4,6,7,8,9};
    int cp=1;
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    for (int i = 0;i<sizeA;i++ ){
        for(int j=0;j<sizeB;j++){
            if( A[i] == B[j]){
                cp=0;
            }
        }
    }
    if (cp == 1){
        printf("disjoint");
    }else{
        printf("not disjoint");
    }
    */
    int A[]={1,2,3,4,5,6,7,8,9};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int i;
    for(i=0;i<sizeA;i++){
        printf(" | %d | ", A[i]);
    }
    do {
         printf("\n");
          printf("\n");
        int tmp = A[0];
        for(i=0;i<sizeA;i++){
            A[i]=A[i+1];
        }
        A[i]=tmp;

        for(i=0;i<sizeA;i++){
            printf(" | %d | ", A[i]);
        }
    }while(A[0]!=9);



    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool uniqueOccurrences(int* arr, int arrSize) {
    int i,j,cp;
    int *F = malloc(arrSize*sizeof(int));

    for (i=0;i<arrSize;i++){
            cp=1;
            F[i]=-1;

        for (j=i+1;j<arrSize;j++){
            if (arr[i]==arr[j]){
                cp++;
                F[j]=0;
            }
        }
        if (F[i]!=0){
            F[i]=cp;
        }

    }
    for (i=0;i<arrSize;i++){
        for (j=i+1;j<arrSize;j++){
            if (F[i]==F[j] && F[i]!=0 &&F[j]!=0){
                return false;
            }
        }

    }
    return true;


}




int main()
{
    int a[]={1,2,3};
    int len = sizeof(a)/sizeof(a[0]);

    bool result = uniqueOccurrences1(a,len);

    result ? printf("true"):printf("false");

    return 0;
}

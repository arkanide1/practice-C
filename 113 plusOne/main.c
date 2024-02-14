#include <stdio.h>
#include <stdlib.h>


int* plusOne(int* digits, int digitsSize, int* returnSize) {

    int i=digitsSize-1;
    *returnSize=digitsSize;

    digits[i]=digits[i]+1;
    while(digits[i]>9 && i!=0){

        digits[i]=0;
        digits[i-1]+=1;
        i--;
    }

    if (digits[0]==10){
        digits[0]=0;
        int *result = (int*)calloc(digitsSize+1, sizeof(int));
        *returnSize=digitsSize+1;

        for( i=0;i<digitsSize;i++){
            result[i+1]=digits[i];
        }
        result[0]=1;
        return result;
    }else{
        return digits;
    }
}


int main()
{
    int arr[] = {9};
    int N = sizeof(arr)/sizeof(arr[0]);
    int returnSize;


    int *res = plusOne(arr,N,&returnSize);
    for (int i =0;i<returnSize;i++){
            printf("%d\n" , res[i]);
    }
    free(res);
    return 0;
}


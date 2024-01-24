#include <stdio.h>
#include <stdlib.h>

void plusMinus(int arr_count, int* arr) {

    int Sums[]={0,0,0};
    float Ratio[]={0,0,0};
    for (int i=0;i<arr_count;i++){
        if (arr[i]>0){
            Sums[0] += 1;
        }else if ( arr[i]<0){
            Sums[1] += 1;
        }else {
            Sums[2] += 1;
        }
    }
    for(int i =0;i<3;i++){
        Ratio[i] = (float) Sums[i]/arr_count;
        printf("%.6f\n", Ratio[i]);
    }
}


int main()
{
    int arr[] = {1, 1, 0, -1, -1};
    int len =sizeof(arr)/sizeof(arr[0]);
    plusMinus(len, arr);
    return 0;
}

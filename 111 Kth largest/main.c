#include <stdio.h>
#include <stdlib.h>

int findKthLargest(int* nums, int numsSize, int k) {
    int posM , tmp;
    for (int i = 0;i<numsSize-1;i++){
        posM=i;
        for (int j=i+1;j<numsSize;j++){
            if (nums[posM]>nums[j]){
                posM=j;
            }
        }
        if (posM != i){
            tmp= nums[posM];
            nums[posM]=nums[i];
            nums[i]=tmp;
        }
    }
    return nums[numsSize-k];
}


int main()
{
    int nums[]={3,2,3,1,2,4,5,5,6};
    int len = sizeof(nums)/sizeof(nums[0]);
    int k=;
    int max= findKthLargest(nums,len, k);
    printf("%d\n",max );


    return 0;
}

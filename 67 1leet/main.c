#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize=2;
    int *res=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if( nums[i]+nums[j] == target && i!=j){
                res[0]=i;
                res[1]=j;
                return res;

            }
        }
    }
    free(res);
    *returnSize = 0;
    return NULL;


}

int main()
{
    int nums[]= {3,2,4};
    int len = sizeof(nums)/sizeof(nums[0]);
    int target = 6;
    int returnSize;
    int *result=twoSum(nums,len,target,&returnSize);

    printf("%d   ", result[0]);
    printf("%d", result[1]);

    return 0;
}
